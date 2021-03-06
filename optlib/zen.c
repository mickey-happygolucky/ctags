/*
 * Generated by ./misc/optlib2c from optlib/zen.ctags, Don't edit this manually.
 */
#include "general.h"
#include "parse.h"
#include "routines.h"
#include "field.h"
#include "xtag.h"


static void initializeZenParser (const langType language CTAGS_ATTR_UNUSED)
{
}

extern parserDefinition* ZenParser (void)
{
	static const char *const extensions [] = {
		"zen",
		NULL
	};

	static const char *const aliases [] = {
		NULL
	};

	static const char *const patterns [] = {
		NULL
	};

	static kindDefinition ZenKindTable [] = {
		{
		  true, 'c', "const", "constant values",
		},
		{
		  true, 'v', "var", "variables",
		},
		{
		  true, 'f', "fn", "functions",
		},
	};
	static tagRegexTable ZenTagRegexTable [] = {
		{"^(pub|[[:blank:]])*const[[:blank:]]+([A-Za-z0-9_]+)[[:blank:]]*=", "\\2",
		"c", NULL, NULL, false},
		{"^(pub|[[:blank:]])*var[[:blank:]]+([A-Za-z0-9_]+)[[:blank:]]*=", "\\2",
		"v", NULL, NULL, false},
		{"^(pub|[[:blank:]])*fn[[:blank:]]+([[:alnum:]]+).*$", "\\2",
		"f", NULL, NULL, false},
	};


	parserDefinition* const def = parserNew ("Zen");

	def->enabled       = true;
	def->extensions    = extensions;
	def->patterns      = patterns;
	def->aliases       = aliases;
	def->method        = METHOD_NOT_CRAFTED|METHOD_REGEX;
	def->kindTable     = ZenKindTable;
	def->kindCount     = ARRAY_SIZE(ZenKindTable);
	def->tagRegexTable = ZenTagRegexTable;
	def->tagRegexCount = ARRAY_SIZE(ZenTagRegexTable);
	def->initialize    = initializeZenParser;

	return def;
}
