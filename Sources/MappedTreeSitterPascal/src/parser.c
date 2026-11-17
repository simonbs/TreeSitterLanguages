#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 2715
#define LARGE_STATE_COUNT 560
#define SYMBOL_COUNT 371
#define ALIAS_COUNT 0
#define TOKEN_COUNT 180
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 38
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 240

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_COLON = 3,
  anon_sym_COMMA = 4,
  aux_sym_asmBody_token1 = 5,
  aux_sym_asmBody_token2 = 6,
  aux_sym_asmBody_token3 = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  aux_sym_type_token1 = 12,
  aux_sym_type_token2 = 13,
  aux_sym_type_token3 = 14,
  aux_sym__literalString_token1 = 15,
  anon_sym_POUND = 16,
  aux_sym__literalInt_token1 = 17,
  aux_sym__literalInt_token2 = 18,
  aux_sym__literalFloat_token1 = 19,
  anon_sym_DOT_DOT = 20,
  sym_kProgram = 21,
  sym_kLibrary = 22,
  sym_kUnit = 23,
  sym_kUses = 24,
  sym_kInterface = 25,
  sym_kDispInterface = 26,
  sym_kImplementation = 27,
  sym_kInitialization = 28,
  sym_kFinalization = 29,
  anon_sym_DOT = 30,
  sym_kBegin = 31,
  sym_kEnd = 32,
  sym_kAsm = 33,
  sym_kVar = 34,
  sym_kThreadvar = 35,
  sym_kConst = 36,
  sym_kConstref = 37,
  sym_kResourcestring = 38,
  sym_kOut = 39,
  sym_kType = 40,
  sym_kLabel = 41,
  sym_kExports = 42,
  sym_kAbsolute = 43,
  sym_kProperty = 44,
  sym_kRead = 45,
  sym_kWrite = 46,
  sym_kImplements = 47,
  sym_kDefault = 48,
  sym_kNodefault = 49,
  sym_kStored = 50,
  sym_kIndex = 51,
  sym_kDispId = 52,
  sym_kClass = 53,
  sym_kObject = 54,
  sym_kRecord = 55,
  sym_kObjcclass = 56,
  sym_kObjccategory = 57,
  sym_kObjcprotocol = 58,
  sym_kArray = 59,
  sym_kFile = 60,
  sym_kString = 61,
  sym_kSet = 62,
  sym_kOf = 63,
  sym_kHelper = 64,
  sym_kPacked = 65,
  sym_kGeneric = 66,
  sym_kSpecialize = 67,
  sym_kLt = 68,
  sym_kEq = 69,
  sym_kNeq = 70,
  sym_kGt = 71,
  sym_kLte = 72,
  sym_kGte = 73,
  sym_kAdd = 74,
  sym_kSub = 75,
  sym_kMul = 76,
  sym_kFdiv = 77,
  sym_kAt = 78,
  sym_kHat = 79,
  sym_kAssign = 80,
  sym_kAssignAdd = 81,
  sym_kAssignSub = 82,
  sym_kAssignMul = 83,
  sym_kAssignDiv = 84,
  sym_kOr = 85,
  sym_kXor = 86,
  sym_kDiv = 87,
  sym_kMod = 88,
  sym_kAnd = 89,
  sym_kShl = 90,
  sym_kShr = 91,
  sym_kNot = 92,
  sym_kIs = 93,
  sym_kAs = 94,
  sym_kIn = 95,
  sym_kFor = 96,
  sym_kTo = 97,
  sym_kDownto = 98,
  sym_kIf = 99,
  sym_kThen = 100,
  sym_kElse = 101,
  sym_kDo = 102,
  sym_kWhile = 103,
  sym_kRepeat = 104,
  sym_kUntil = 105,
  sym_kTry = 106,
  sym_kExcept = 107,
  sym_kFinally = 108,
  sym_kRaise = 109,
  sym_kOn = 110,
  sym_kCase = 111,
  sym_kWith = 112,
  sym_kGoto = 113,
  sym_kFunction = 114,
  sym_kProcedure = 115,
  sym_kConstructor = 116,
  sym_kDestructor = 117,
  sym_kOperator = 118,
  sym_kReference = 119,
  sym_kPublished = 120,
  sym_kPublic = 121,
  sym_kProtected = 122,
  sym_kPrivate = 123,
  sym_kStrict = 124,
  sym_kRequired = 125,
  sym_kOptional = 126,
  sym_kForward = 127,
  sym_kStatic = 128,
  sym_kVirtual = 129,
  sym_kAbstract = 130,
  sym_kSealed = 131,
  sym_kDynamic = 132,
  sym_kOverride = 133,
  sym_kOverload = 134,
  sym_kReintroduce = 135,
  sym_kInherited = 136,
  sym_kInline = 137,
  sym_kStdcall = 138,
  sym_kCdecl = 139,
  sym_kCppdecl = 140,
  sym_kPascal = 141,
  sym_kRegister = 142,
  sym_kMwpascal = 143,
  sym_kExternal = 144,
  sym_kName = 145,
  sym_kMessage = 146,
  sym_kDeprecated = 147,
  sym_kExperimental = 148,
  sym_kPlatform = 149,
  sym_kUnimplemented = 150,
  sym_kCvar = 151,
  sym_kExport = 152,
  sym_kFar = 153,
  sym_kNear = 154,
  sym_kSafecall = 155,
  sym_kAssembler = 156,
  sym_kNostackframe = 157,
  sym_kInterrupt = 158,
  sym_kNoreturn = 159,
  sym_kIocheck = 160,
  sym_kLocal = 161,
  sym_kHardfloat = 162,
  sym_kSoftfloat = 163,
  sym_kMs_abi_default = 164,
  sym_kMs_abi_cdecl = 165,
  sym_kSaveregisters = 166,
  sym_kSysv_abi_default = 167,
  sym_kSysv_abi_cdecl = 168,
  sym_kVectorcall = 169,
  sym_kVarargs = 170,
  sym_kWinapi = 171,
  sym_kAlias = 172,
  sym_kDelayed = 173,
  sym_kNil = 174,
  sym_kTrue = 175,
  sym_kFalse = 176,
  sym__space = 177,
  sym_pp = 178,
  sym_comment = 179,
  sym_root = 180,
  sym_program = 181,
  sym_library = 182,
  sym_unit = 183,
  sym_interface = 184,
  sym_implementation = 185,
  sym_initialization = 186,
  sym_finalization = 187,
  sym_moduleName = 188,
  sym_if = 189,
  sym_ifElse = 190,
  sym_while = 191,
  sym_repeat = 192,
  sym_for = 193,
  sym_foreach = 194,
  sym_exceptionHandler = 195,
  sym_exceptionElse = 196,
  sym_try = 197,
  sym_caseCase = 198,
  sym_case = 199,
  sym_block = 200,
  sym_asm = 201,
  sym_with = 202,
  sym_raise = 203,
  sym_statement = 204,
  sym_goto = 205,
  sym__statement = 206,
  sym_ifTr = 207,
  sym_ifElseTr = 208,
  sym_whileTr = 209,
  sym_repeatTr = 210,
  sym_forTr = 211,
  sym_foreachTr = 212,
  sym_exceptionHandlerTr = 213,
  sym__exceptionHandlersTr = 214,
  sym_tryTr = 215,
  sym_caseCaseTr = 216,
  sym_caseTr = 217,
  sym_blockTr = 218,
  sym_asmTr = 219,
  sym_withTr = 220,
  sym_raiseTr = 221,
  sym_statementTr = 222,
  sym_gotoTr = 223,
  sym__statementTr = 224,
  sym_assignment = 225,
  sym_varAssignDef = 226,
  sym_varDef = 227,
  sym_label = 228,
  sym_caseLabel = 229,
  sym__statementsTr = 230,
  sym_statementsTr = 231,
  sym_asmBody = 232,
  sym__expr = 233,
  sym__ref = 234,
  sym_lambda = 235,
  sym_inherited = 236,
  sym_exprDot = 237,
  sym_exprDeref = 238,
  sym_exprAs = 239,
  sym_exprTpl = 240,
  sym_exprSubscript = 241,
  sym_exprCall = 242,
  sym_legacyFormat = 243,
  sym_exprArgs = 244,
  sym_exprBinary = 245,
  sym_exprUnary = 246,
  sym_exprParens = 247,
  sym_exprBrackets = 248,
  sym_type = 249,
  sym_typeref = 250,
  sym__typeref = 251,
  sym_typerefDot = 252,
  sym_typerefTpl = 253,
  sym_typerefPtr = 254,
  sym_typerefArgs = 255,
  sym_genericDot = 256,
  sym_genericTpl = 257,
  sym__genericName = 258,
  sym_genericArgs = 259,
  sym_genericArg = 260,
  sym__literal = 261,
  sym_literalString = 262,
  sym__literalString = 263,
  sym_literalChar = 264,
  sym_literalNumber = 265,
  sym__literalInt = 266,
  sym__literalFloat = 267,
  sym_range = 268,
  aux_sym__definitions = 269,
  sym__definition = 270,
  sym_defProc = 271,
  sym_declProcFwd = 272,
  sym__visibility = 273,
  aux_sym__declarations = 274,
  aux_sym__classDeclarations = 275,
  sym_defaultValue = 276,
  sym_declUses = 277,
  sym_declExports = 278,
  sym_declTypes = 279,
  sym_declVars = 280,
  sym_declConsts = 281,
  sym_declType = 282,
  sym_declProc = 283,
  sym_declVar = 284,
  sym_declConst = 285,
  sym_declLabels = 286,
  sym_declLabel = 287,
  sym_declExport = 288,
  sym_declEnum = 289,
  sym_declEnumValue = 290,
  sym_declSet = 291,
  sym_declArray = 292,
  sym_declFile = 293,
  sym_declString = 294,
  sym_declProcRef = 295,
  sym_declMetaClass = 296,
  sym_declClass = 297,
  sym_declIntf = 298,
  sym_declHelper = 299,
  sym_guid = 300,
  sym__declClass = 301,
  sym_declSection = 302,
  aux_sym__declFields = 303,
  sym_declField = 304,
  sym_declProp = 305,
  sym_declPropArgs = 306,
  sym_declVariant = 307,
  sym_declVariantClause = 308,
  sym_declVariantField = 309,
  sym__declProc = 310,
  sym__declOperator = 311,
  sym_operatorDot = 312,
  sym__operatorName = 313,
  sym_operatorName = 314,
  sym_declArgs = 315,
  sym_declArg = 316,
  sym__procAttribute = 317,
  sym__procAttributeNoExt = 318,
  sym_procAttribute = 319,
  sym_rttiAttributes = 320,
  sym_procExternal = 321,
  sym__initializer = 322,
  sym_recInitializer = 323,
  sym_recInitializerField = 324,
  sym_arrInitializer = 325,
  sym_kEndDot = 326,
  sym_kDot = 327,
  aux_sym_unit_repeat1 = 328,
  aux_sym_moduleName_repeat1 = 329,
  aux_sym_exceptionElse_repeat1 = 330,
  aux_sym_case_repeat1 = 331,
  aux_sym_with_repeat1 = 332,
  aux_sym__exceptionHandlersTr_repeat1 = 333,
  aux_sym_caseLabel_repeat1 = 334,
  aux_sym__statementsTr_repeat1 = 335,
  aux_sym_asmBody_repeat1 = 336,
  aux_sym_exprTpl_repeat1 = 337,
  aux_sym_legacyFormat_repeat1 = 338,
  aux_sym_exprArgs_repeat1 = 339,
  aux_sym_type_repeat1 = 340,
  aux_sym_typerefArgs_repeat1 = 341,
  aux_sym_genericArgs_repeat1 = 342,
  aux_sym_genericArg_repeat1 = 343,
  aux_sym_literalString_repeat1 = 344,
  aux_sym_defProc_repeat1 = 345,
  aux_sym_declProcFwd_repeat1 = 346,
  aux_sym_declUses_repeat1 = 347,
  aux_sym_declExports_repeat1 = 348,
  aux_sym_declTypes_repeat1 = 349,
  aux_sym_declVars_repeat1 = 350,
  aux_sym_declConsts_repeat1 = 351,
  aux_sym_declVar_repeat1 = 352,
  aux_sym_declLabels_repeat1 = 353,
  aux_sym_declExport_repeat1 = 354,
  aux_sym_declEnum_repeat1 = 355,
  aux_sym_declArray_repeat1 = 356,
  aux_sym_declClass_repeat1 = 357,
  aux_sym__declClass_repeat1 = 358,
  aux_sym_declProp_repeat1 = 359,
  aux_sym_declProp_repeat2 = 360,
  aux_sym_declPropArgs_repeat1 = 361,
  aux_sym_declVariant_repeat1 = 362,
  aux_sym_declVariantClause_repeat1 = 363,
  aux_sym__declProc_repeat1 = 364,
  aux_sym__procAttribute_repeat1 = 365,
  aux_sym__procAttributeNoExt_repeat1 = 366,
  aux_sym_rttiAttributes_repeat1 = 367,
  aux_sym_rttiAttributes_repeat2 = 368,
  aux_sym_recInitializer_repeat1 = 369,
  aux_sym_arrInitializer_repeat1 = 370,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [aux_sym_asmBody_token1] = "asmBody_token1",
  [aux_sym_asmBody_token2] = "asmBody_token2",
  [aux_sym_asmBody_token3] = "asmBody_token3",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_type_token1] = "pp",
  [aux_sym_type_token2] = "pp",
  [aux_sym_type_token3] = "pp",
  [aux_sym__literalString_token1] = "_literalString_token1",
  [anon_sym_POUND] = "#",
  [aux_sym__literalInt_token1] = "_literalInt_token1",
  [aux_sym__literalInt_token2] = "_literalInt_token2",
  [aux_sym__literalFloat_token1] = "_literalFloat_token1",
  [anon_sym_DOT_DOT] = "..",
  [sym_kProgram] = "kProgram",
  [sym_kLibrary] = "kLibrary",
  [sym_kUnit] = "kUnit",
  [sym_kUses] = "kUses",
  [sym_kInterface] = "kInterface",
  [sym_kDispInterface] = "kDispInterface",
  [sym_kImplementation] = "kImplementation",
  [sym_kInitialization] = "kInitialization",
  [sym_kFinalization] = "kFinalization",
  [anon_sym_DOT] = ".",
  [sym_kBegin] = "kBegin",
  [sym_kEnd] = "kEnd",
  [sym_kAsm] = "kAsm",
  [sym_kVar] = "kVar",
  [sym_kThreadvar] = "kThreadvar",
  [sym_kConst] = "kConst",
  [sym_kConstref] = "kConstref",
  [sym_kResourcestring] = "kResourcestring",
  [sym_kOut] = "kOut",
  [sym_kType] = "kType",
  [sym_kLabel] = "kLabel",
  [sym_kExports] = "kExports",
  [sym_kAbsolute] = "kAbsolute",
  [sym_kProperty] = "kProperty",
  [sym_kRead] = "kRead",
  [sym_kWrite] = "kWrite",
  [sym_kImplements] = "kImplements",
  [sym_kDefault] = "kDefault",
  [sym_kNodefault] = "kNodefault",
  [sym_kStored] = "kStored",
  [sym_kIndex] = "kIndex",
  [sym_kDispId] = "kDispId",
  [sym_kClass] = "kClass",
  [sym_kObject] = "kObject",
  [sym_kRecord] = "kRecord",
  [sym_kObjcclass] = "kObjcclass",
  [sym_kObjccategory] = "kObjccategory",
  [sym_kObjcprotocol] = "kObjcprotocol",
  [sym_kArray] = "kArray",
  [sym_kFile] = "kFile",
  [sym_kString] = "kString",
  [sym_kSet] = "kSet",
  [sym_kOf] = "kOf",
  [sym_kHelper] = "kHelper",
  [sym_kPacked] = "kPacked",
  [sym_kGeneric] = "kGeneric",
  [sym_kSpecialize] = "kSpecialize",
  [sym_kLt] = "kLt",
  [sym_kEq] = "kEq",
  [sym_kNeq] = "kNeq",
  [sym_kGt] = "kGt",
  [sym_kLte] = "kLte",
  [sym_kGte] = "kGte",
  [sym_kAdd] = "kAdd",
  [sym_kSub] = "kSub",
  [sym_kMul] = "kMul",
  [sym_kFdiv] = "kFdiv",
  [sym_kAt] = "kAt",
  [sym_kHat] = "kHat",
  [sym_kAssign] = "kAssign",
  [sym_kAssignAdd] = "kAssignAdd",
  [sym_kAssignSub] = "kAssignSub",
  [sym_kAssignMul] = "kAssignMul",
  [sym_kAssignDiv] = "kAssignDiv",
  [sym_kOr] = "kOr",
  [sym_kXor] = "kXor",
  [sym_kDiv] = "kDiv",
  [sym_kMod] = "kMod",
  [sym_kAnd] = "kAnd",
  [sym_kShl] = "kShl",
  [sym_kShr] = "kShr",
  [sym_kNot] = "kNot",
  [sym_kIs] = "kIs",
  [sym_kAs] = "kAs",
  [sym_kIn] = "kIn",
  [sym_kFor] = "kFor",
  [sym_kTo] = "kTo",
  [sym_kDownto] = "kDownto",
  [sym_kIf] = "kIf",
  [sym_kThen] = "kThen",
  [sym_kElse] = "kElse",
  [sym_kDo] = "kDo",
  [sym_kWhile] = "kWhile",
  [sym_kRepeat] = "kRepeat",
  [sym_kUntil] = "kUntil",
  [sym_kTry] = "kTry",
  [sym_kExcept] = "kExcept",
  [sym_kFinally] = "kFinally",
  [sym_kRaise] = "kRaise",
  [sym_kOn] = "kOn",
  [sym_kCase] = "kCase",
  [sym_kWith] = "kWith",
  [sym_kGoto] = "kGoto",
  [sym_kFunction] = "kFunction",
  [sym_kProcedure] = "kProcedure",
  [sym_kConstructor] = "kConstructor",
  [sym_kDestructor] = "kDestructor",
  [sym_kOperator] = "kOperator",
  [sym_kReference] = "kReference",
  [sym_kPublished] = "kPublished",
  [sym_kPublic] = "kPublic",
  [sym_kProtected] = "kProtected",
  [sym_kPrivate] = "kPrivate",
  [sym_kStrict] = "kStrict",
  [sym_kRequired] = "kRequired",
  [sym_kOptional] = "kOptional",
  [sym_kForward] = "kForward",
  [sym_kStatic] = "kStatic",
  [sym_kVirtual] = "kVirtual",
  [sym_kAbstract] = "kAbstract",
  [sym_kSealed] = "kSealed",
  [sym_kDynamic] = "kDynamic",
  [sym_kOverride] = "kOverride",
  [sym_kOverload] = "kOverload",
  [sym_kReintroduce] = "kReintroduce",
  [sym_kInherited] = "kInherited",
  [sym_kInline] = "kInline",
  [sym_kStdcall] = "kStdcall",
  [sym_kCdecl] = "kCdecl",
  [sym_kCppdecl] = "kCppdecl",
  [sym_kPascal] = "kPascal",
  [sym_kRegister] = "kRegister",
  [sym_kMwpascal] = "kMwpascal",
  [sym_kExternal] = "kExternal",
  [sym_kName] = "kName",
  [sym_kMessage] = "kMessage",
  [sym_kDeprecated] = "kDeprecated",
  [sym_kExperimental] = "kExperimental",
  [sym_kPlatform] = "kPlatform",
  [sym_kUnimplemented] = "kUnimplemented",
  [sym_kCvar] = "kCvar",
  [sym_kExport] = "kExport",
  [sym_kFar] = "kFar",
  [sym_kNear] = "kNear",
  [sym_kSafecall] = "kSafecall",
  [sym_kAssembler] = "kAssembler",
  [sym_kNostackframe] = "kNostackframe",
  [sym_kInterrupt] = "kInterrupt",
  [sym_kNoreturn] = "kNoreturn",
  [sym_kIocheck] = "kIocheck",
  [sym_kLocal] = "kLocal",
  [sym_kHardfloat] = "kHardfloat",
  [sym_kSoftfloat] = "kSoftfloat",
  [sym_kMs_abi_default] = "kMs_abi_default",
  [sym_kMs_abi_cdecl] = "kMs_abi_cdecl",
  [sym_kSaveregisters] = "kSaveregisters",
  [sym_kSysv_abi_default] = "kSysv_abi_default",
  [sym_kSysv_abi_cdecl] = "kSysv_abi_cdecl",
  [sym_kVectorcall] = "kVectorcall",
  [sym_kVarargs] = "kVarargs",
  [sym_kWinapi] = "kWinapi",
  [sym_kAlias] = "kAlias",
  [sym_kDelayed] = "kDelayed",
  [sym_kNil] = "kNil",
  [sym_kTrue] = "kTrue",
  [sym_kFalse] = "kFalse",
  [sym__space] = "_space",
  [sym_pp] = "pp",
  [sym_comment] = "comment",
  [sym_root] = "root",
  [sym_program] = "program",
  [sym_library] = "library",
  [sym_unit] = "unit",
  [sym_interface] = "interface",
  [sym_implementation] = "implementation",
  [sym_initialization] = "initialization",
  [sym_finalization] = "finalization",
  [sym_moduleName] = "moduleName",
  [sym_if] = "if",
  [sym_ifElse] = "ifElse",
  [sym_while] = "while",
  [sym_repeat] = "repeat",
  [sym_for] = "for",
  [sym_foreach] = "foreach",
  [sym_exceptionHandler] = "exceptionHandler",
  [sym_exceptionElse] = "exceptionElse",
  [sym_try] = "try",
  [sym_caseCase] = "caseCase",
  [sym_case] = "case",
  [sym_block] = "block",
  [sym_asm] = "asm",
  [sym_with] = "with",
  [sym_raise] = "raise",
  [sym_statement] = "statement",
  [sym_goto] = "goto",
  [sym__statement] = "_statement",
  [sym_ifTr] = "if",
  [sym_ifElseTr] = "ifElse",
  [sym_whileTr] = "while",
  [sym_repeatTr] = "repeat",
  [sym_forTr] = "for",
  [sym_foreachTr] = "foreach",
  [sym_exceptionHandlerTr] = "exceptionHandler",
  [sym__exceptionHandlersTr] = "_exceptionHandlersTr",
  [sym_tryTr] = "try",
  [sym_caseCaseTr] = "caseCase",
  [sym_caseTr] = "case",
  [sym_blockTr] = "blockTr",
  [sym_asmTr] = "asm",
  [sym_withTr] = "with",
  [sym_raiseTr] = "raise",
  [sym_statementTr] = "statement",
  [sym_gotoTr] = "goto",
  [sym__statementTr] = "_statementTr",
  [sym_assignment] = "assignment",
  [sym_varAssignDef] = "varAssignDef",
  [sym_varDef] = "varDef",
  [sym_label] = "label",
  [sym_caseLabel] = "caseLabel",
  [sym__statementsTr] = "_statementsTr",
  [sym_statementsTr] = "statements",
  [sym_asmBody] = "asmBody",
  [sym__expr] = "_expr",
  [sym__ref] = "_ref",
  [sym_lambda] = "lambda",
  [sym_inherited] = "inherited",
  [sym_exprDot] = "exprDot",
  [sym_exprDeref] = "exprUnary",
  [sym_exprAs] = "exprBinary",
  [sym_exprTpl] = "exprTpl",
  [sym_exprSubscript] = "exprSubscript",
  [sym_exprCall] = "exprCall",
  [sym_legacyFormat] = "legacyFormat",
  [sym_exprArgs] = "exprArgs",
  [sym_exprBinary] = "exprBinary",
  [sym_exprUnary] = "exprUnary",
  [sym_exprParens] = "exprParens",
  [sym_exprBrackets] = "exprBrackets",
  [sym_type] = "type",
  [sym_typeref] = "typeref",
  [sym__typeref] = "_typeref",
  [sym_typerefDot] = "typerefDot",
  [sym_typerefTpl] = "typerefTpl",
  [sym_typerefPtr] = "typerefPtr",
  [sym_typerefArgs] = "typerefArgs",
  [sym_genericDot] = "genericDot",
  [sym_genericTpl] = "genericTpl",
  [sym__genericName] = "_genericName",
  [sym_genericArgs] = "genericArgs",
  [sym_genericArg] = "genericArg",
  [sym__literal] = "_literal",
  [sym_literalString] = "literalString",
  [sym__literalString] = "_literalString",
  [sym_literalChar] = "literalChar",
  [sym_literalNumber] = "literalNumber",
  [sym__literalInt] = "_literalInt",
  [sym__literalFloat] = "_literalFloat",
  [sym_range] = "range",
  [aux_sym__definitions] = "_definitions",
  [sym__definition] = "_definition",
  [sym_defProc] = "defProc",
  [sym_declProcFwd] = "declProc",
  [sym__visibility] = "_visibility",
  [aux_sym__declarations] = "_declarations",
  [aux_sym__classDeclarations] = "_classDeclarations",
  [sym_defaultValue] = "defaultValue",
  [sym_declUses] = "declUses",
  [sym_declExports] = "declExports",
  [sym_declTypes] = "declTypes",
  [sym_declVars] = "declVars",
  [sym_declConsts] = "declConsts",
  [sym_declType] = "declType",
  [sym_declProc] = "declProc",
  [sym_declVar] = "declVar",
  [sym_declConst] = "declConst",
  [sym_declLabels] = "declLabels",
  [sym_declLabel] = "declLabel",
  [sym_declExport] = "declExport",
  [sym_declEnum] = "declEnum",
  [sym_declEnumValue] = "declEnumValue",
  [sym_declSet] = "declSet",
  [sym_declArray] = "declArray",
  [sym_declFile] = "declFile",
  [sym_declString] = "declString",
  [sym_declProcRef] = "declProcRef",
  [sym_declMetaClass] = "declMetaClass",
  [sym_declClass] = "declClass",
  [sym_declIntf] = "declIntf",
  [sym_declHelper] = "declHelper",
  [sym_guid] = "guid",
  [sym__declClass] = "_declClass",
  [sym_declSection] = "declSection",
  [aux_sym__declFields] = "_declFields",
  [sym_declField] = "declField",
  [sym_declProp] = "declProp",
  [sym_declPropArgs] = "declPropArgs",
  [sym_declVariant] = "declVariant",
  [sym_declVariantClause] = "declVariantClause",
  [sym_declVariantField] = "declField",
  [sym__declProc] = "_declProc",
  [sym__declOperator] = "_declOperator",
  [sym_operatorDot] = "genericDot",
  [sym__operatorName] = "_operatorName",
  [sym_operatorName] = "operatorName",
  [sym_declArgs] = "declArgs",
  [sym_declArg] = "declArg",
  [sym__procAttribute] = "_procAttribute",
  [sym__procAttributeNoExt] = "_procAttributeNoExt",
  [sym_procAttribute] = "procAttribute",
  [sym_rttiAttributes] = "rttiAttributes",
  [sym_procExternal] = "procExternal",
  [sym__initializer] = "_initializer",
  [sym_recInitializer] = "recInitializer",
  [sym_recInitializerField] = "recInitializerField",
  [sym_arrInitializer] = "arrInitializer",
  [sym_kEndDot] = "kEndDot",
  [sym_kDot] = "kDot",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_moduleName_repeat1] = "moduleName_repeat1",
  [aux_sym_exceptionElse_repeat1] = "exceptionElse_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_with_repeat1] = "with_repeat1",
  [aux_sym__exceptionHandlersTr_repeat1] = "_exceptionHandlersTr_repeat1",
  [aux_sym_caseLabel_repeat1] = "caseLabel_repeat1",
  [aux_sym__statementsTr_repeat1] = "_statementsTr_repeat1",
  [aux_sym_asmBody_repeat1] = "asmBody_repeat1",
  [aux_sym_exprTpl_repeat1] = "exprTpl_repeat1",
  [aux_sym_legacyFormat_repeat1] = "legacyFormat_repeat1",
  [aux_sym_exprArgs_repeat1] = "exprArgs_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_typerefArgs_repeat1] = "typerefArgs_repeat1",
  [aux_sym_genericArgs_repeat1] = "genericArgs_repeat1",
  [aux_sym_genericArg_repeat1] = "genericArg_repeat1",
  [aux_sym_literalString_repeat1] = "literalString_repeat1",
  [aux_sym_defProc_repeat1] = "defProc_repeat1",
  [aux_sym_declProcFwd_repeat1] = "declProcFwd_repeat1",
  [aux_sym_declUses_repeat1] = "declUses_repeat1",
  [aux_sym_declExports_repeat1] = "declExports_repeat1",
  [aux_sym_declTypes_repeat1] = "declTypes_repeat1",
  [aux_sym_declVars_repeat1] = "declVars_repeat1",
  [aux_sym_declConsts_repeat1] = "declConsts_repeat1",
  [aux_sym_declVar_repeat1] = "declVar_repeat1",
  [aux_sym_declLabels_repeat1] = "declLabels_repeat1",
  [aux_sym_declExport_repeat1] = "declExport_repeat1",
  [aux_sym_declEnum_repeat1] = "declEnum_repeat1",
  [aux_sym_declArray_repeat1] = "declArray_repeat1",
  [aux_sym_declClass_repeat1] = "declClass_repeat1",
  [aux_sym__declClass_repeat1] = "_declClass_repeat1",
  [aux_sym_declProp_repeat1] = "declProp_repeat1",
  [aux_sym_declProp_repeat2] = "declProp_repeat2",
  [aux_sym_declPropArgs_repeat1] = "declPropArgs_repeat1",
  [aux_sym_declVariant_repeat1] = "declVariant_repeat1",
  [aux_sym_declVariantClause_repeat1] = "declVariantClause_repeat1",
  [aux_sym__declProc_repeat1] = "_declProc_repeat1",
  [aux_sym__procAttribute_repeat1] = "_procAttribute_repeat1",
  [aux_sym__procAttributeNoExt_repeat1] = "_procAttributeNoExt_repeat1",
  [aux_sym_rttiAttributes_repeat1] = "rttiAttributes_repeat1",
  [aux_sym_rttiAttributes_repeat2] = "rttiAttributes_repeat2",
  [aux_sym_recInitializer_repeat1] = "recInitializer_repeat1",
  [aux_sym_arrInitializer_repeat1] = "arrInitializer_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_asmBody_token1] = aux_sym_asmBody_token1,
  [aux_sym_asmBody_token2] = aux_sym_asmBody_token2,
  [aux_sym_asmBody_token3] = aux_sym_asmBody_token3,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_type_token1] = sym_pp,
  [aux_sym_type_token2] = sym_pp,
  [aux_sym_type_token3] = sym_pp,
  [aux_sym__literalString_token1] = aux_sym__literalString_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__literalInt_token1] = aux_sym__literalInt_token1,
  [aux_sym__literalInt_token2] = aux_sym__literalInt_token2,
  [aux_sym__literalFloat_token1] = aux_sym__literalFloat_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_kProgram] = sym_kProgram,
  [sym_kLibrary] = sym_kLibrary,
  [sym_kUnit] = sym_kUnit,
  [sym_kUses] = sym_kUses,
  [sym_kInterface] = sym_kInterface,
  [sym_kDispInterface] = sym_kDispInterface,
  [sym_kImplementation] = sym_kImplementation,
  [sym_kInitialization] = sym_kInitialization,
  [sym_kFinalization] = sym_kFinalization,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_kBegin] = sym_kBegin,
  [sym_kEnd] = sym_kEnd,
  [sym_kAsm] = sym_kAsm,
  [sym_kVar] = sym_kVar,
  [sym_kThreadvar] = sym_kThreadvar,
  [sym_kConst] = sym_kConst,
  [sym_kConstref] = sym_kConstref,
  [sym_kResourcestring] = sym_kResourcestring,
  [sym_kOut] = sym_kOut,
  [sym_kType] = sym_kType,
  [sym_kLabel] = sym_kLabel,
  [sym_kExports] = sym_kExports,
  [sym_kAbsolute] = sym_kAbsolute,
  [sym_kProperty] = sym_kProperty,
  [sym_kRead] = sym_kRead,
  [sym_kWrite] = sym_kWrite,
  [sym_kImplements] = sym_kImplements,
  [sym_kDefault] = sym_kDefault,
  [sym_kNodefault] = sym_kNodefault,
  [sym_kStored] = sym_kStored,
  [sym_kIndex] = sym_kIndex,
  [sym_kDispId] = sym_kDispId,
  [sym_kClass] = sym_kClass,
  [sym_kObject] = sym_kObject,
  [sym_kRecord] = sym_kRecord,
  [sym_kObjcclass] = sym_kObjcclass,
  [sym_kObjccategory] = sym_kObjccategory,
  [sym_kObjcprotocol] = sym_kObjcprotocol,
  [sym_kArray] = sym_kArray,
  [sym_kFile] = sym_kFile,
  [sym_kString] = sym_kString,
  [sym_kSet] = sym_kSet,
  [sym_kOf] = sym_kOf,
  [sym_kHelper] = sym_kHelper,
  [sym_kPacked] = sym_kPacked,
  [sym_kGeneric] = sym_kGeneric,
  [sym_kSpecialize] = sym_kSpecialize,
  [sym_kLt] = sym_kLt,
  [sym_kEq] = sym_kEq,
  [sym_kNeq] = sym_kNeq,
  [sym_kGt] = sym_kGt,
  [sym_kLte] = sym_kLte,
  [sym_kGte] = sym_kGte,
  [sym_kAdd] = sym_kAdd,
  [sym_kSub] = sym_kSub,
  [sym_kMul] = sym_kMul,
  [sym_kFdiv] = sym_kFdiv,
  [sym_kAt] = sym_kAt,
  [sym_kHat] = sym_kHat,
  [sym_kAssign] = sym_kAssign,
  [sym_kAssignAdd] = sym_kAssignAdd,
  [sym_kAssignSub] = sym_kAssignSub,
  [sym_kAssignMul] = sym_kAssignMul,
  [sym_kAssignDiv] = sym_kAssignDiv,
  [sym_kOr] = sym_kOr,
  [sym_kXor] = sym_kXor,
  [sym_kDiv] = sym_kDiv,
  [sym_kMod] = sym_kMod,
  [sym_kAnd] = sym_kAnd,
  [sym_kShl] = sym_kShl,
  [sym_kShr] = sym_kShr,
  [sym_kNot] = sym_kNot,
  [sym_kIs] = sym_kIs,
  [sym_kAs] = sym_kAs,
  [sym_kIn] = sym_kIn,
  [sym_kFor] = sym_kFor,
  [sym_kTo] = sym_kTo,
  [sym_kDownto] = sym_kDownto,
  [sym_kIf] = sym_kIf,
  [sym_kThen] = sym_kThen,
  [sym_kElse] = sym_kElse,
  [sym_kDo] = sym_kDo,
  [sym_kWhile] = sym_kWhile,
  [sym_kRepeat] = sym_kRepeat,
  [sym_kUntil] = sym_kUntil,
  [sym_kTry] = sym_kTry,
  [sym_kExcept] = sym_kExcept,
  [sym_kFinally] = sym_kFinally,
  [sym_kRaise] = sym_kRaise,
  [sym_kOn] = sym_kOn,
  [sym_kCase] = sym_kCase,
  [sym_kWith] = sym_kWith,
  [sym_kGoto] = sym_kGoto,
  [sym_kFunction] = sym_kFunction,
  [sym_kProcedure] = sym_kProcedure,
  [sym_kConstructor] = sym_kConstructor,
  [sym_kDestructor] = sym_kDestructor,
  [sym_kOperator] = sym_kOperator,
  [sym_kReference] = sym_kReference,
  [sym_kPublished] = sym_kPublished,
  [sym_kPublic] = sym_kPublic,
  [sym_kProtected] = sym_kProtected,
  [sym_kPrivate] = sym_kPrivate,
  [sym_kStrict] = sym_kStrict,
  [sym_kRequired] = sym_kRequired,
  [sym_kOptional] = sym_kOptional,
  [sym_kForward] = sym_kForward,
  [sym_kStatic] = sym_kStatic,
  [sym_kVirtual] = sym_kVirtual,
  [sym_kAbstract] = sym_kAbstract,
  [sym_kSealed] = sym_kSealed,
  [sym_kDynamic] = sym_kDynamic,
  [sym_kOverride] = sym_kOverride,
  [sym_kOverload] = sym_kOverload,
  [sym_kReintroduce] = sym_kReintroduce,
  [sym_kInherited] = sym_kInherited,
  [sym_kInline] = sym_kInline,
  [sym_kStdcall] = sym_kStdcall,
  [sym_kCdecl] = sym_kCdecl,
  [sym_kCppdecl] = sym_kCppdecl,
  [sym_kPascal] = sym_kPascal,
  [sym_kRegister] = sym_kRegister,
  [sym_kMwpascal] = sym_kMwpascal,
  [sym_kExternal] = sym_kExternal,
  [sym_kName] = sym_kName,
  [sym_kMessage] = sym_kMessage,
  [sym_kDeprecated] = sym_kDeprecated,
  [sym_kExperimental] = sym_kExperimental,
  [sym_kPlatform] = sym_kPlatform,
  [sym_kUnimplemented] = sym_kUnimplemented,
  [sym_kCvar] = sym_kCvar,
  [sym_kExport] = sym_kExport,
  [sym_kFar] = sym_kFar,
  [sym_kNear] = sym_kNear,
  [sym_kSafecall] = sym_kSafecall,
  [sym_kAssembler] = sym_kAssembler,
  [sym_kNostackframe] = sym_kNostackframe,
  [sym_kInterrupt] = sym_kInterrupt,
  [sym_kNoreturn] = sym_kNoreturn,
  [sym_kIocheck] = sym_kIocheck,
  [sym_kLocal] = sym_kLocal,
  [sym_kHardfloat] = sym_kHardfloat,
  [sym_kSoftfloat] = sym_kSoftfloat,
  [sym_kMs_abi_default] = sym_kMs_abi_default,
  [sym_kMs_abi_cdecl] = sym_kMs_abi_cdecl,
  [sym_kSaveregisters] = sym_kSaveregisters,
  [sym_kSysv_abi_default] = sym_kSysv_abi_default,
  [sym_kSysv_abi_cdecl] = sym_kSysv_abi_cdecl,
  [sym_kVectorcall] = sym_kVectorcall,
  [sym_kVarargs] = sym_kVarargs,
  [sym_kWinapi] = sym_kWinapi,
  [sym_kAlias] = sym_kAlias,
  [sym_kDelayed] = sym_kDelayed,
  [sym_kNil] = sym_kNil,
  [sym_kTrue] = sym_kTrue,
  [sym_kFalse] = sym_kFalse,
  [sym__space] = sym__space,
  [sym_pp] = sym_pp,
  [sym_comment] = sym_comment,
  [sym_root] = sym_root,
  [sym_program] = sym_program,
  [sym_library] = sym_library,
  [sym_unit] = sym_unit,
  [sym_interface] = sym_interface,
  [sym_implementation] = sym_implementation,
  [sym_initialization] = sym_initialization,
  [sym_finalization] = sym_finalization,
  [sym_moduleName] = sym_moduleName,
  [sym_if] = sym_if,
  [sym_ifElse] = sym_ifElse,
  [sym_while] = sym_while,
  [sym_repeat] = sym_repeat,
  [sym_for] = sym_for,
  [sym_foreach] = sym_foreach,
  [sym_exceptionHandler] = sym_exceptionHandler,
  [sym_exceptionElse] = sym_exceptionElse,
  [sym_try] = sym_try,
  [sym_caseCase] = sym_caseCase,
  [sym_case] = sym_case,
  [sym_block] = sym_block,
  [sym_asm] = sym_asm,
  [sym_with] = sym_with,
  [sym_raise] = sym_raise,
  [sym_statement] = sym_statement,
  [sym_goto] = sym_goto,
  [sym__statement] = sym__statement,
  [sym_ifTr] = sym_if,
  [sym_ifElseTr] = sym_ifElse,
  [sym_whileTr] = sym_while,
  [sym_repeatTr] = sym_repeat,
  [sym_forTr] = sym_for,
  [sym_foreachTr] = sym_foreach,
  [sym_exceptionHandlerTr] = sym_exceptionHandler,
  [sym__exceptionHandlersTr] = sym__exceptionHandlersTr,
  [sym_tryTr] = sym_try,
  [sym_caseCaseTr] = sym_caseCase,
  [sym_caseTr] = sym_case,
  [sym_blockTr] = sym_blockTr,
  [sym_asmTr] = sym_asm,
  [sym_withTr] = sym_with,
  [sym_raiseTr] = sym_raise,
  [sym_statementTr] = sym_statement,
  [sym_gotoTr] = sym_goto,
  [sym__statementTr] = sym__statementTr,
  [sym_assignment] = sym_assignment,
  [sym_varAssignDef] = sym_varAssignDef,
  [sym_varDef] = sym_varDef,
  [sym_label] = sym_label,
  [sym_caseLabel] = sym_caseLabel,
  [sym__statementsTr] = sym__statementsTr,
  [sym_statementsTr] = sym_statementsTr,
  [sym_asmBody] = sym_asmBody,
  [sym__expr] = sym__expr,
  [sym__ref] = sym__ref,
  [sym_lambda] = sym_lambda,
  [sym_inherited] = sym_inherited,
  [sym_exprDot] = sym_exprDot,
  [sym_exprDeref] = sym_exprUnary,
  [sym_exprAs] = sym_exprBinary,
  [sym_exprTpl] = sym_exprTpl,
  [sym_exprSubscript] = sym_exprSubscript,
  [sym_exprCall] = sym_exprCall,
  [sym_legacyFormat] = sym_legacyFormat,
  [sym_exprArgs] = sym_exprArgs,
  [sym_exprBinary] = sym_exprBinary,
  [sym_exprUnary] = sym_exprUnary,
  [sym_exprParens] = sym_exprParens,
  [sym_exprBrackets] = sym_exprBrackets,
  [sym_type] = sym_type,
  [sym_typeref] = sym_typeref,
  [sym__typeref] = sym__typeref,
  [sym_typerefDot] = sym_typerefDot,
  [sym_typerefTpl] = sym_typerefTpl,
  [sym_typerefPtr] = sym_typerefPtr,
  [sym_typerefArgs] = sym_typerefArgs,
  [sym_genericDot] = sym_genericDot,
  [sym_genericTpl] = sym_genericTpl,
  [sym__genericName] = sym__genericName,
  [sym_genericArgs] = sym_genericArgs,
  [sym_genericArg] = sym_genericArg,
  [sym__literal] = sym__literal,
  [sym_literalString] = sym_literalString,
  [sym__literalString] = sym__literalString,
  [sym_literalChar] = sym_literalChar,
  [sym_literalNumber] = sym_literalNumber,
  [sym__literalInt] = sym__literalInt,
  [sym__literalFloat] = sym__literalFloat,
  [sym_range] = sym_range,
  [aux_sym__definitions] = aux_sym__definitions,
  [sym__definition] = sym__definition,
  [sym_defProc] = sym_defProc,
  [sym_declProcFwd] = sym_declProc,
  [sym__visibility] = sym__visibility,
  [aux_sym__declarations] = aux_sym__declarations,
  [aux_sym__classDeclarations] = aux_sym__classDeclarations,
  [sym_defaultValue] = sym_defaultValue,
  [sym_declUses] = sym_declUses,
  [sym_declExports] = sym_declExports,
  [sym_declTypes] = sym_declTypes,
  [sym_declVars] = sym_declVars,
  [sym_declConsts] = sym_declConsts,
  [sym_declType] = sym_declType,
  [sym_declProc] = sym_declProc,
  [sym_declVar] = sym_declVar,
  [sym_declConst] = sym_declConst,
  [sym_declLabels] = sym_declLabels,
  [sym_declLabel] = sym_declLabel,
  [sym_declExport] = sym_declExport,
  [sym_declEnum] = sym_declEnum,
  [sym_declEnumValue] = sym_declEnumValue,
  [sym_declSet] = sym_declSet,
  [sym_declArray] = sym_declArray,
  [sym_declFile] = sym_declFile,
  [sym_declString] = sym_declString,
  [sym_declProcRef] = sym_declProcRef,
  [sym_declMetaClass] = sym_declMetaClass,
  [sym_declClass] = sym_declClass,
  [sym_declIntf] = sym_declIntf,
  [sym_declHelper] = sym_declHelper,
  [sym_guid] = sym_guid,
  [sym__declClass] = sym__declClass,
  [sym_declSection] = sym_declSection,
  [aux_sym__declFields] = aux_sym__declFields,
  [sym_declField] = sym_declField,
  [sym_declProp] = sym_declProp,
  [sym_declPropArgs] = sym_declPropArgs,
  [sym_declVariant] = sym_declVariant,
  [sym_declVariantClause] = sym_declVariantClause,
  [sym_declVariantField] = sym_declField,
  [sym__declProc] = sym__declProc,
  [sym__declOperator] = sym__declOperator,
  [sym_operatorDot] = sym_genericDot,
  [sym__operatorName] = sym__operatorName,
  [sym_operatorName] = sym_operatorName,
  [sym_declArgs] = sym_declArgs,
  [sym_declArg] = sym_declArg,
  [sym__procAttribute] = sym__procAttribute,
  [sym__procAttributeNoExt] = sym__procAttributeNoExt,
  [sym_procAttribute] = sym_procAttribute,
  [sym_rttiAttributes] = sym_rttiAttributes,
  [sym_procExternal] = sym_procExternal,
  [sym__initializer] = sym__initializer,
  [sym_recInitializer] = sym_recInitializer,
  [sym_recInitializerField] = sym_recInitializerField,
  [sym_arrInitializer] = sym_arrInitializer,
  [sym_kEndDot] = sym_kEndDot,
  [sym_kDot] = sym_kDot,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_moduleName_repeat1] = aux_sym_moduleName_repeat1,
  [aux_sym_exceptionElse_repeat1] = aux_sym_exceptionElse_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym_with_repeat1] = aux_sym_with_repeat1,
  [aux_sym__exceptionHandlersTr_repeat1] = aux_sym__exceptionHandlersTr_repeat1,
  [aux_sym_caseLabel_repeat1] = aux_sym_caseLabel_repeat1,
  [aux_sym__statementsTr_repeat1] = aux_sym__statementsTr_repeat1,
  [aux_sym_asmBody_repeat1] = aux_sym_asmBody_repeat1,
  [aux_sym_exprTpl_repeat1] = aux_sym_exprTpl_repeat1,
  [aux_sym_legacyFormat_repeat1] = aux_sym_legacyFormat_repeat1,
  [aux_sym_exprArgs_repeat1] = aux_sym_exprArgs_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_typerefArgs_repeat1] = aux_sym_typerefArgs_repeat1,
  [aux_sym_genericArgs_repeat1] = aux_sym_genericArgs_repeat1,
  [aux_sym_genericArg_repeat1] = aux_sym_genericArg_repeat1,
  [aux_sym_literalString_repeat1] = aux_sym_literalString_repeat1,
  [aux_sym_defProc_repeat1] = aux_sym_defProc_repeat1,
  [aux_sym_declProcFwd_repeat1] = aux_sym_declProcFwd_repeat1,
  [aux_sym_declUses_repeat1] = aux_sym_declUses_repeat1,
  [aux_sym_declExports_repeat1] = aux_sym_declExports_repeat1,
  [aux_sym_declTypes_repeat1] = aux_sym_declTypes_repeat1,
  [aux_sym_declVars_repeat1] = aux_sym_declVars_repeat1,
  [aux_sym_declConsts_repeat1] = aux_sym_declConsts_repeat1,
  [aux_sym_declVar_repeat1] = aux_sym_declVar_repeat1,
  [aux_sym_declLabels_repeat1] = aux_sym_declLabels_repeat1,
  [aux_sym_declExport_repeat1] = aux_sym_declExport_repeat1,
  [aux_sym_declEnum_repeat1] = aux_sym_declEnum_repeat1,
  [aux_sym_declArray_repeat1] = aux_sym_declArray_repeat1,
  [aux_sym_declClass_repeat1] = aux_sym_declClass_repeat1,
  [aux_sym__declClass_repeat1] = aux_sym__declClass_repeat1,
  [aux_sym_declProp_repeat1] = aux_sym_declProp_repeat1,
  [aux_sym_declProp_repeat2] = aux_sym_declProp_repeat2,
  [aux_sym_declPropArgs_repeat1] = aux_sym_declPropArgs_repeat1,
  [aux_sym_declVariant_repeat1] = aux_sym_declVariant_repeat1,
  [aux_sym_declVariantClause_repeat1] = aux_sym_declVariantClause_repeat1,
  [aux_sym__declProc_repeat1] = aux_sym__declProc_repeat1,
  [aux_sym__procAttribute_repeat1] = aux_sym__procAttribute_repeat1,
  [aux_sym__procAttributeNoExt_repeat1] = aux_sym__procAttributeNoExt_repeat1,
  [aux_sym_rttiAttributes_repeat1] = aux_sym_rttiAttributes_repeat1,
  [aux_sym_rttiAttributes_repeat2] = aux_sym_rttiAttributes_repeat2,
  [aux_sym_recInitializer_repeat1] = aux_sym_recInitializer_repeat1,
  [aux_sym_arrInitializer_repeat1] = aux_sym_arrInitializer_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_asmBody_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asmBody_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asmBody_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_type_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_type_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__literalString_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literalInt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__literalInt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__literalFloat_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_kProgram] = {
    .visible = true,
    .named = true,
  },
  [sym_kLibrary] = {
    .visible = true,
    .named = true,
  },
  [sym_kUnit] = {
    .visible = true,
    .named = true,
  },
  [sym_kUses] = {
    .visible = true,
    .named = true,
  },
  [sym_kInterface] = {
    .visible = true,
    .named = true,
  },
  [sym_kDispInterface] = {
    .visible = true,
    .named = true,
  },
  [sym_kImplementation] = {
    .visible = true,
    .named = true,
  },
  [sym_kInitialization] = {
    .visible = true,
    .named = true,
  },
  [sym_kFinalization] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_kBegin] = {
    .visible = true,
    .named = true,
  },
  [sym_kEnd] = {
    .visible = true,
    .named = true,
  },
  [sym_kAsm] = {
    .visible = true,
    .named = true,
  },
  [sym_kVar] = {
    .visible = true,
    .named = true,
  },
  [sym_kThreadvar] = {
    .visible = true,
    .named = true,
  },
  [sym_kConst] = {
    .visible = true,
    .named = true,
  },
  [sym_kConstref] = {
    .visible = true,
    .named = true,
  },
  [sym_kResourcestring] = {
    .visible = true,
    .named = true,
  },
  [sym_kOut] = {
    .visible = true,
    .named = true,
  },
  [sym_kType] = {
    .visible = true,
    .named = true,
  },
  [sym_kLabel] = {
    .visible = true,
    .named = true,
  },
  [sym_kExports] = {
    .visible = true,
    .named = true,
  },
  [sym_kAbsolute] = {
    .visible = true,
    .named = true,
  },
  [sym_kProperty] = {
    .visible = true,
    .named = true,
  },
  [sym_kRead] = {
    .visible = true,
    .named = true,
  },
  [sym_kWrite] = {
    .visible = true,
    .named = true,
  },
  [sym_kImplements] = {
    .visible = true,
    .named = true,
  },
  [sym_kDefault] = {
    .visible = true,
    .named = true,
  },
  [sym_kNodefault] = {
    .visible = true,
    .named = true,
  },
  [sym_kStored] = {
    .visible = true,
    .named = true,
  },
  [sym_kIndex] = {
    .visible = true,
    .named = true,
  },
  [sym_kDispId] = {
    .visible = true,
    .named = true,
  },
  [sym_kClass] = {
    .visible = true,
    .named = true,
  },
  [sym_kObject] = {
    .visible = true,
    .named = true,
  },
  [sym_kRecord] = {
    .visible = true,
    .named = true,
  },
  [sym_kObjcclass] = {
    .visible = true,
    .named = true,
  },
  [sym_kObjccategory] = {
    .visible = true,
    .named = true,
  },
  [sym_kObjcprotocol] = {
    .visible = true,
    .named = true,
  },
  [sym_kArray] = {
    .visible = true,
    .named = true,
  },
  [sym_kFile] = {
    .visible = true,
    .named = true,
  },
  [sym_kString] = {
    .visible = true,
    .named = true,
  },
  [sym_kSet] = {
    .visible = true,
    .named = true,
  },
  [sym_kOf] = {
    .visible = true,
    .named = true,
  },
  [sym_kHelper] = {
    .visible = true,
    .named = true,
  },
  [sym_kPacked] = {
    .visible = true,
    .named = true,
  },
  [sym_kGeneric] = {
    .visible = true,
    .named = true,
  },
  [sym_kSpecialize] = {
    .visible = true,
    .named = true,
  },
  [sym_kLt] = {
    .visible = true,
    .named = true,
  },
  [sym_kEq] = {
    .visible = true,
    .named = true,
  },
  [sym_kNeq] = {
    .visible = true,
    .named = true,
  },
  [sym_kGt] = {
    .visible = true,
    .named = true,
  },
  [sym_kLte] = {
    .visible = true,
    .named = true,
  },
  [sym_kGte] = {
    .visible = true,
    .named = true,
  },
  [sym_kAdd] = {
    .visible = true,
    .named = true,
  },
  [sym_kSub] = {
    .visible = true,
    .named = true,
  },
  [sym_kMul] = {
    .visible = true,
    .named = true,
  },
  [sym_kFdiv] = {
    .visible = true,
    .named = true,
  },
  [sym_kAt] = {
    .visible = true,
    .named = true,
  },
  [sym_kHat] = {
    .visible = true,
    .named = true,
  },
  [sym_kAssign] = {
    .visible = true,
    .named = true,
  },
  [sym_kAssignAdd] = {
    .visible = true,
    .named = true,
  },
  [sym_kAssignSub] = {
    .visible = true,
    .named = true,
  },
  [sym_kAssignMul] = {
    .visible = true,
    .named = true,
  },
  [sym_kAssignDiv] = {
    .visible = true,
    .named = true,
  },
  [sym_kOr] = {
    .visible = true,
    .named = true,
  },
  [sym_kXor] = {
    .visible = true,
    .named = true,
  },
  [sym_kDiv] = {
    .visible = true,
    .named = true,
  },
  [sym_kMod] = {
    .visible = true,
    .named = true,
  },
  [sym_kAnd] = {
    .visible = true,
    .named = true,
  },
  [sym_kShl] = {
    .visible = true,
    .named = true,
  },
  [sym_kShr] = {
    .visible = true,
    .named = true,
  },
  [sym_kNot] = {
    .visible = true,
    .named = true,
  },
  [sym_kIs] = {
    .visible = true,
    .named = true,
  },
  [sym_kAs] = {
    .visible = true,
    .named = true,
  },
  [sym_kIn] = {
    .visible = true,
    .named = true,
  },
  [sym_kFor] = {
    .visible = true,
    .named = true,
  },
  [sym_kTo] = {
    .visible = true,
    .named = true,
  },
  [sym_kDownto] = {
    .visible = true,
    .named = true,
  },
  [sym_kIf] = {
    .visible = true,
    .named = true,
  },
  [sym_kThen] = {
    .visible = true,
    .named = true,
  },
  [sym_kElse] = {
    .visible = true,
    .named = true,
  },
  [sym_kDo] = {
    .visible = true,
    .named = true,
  },
  [sym_kWhile] = {
    .visible = true,
    .named = true,
  },
  [sym_kRepeat] = {
    .visible = true,
    .named = true,
  },
  [sym_kUntil] = {
    .visible = true,
    .named = true,
  },
  [sym_kTry] = {
    .visible = true,
    .named = true,
  },
  [sym_kExcept] = {
    .visible = true,
    .named = true,
  },
  [sym_kFinally] = {
    .visible = true,
    .named = true,
  },
  [sym_kRaise] = {
    .visible = true,
    .named = true,
  },
  [sym_kOn] = {
    .visible = true,
    .named = true,
  },
  [sym_kCase] = {
    .visible = true,
    .named = true,
  },
  [sym_kWith] = {
    .visible = true,
    .named = true,
  },
  [sym_kGoto] = {
    .visible = true,
    .named = true,
  },
  [sym_kFunction] = {
    .visible = true,
    .named = true,
  },
  [sym_kProcedure] = {
    .visible = true,
    .named = true,
  },
  [sym_kConstructor] = {
    .visible = true,
    .named = true,
  },
  [sym_kDestructor] = {
    .visible = true,
    .named = true,
  },
  [sym_kOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_kReference] = {
    .visible = true,
    .named = true,
  },
  [sym_kPublished] = {
    .visible = true,
    .named = true,
  },
  [sym_kPublic] = {
    .visible = true,
    .named = true,
  },
  [sym_kProtected] = {
    .visible = true,
    .named = true,
  },
  [sym_kPrivate] = {
    .visible = true,
    .named = true,
  },
  [sym_kStrict] = {
    .visible = true,
    .named = true,
  },
  [sym_kRequired] = {
    .visible = true,
    .named = true,
  },
  [sym_kOptional] = {
    .visible = true,
    .named = true,
  },
  [sym_kForward] = {
    .visible = true,
    .named = true,
  },
  [sym_kStatic] = {
    .visible = true,
    .named = true,
  },
  [sym_kVirtual] = {
    .visible = true,
    .named = true,
  },
  [sym_kAbstract] = {
    .visible = true,
    .named = true,
  },
  [sym_kSealed] = {
    .visible = true,
    .named = true,
  },
  [sym_kDynamic] = {
    .visible = true,
    .named = true,
  },
  [sym_kOverride] = {
    .visible = true,
    .named = true,
  },
  [sym_kOverload] = {
    .visible = true,
    .named = true,
  },
  [sym_kReintroduce] = {
    .visible = true,
    .named = true,
  },
  [sym_kInherited] = {
    .visible = true,
    .named = true,
  },
  [sym_kInline] = {
    .visible = true,
    .named = true,
  },
  [sym_kStdcall] = {
    .visible = true,
    .named = true,
  },
  [sym_kCdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_kCppdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_kPascal] = {
    .visible = true,
    .named = true,
  },
  [sym_kRegister] = {
    .visible = true,
    .named = true,
  },
  [sym_kMwpascal] = {
    .visible = true,
    .named = true,
  },
  [sym_kExternal] = {
    .visible = true,
    .named = true,
  },
  [sym_kName] = {
    .visible = true,
    .named = true,
  },
  [sym_kMessage] = {
    .visible = true,
    .named = true,
  },
  [sym_kDeprecated] = {
    .visible = true,
    .named = true,
  },
  [sym_kExperimental] = {
    .visible = true,
    .named = true,
  },
  [sym_kPlatform] = {
    .visible = true,
    .named = true,
  },
  [sym_kUnimplemented] = {
    .visible = true,
    .named = true,
  },
  [sym_kCvar] = {
    .visible = true,
    .named = true,
  },
  [sym_kExport] = {
    .visible = true,
    .named = true,
  },
  [sym_kFar] = {
    .visible = true,
    .named = true,
  },
  [sym_kNear] = {
    .visible = true,
    .named = true,
  },
  [sym_kSafecall] = {
    .visible = true,
    .named = true,
  },
  [sym_kAssembler] = {
    .visible = true,
    .named = true,
  },
  [sym_kNostackframe] = {
    .visible = true,
    .named = true,
  },
  [sym_kInterrupt] = {
    .visible = true,
    .named = true,
  },
  [sym_kNoreturn] = {
    .visible = true,
    .named = true,
  },
  [sym_kIocheck] = {
    .visible = true,
    .named = true,
  },
  [sym_kLocal] = {
    .visible = true,
    .named = true,
  },
  [sym_kHardfloat] = {
    .visible = true,
    .named = true,
  },
  [sym_kSoftfloat] = {
    .visible = true,
    .named = true,
  },
  [sym_kMs_abi_default] = {
    .visible = true,
    .named = true,
  },
  [sym_kMs_abi_cdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_kSaveregisters] = {
    .visible = true,
    .named = true,
  },
  [sym_kSysv_abi_default] = {
    .visible = true,
    .named = true,
  },
  [sym_kSysv_abi_cdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_kVectorcall] = {
    .visible = true,
    .named = true,
  },
  [sym_kVarargs] = {
    .visible = true,
    .named = true,
  },
  [sym_kWinapi] = {
    .visible = true,
    .named = true,
  },
  [sym_kAlias] = {
    .visible = true,
    .named = true,
  },
  [sym_kDelayed] = {
    .visible = true,
    .named = true,
  },
  [sym_kNil] = {
    .visible = true,
    .named = true,
  },
  [sym_kTrue] = {
    .visible = true,
    .named = true,
  },
  [sym_kFalse] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_pp] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_library] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_implementation] = {
    .visible = true,
    .named = true,
  },
  [sym_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym_finalization] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleName] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_ifElse] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_exceptionHandler] = {
    .visible = true,
    .named = true,
  },
  [sym_exceptionElse] = {
    .visible = true,
    .named = true,
  },
  [sym_try] = {
    .visible = true,
    .named = true,
  },
  [sym_caseCase] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_asm] = {
    .visible = true,
    .named = true,
  },
  [sym_with] = {
    .visible = true,
    .named = true,
  },
  [sym_raise] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_goto] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_ifTr] = {
    .visible = true,
    .named = true,
  },
  [sym_ifElseTr] = {
    .visible = true,
    .named = true,
  },
  [sym_whileTr] = {
    .visible = true,
    .named = true,
  },
  [sym_repeatTr] = {
    .visible = true,
    .named = true,
  },
  [sym_forTr] = {
    .visible = true,
    .named = true,
  },
  [sym_foreachTr] = {
    .visible = true,
    .named = true,
  },
  [sym_exceptionHandlerTr] = {
    .visible = true,
    .named = true,
  },
  [sym__exceptionHandlersTr] = {
    .visible = false,
    .named = true,
  },
  [sym_tryTr] = {
    .visible = true,
    .named = true,
  },
  [sym_caseCaseTr] = {
    .visible = true,
    .named = true,
  },
  [sym_caseTr] = {
    .visible = true,
    .named = true,
  },
  [sym_blockTr] = {
    .visible = true,
    .named = true,
  },
  [sym_asmTr] = {
    .visible = true,
    .named = true,
  },
  [sym_withTr] = {
    .visible = true,
    .named = true,
  },
  [sym_raiseTr] = {
    .visible = true,
    .named = true,
  },
  [sym_statementTr] = {
    .visible = true,
    .named = true,
  },
  [sym_gotoTr] = {
    .visible = true,
    .named = true,
  },
  [sym__statementTr] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_varAssignDef] = {
    .visible = true,
    .named = true,
  },
  [sym_varDef] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_caseLabel] = {
    .visible = true,
    .named = true,
  },
  [sym__statementsTr] = {
    .visible = false,
    .named = true,
  },
  [sym_statementsTr] = {
    .visible = true,
    .named = true,
  },
  [sym_asmBody] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__ref] = {
    .visible = false,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_inherited] = {
    .visible = true,
    .named = true,
  },
  [sym_exprDot] = {
    .visible = true,
    .named = true,
  },
  [sym_exprDeref] = {
    .visible = true,
    .named = true,
  },
  [sym_exprAs] = {
    .visible = true,
    .named = true,
  },
  [sym_exprTpl] = {
    .visible = true,
    .named = true,
  },
  [sym_exprSubscript] = {
    .visible = true,
    .named = true,
  },
  [sym_exprCall] = {
    .visible = true,
    .named = true,
  },
  [sym_legacyFormat] = {
    .visible = true,
    .named = true,
  },
  [sym_exprArgs] = {
    .visible = true,
    .named = true,
  },
  [sym_exprBinary] = {
    .visible = true,
    .named = true,
  },
  [sym_exprUnary] = {
    .visible = true,
    .named = true,
  },
  [sym_exprParens] = {
    .visible = true,
    .named = true,
  },
  [sym_exprBrackets] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_typeref] = {
    .visible = true,
    .named = true,
  },
  [sym__typeref] = {
    .visible = false,
    .named = true,
  },
  [sym_typerefDot] = {
    .visible = true,
    .named = true,
  },
  [sym_typerefTpl] = {
    .visible = true,
    .named = true,
  },
  [sym_typerefPtr] = {
    .visible = true,
    .named = true,
  },
  [sym_typerefArgs] = {
    .visible = true,
    .named = true,
  },
  [sym_genericDot] = {
    .visible = true,
    .named = true,
  },
  [sym_genericTpl] = {
    .visible = true,
    .named = true,
  },
  [sym__genericName] = {
    .visible = false,
    .named = true,
  },
  [sym_genericArgs] = {
    .visible = true,
    .named = true,
  },
  [sym_genericArg] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_literalString] = {
    .visible = true,
    .named = true,
  },
  [sym__literalString] = {
    .visible = false,
    .named = true,
  },
  [sym_literalChar] = {
    .visible = true,
    .named = true,
  },
  [sym_literalNumber] = {
    .visible = true,
    .named = true,
  },
  [sym__literalInt] = {
    .visible = false,
    .named = true,
  },
  [sym__literalFloat] = {
    .visible = false,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__definitions] = {
    .visible = false,
    .named = false,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_defProc] = {
    .visible = true,
    .named = true,
  },
  [sym_declProcFwd] = {
    .visible = true,
    .named = true,
  },
  [sym__visibility] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__declarations] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classDeclarations] = {
    .visible = false,
    .named = false,
  },
  [sym_defaultValue] = {
    .visible = true,
    .named = true,
  },
  [sym_declUses] = {
    .visible = true,
    .named = true,
  },
  [sym_declExports] = {
    .visible = true,
    .named = true,
  },
  [sym_declTypes] = {
    .visible = true,
    .named = true,
  },
  [sym_declVars] = {
    .visible = true,
    .named = true,
  },
  [sym_declConsts] = {
    .visible = true,
    .named = true,
  },
  [sym_declType] = {
    .visible = true,
    .named = true,
  },
  [sym_declProc] = {
    .visible = true,
    .named = true,
  },
  [sym_declVar] = {
    .visible = true,
    .named = true,
  },
  [sym_declConst] = {
    .visible = true,
    .named = true,
  },
  [sym_declLabels] = {
    .visible = true,
    .named = true,
  },
  [sym_declLabel] = {
    .visible = true,
    .named = true,
  },
  [sym_declExport] = {
    .visible = true,
    .named = true,
  },
  [sym_declEnum] = {
    .visible = true,
    .named = true,
  },
  [sym_declEnumValue] = {
    .visible = true,
    .named = true,
  },
  [sym_declSet] = {
    .visible = true,
    .named = true,
  },
  [sym_declArray] = {
    .visible = true,
    .named = true,
  },
  [sym_declFile] = {
    .visible = true,
    .named = true,
  },
  [sym_declString] = {
    .visible = true,
    .named = true,
  },
  [sym_declProcRef] = {
    .visible = true,
    .named = true,
  },
  [sym_declMetaClass] = {
    .visible = true,
    .named = true,
  },
  [sym_declClass] = {
    .visible = true,
    .named = true,
  },
  [sym_declIntf] = {
    .visible = true,
    .named = true,
  },
  [sym_declHelper] = {
    .visible = true,
    .named = true,
  },
  [sym_guid] = {
    .visible = true,
    .named = true,
  },
  [sym__declClass] = {
    .visible = false,
    .named = true,
  },
  [sym_declSection] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__declFields] = {
    .visible = false,
    .named = false,
  },
  [sym_declField] = {
    .visible = true,
    .named = true,
  },
  [sym_declProp] = {
    .visible = true,
    .named = true,
  },
  [sym_declPropArgs] = {
    .visible = true,
    .named = true,
  },
  [sym_declVariant] = {
    .visible = true,
    .named = true,
  },
  [sym_declVariantClause] = {
    .visible = true,
    .named = true,
  },
  [sym_declVariantField] = {
    .visible = true,
    .named = true,
  },
  [sym__declProc] = {
    .visible = false,
    .named = true,
  },
  [sym__declOperator] = {
    .visible = false,
    .named = true,
  },
  [sym_operatorDot] = {
    .visible = true,
    .named = true,
  },
  [sym__operatorName] = {
    .visible = false,
    .named = true,
  },
  [sym_operatorName] = {
    .visible = true,
    .named = true,
  },
  [sym_declArgs] = {
    .visible = true,
    .named = true,
  },
  [sym_declArg] = {
    .visible = true,
    .named = true,
  },
  [sym__procAttribute] = {
    .visible = false,
    .named = true,
  },
  [sym__procAttributeNoExt] = {
    .visible = false,
    .named = true,
  },
  [sym_procAttribute] = {
    .visible = true,
    .named = true,
  },
  [sym_rttiAttributes] = {
    .visible = true,
    .named = true,
  },
  [sym_procExternal] = {
    .visible = true,
    .named = true,
  },
  [sym__initializer] = {
    .visible = false,
    .named = true,
  },
  [sym_recInitializer] = {
    .visible = true,
    .named = true,
  },
  [sym_recInitializerField] = {
    .visible = true,
    .named = true,
  },
  [sym_arrInitializer] = {
    .visible = true,
    .named = true,
  },
  [sym_kEndDot] = {
    .visible = true,
    .named = true,
  },
  [sym_kDot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moduleName_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exceptionElse_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exceptionHandlersTr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caseLabel_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statementsTr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asmBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exprTpl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_legacyFormat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exprArgs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typerefArgs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_genericArgs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_genericArg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literalString_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defProc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declProcFwd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declUses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declExports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declTypes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declVars_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declConsts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declVar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declLabels_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declExport_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declEnum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declArray_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declClass_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declClass_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declProp_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declProp_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declPropArgs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declVariant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declVariantClause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declProc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__procAttribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__procAttributeNoExt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rttiAttributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rttiAttributes_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recInitializer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrInitializer_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field__dummy = 1,
  field_args = 2,
  field_assign = 3,
  field_attribute = 4,
  field_body = 5,
  field_condition = 6,
  field_defaultValue = 7,
  field_dispid = 8,
  field_else = 9,
  field_end = 10,
  field_entity = 11,
  field_except = 12,
  field_exception = 13,
  field_finally = 14,
  field_getter = 15,
  field_guid = 16,
  field_header = 17,
  field_implements = 18,
  field_index = 19,
  field_iterable = 20,
  field_iterator = 21,
  field_label = 22,
  field_lhs = 23,
  field_local = 24,
  field_name = 25,
  field_operand = 26,
  field_operator = 27,
  field_parent = 28,
  field_resultName = 29,
  field_rhs = 30,
  field_setter = 31,
  field_start = 32,
  field_stored = 33,
  field_then = 34,
  field_try = 35,
  field_type = 36,
  field_value = 37,
  field_variable = 38,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field__dummy] = "_dummy",
  [field_args] = "args",
  [field_assign] = "assign",
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_defaultValue] = "defaultValue",
  [field_dispid] = "dispid",
  [field_else] = "else",
  [field_end] = "end",
  [field_entity] = "entity",
  [field_except] = "except",
  [field_exception] = "exception",
  [field_finally] = "finally",
  [field_getter] = "getter",
  [field_guid] = "guid",
  [field_header] = "header",
  [field_implements] = "implements",
  [field_index] = "index",
  [field_iterable] = "iterable",
  [field_iterator] = "iterator",
  [field_label] = "label",
  [field_lhs] = "lhs",
  [field_local] = "local",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parent] = "parent",
  [field_resultName] = "resultName",
  [field_rhs] = "rhs",
  [field_setter] = "setter",
  [field_start] = "start",
  [field_stored] = "stored",
  [field_then] = "then",
  [field_try] = "try",
  [field_type] = "type",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 5},
  [2] = {.index = 5, .length = 6},
  [6] = {.index = 11, .length = 1},
  [7] = {.index = 12, .length = 5},
  [8] = {.index = 17, .length = 6},
  [9] = {.index = 23, .length = 2},
  [10] = {.index = 25, .length = 1},
  [11] = {.index = 25, .length = 1},
  [12] = {.index = 26, .length = 2},
  [13] = {.index = 28, .length = 1},
  [14] = {.index = 29, .length = 1},
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 1},
  [18] = {.index = 33, .length = 6},
  [19] = {.index = 39, .length = 2},
  [20] = {.index = 39, .length = 2},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 41, .length = 2},
  [23] = {.index = 43, .length = 3},
  [24] = {.index = 46, .length = 1},
  [25] = {.index = 47, .length = 1},
  [26] = {.index = 48, .length = 1},
  [27] = {.index = 49, .length = 1},
  [28] = {.index = 50, .length = 1},
  [29] = {.index = 51, .length = 1},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 2},
  [32] = {.index = 56, .length = 1},
  [33] = {.index = 57, .length = 2},
  [34] = {.index = 59, .length = 2},
  [35] = {.index = 61, .length = 2},
  [36] = {.index = 63, .length = 3},
  [37] = {.index = 63, .length = 3},
  [38] = {.index = 66, .length = 6},
  [39] = {.index = 72, .length = 2},
  [40] = {.index = 74, .length = 1},
  [41] = {.index = 75, .length = 2},
  [42] = {.index = 77, .length = 1},
  [43] = {.index = 78, .length = 2},
  [44] = {.index = 78, .length = 2},
  [45] = {.index = 80, .length = 3},
  [46] = {.index = 80, .length = 3},
  [47] = {.index = 83, .length = 2},
  [49] = {.index = 85, .length = 1},
  [50] = {.index = 86, .length = 2},
  [51] = {.index = 88, .length = 2},
  [52] = {.index = 90, .length = 2},
  [53] = {.index = 92, .length = 2},
  [54] = {.index = 94, .length = 2},
  [55] = {.index = 96, .length = 2},
  [56] = {.index = 98, .length = 2},
  [57] = {.index = 100, .length = 1},
  [58] = {.index = 101, .length = 2},
  [59] = {.index = 103, .length = 2},
  [60] = {.index = 105, .length = 1},
  [61] = {.index = 106, .length = 2},
  [62] = {.index = 108, .length = 1},
  [63] = {.index = 109, .length = 3},
  [64] = {.index = 112, .length = 2},
  [65] = {.index = 114, .length = 2},
  [66] = {.index = 116, .length = 1},
  [67] = {.index = 117, .length = 2},
  [68] = {.index = 119, .length = 2},
  [69] = {.index = 121, .length = 2},
  [70] = {.index = 123, .length = 1},
  [71] = {.index = 124, .length = 2},
  [72] = {.index = 126, .length = 3},
  [73] = {.index = 129, .length = 3},
  [74] = {.index = 132, .length = 3},
  [75] = {.index = 135, .length = 2},
  [76] = {.index = 135, .length = 2},
  [77] = {.index = 137, .length = 3},
  [78] = {.index = 137, .length = 3},
  [79] = {.index = 140, .length = 2},
  [80] = {.index = 142, .length = 3},
  [81] = {.index = 142, .length = 3},
  [82] = {.index = 145, .length = 3},
  [84] = {.index = 148, .length = 2},
  [85] = {.index = 150, .length = 2},
  [86] = {.index = 152, .length = 2},
  [87] = {.index = 154, .length = 3},
  [88] = {.index = 157, .length = 3},
  [89] = {.index = 160, .length = 2},
  [90] = {.index = 162, .length = 3},
  [91] = {.index = 165, .length = 2},
  [92] = {.index = 167, .length = 1},
  [93] = {.index = 168, .length = 3},
  [94] = {.index = 171, .length = 3},
  [95] = {.index = 174, .length = 3},
  [96] = {.index = 177, .length = 3},
  [97] = {.index = 180, .length = 3},
  [98] = {.index = 183, .length = 3},
  [99] = {.index = 186, .length = 2},
  [100] = {.index = 188, .length = 3},
  [101] = {.index = 191, .length = 1},
  [102] = {.index = 192, .length = 2},
  [103] = {.index = 194, .length = 3},
  [104] = {.index = 197, .length = 3},
  [105] = {.index = 200, .length = 3},
  [106] = {.index = 203, .length = 2},
  [107] = {.index = 205, .length = 2},
  [108] = {.index = 207, .length = 2},
  [109] = {.index = 209, .length = 3},
  [110] = {.index = 212, .length = 3},
  [111] = {.index = 215, .length = 3},
  [112] = {.index = 218, .length = 4},
  [113] = {.index = 222, .length = 3},
  [114] = {.index = 225, .length = 4},
  [115] = {.index = 229, .length = 4},
  [116] = {.index = 225, .length = 4},
  [117] = {.index = 233, .length = 3},
  [118] = {.index = 233, .length = 3},
  [119] = {.index = 236, .length = 1},
  [120] = {.index = 237, .length = 4},
  [121] = {.index = 237, .length = 4},
  [122] = {.index = 241, .length = 3},
  [123] = {.index = 244, .length = 3},
  [124] = {.index = 247, .length = 3},
  [125] = {.index = 250, .length = 2},
  [126] = {.index = 252, .length = 2},
  [127] = {.index = 254, .length = 1},
  [128] = {.index = 255, .length = 4},
  [129] = {.index = 259, .length = 3},
  [130] = {.index = 262, .length = 3},
  [131] = {.index = 265, .length = 4},
  [132] = {.index = 269, .length = 4},
  [133] = {.index = 273, .length = 2},
  [134] = {.index = 275, .length = 3},
  [135] = {.index = 278, .length = 4},
  [136] = {.index = 282, .length = 4},
  [137] = {.index = 286, .length = 3},
  [138] = {.index = 289, .length = 3},
  [139] = {.index = 292, .length = 4},
  [140] = {.index = 296, .length = 2},
  [141] = {.index = 298, .length = 3},
  [142] = {.index = 301, .length = 3},
  [143] = {.index = 304, .length = 3},
  [144] = {.index = 307, .length = 4},
  [145] = {.index = 311, .length = 3},
  [146] = {.index = 314, .length = 2},
  [147] = {.index = 316, .length = 3},
  [148] = {.index = 319, .length = 3},
  [149] = {.index = 322, .length = 3},
  [150] = {.index = 325, .length = 4},
  [151] = {.index = 329, .length = 4},
  [152] = {.index = 333, .length = 4},
  [153] = {.index = 337, .length = 4},
  [154] = {.index = 341, .length = 4},
  [155] = {.index = 345, .length = 4},
  [156] = {.index = 349, .length = 5},
  [157] = {.index = 349, .length = 5},
  [158] = {.index = 354, .length = 2},
  [159] = {.index = 356, .length = 3},
  [160] = {.index = 359, .length = 1},
  [161] = {.index = 360, .length = 3},
  [162] = {.index = 363, .length = 4},
  [163] = {.index = 367, .length = 4},
  [164] = {.index = 371, .length = 4},
  [165] = {.index = 375, .length = 5},
  [166] = {.index = 380, .length = 4},
  [167] = {.index = 384, .length = 5},
  [168] = {.index = 389, .length = 4},
  [169] = {.index = 393, .length = 4},
  [170] = {.index = 397, .length = 1},
  [171] = {.index = 398, .length = 3},
  [172] = {.index = 401, .length = 3},
  [173] = {.index = 404, .length = 2},
  [174] = {.index = 406, .length = 3},
  [175] = {.index = 409, .length = 4},
  [176] = {.index = 413, .length = 4},
  [177] = {.index = 417, .length = 4},
  [178] = {.index = 421, .length = 4},
  [179] = {.index = 425, .length = 4},
  [180] = {.index = 429, .length = 4},
  [181] = {.index = 433, .length = 3},
  [182] = {.index = 436, .length = 3},
  [183] = {.index = 439, .length = 3},
  [184] = {.index = 442, .length = 4},
  [185] = {.index = 446, .length = 5},
  [186] = {.index = 451, .length = 5},
  [187] = {.index = 456, .length = 5},
  [188] = {.index = 461, .length = 5},
  [189] = {.index = 466, .length = 4},
  [190] = {.index = 470, .length = 2},
  [191] = {.index = 472, .length = 3},
  [192] = {.index = 475, .length = 5},
  [193] = {.index = 480, .length = 4},
  [194] = {.index = 484, .length = 5},
  [195] = {.index = 489, .length = 4},
  [196] = {.index = 493, .length = 2},
  [197] = {.index = 495, .length = 4},
  [198] = {.index = 499, .length = 3},
  [199] = {.index = 502, .length = 4},
  [200] = {.index = 506, .length = 5},
  [201] = {.index = 511, .length = 5},
  [202] = {.index = 516, .length = 5},
  [203] = {.index = 521, .length = 5},
  [204] = {.index = 526, .length = 4},
  [205] = {.index = 530, .length = 4},
  [206] = {.index = 534, .length = 4},
  [207] = {.index = 538, .length = 6},
  [208] = {.index = 544, .length = 1},
  [209] = {.index = 545, .length = 1},
  [210] = {.index = 546, .length = 1},
  [211] = {.index = 547, .length = 1},
  [212] = {.index = 548, .length = 1},
  [213] = {.index = 549, .length = 1},
  [214] = {.index = 550, .length = 1},
  [215] = {.index = 551, .length = 9},
  [216] = {.index = 560, .length = 14},
  [217] = {.index = 574, .length = 4},
  [218] = {.index = 578, .length = 3},
  [219] = {.index = 581, .length = 3},
  [220] = {.index = 584, .length = 5},
  [221] = {.index = 589, .length = 4},
  [222] = {.index = 593, .length = 2},
  [223] = {.index = 595, .length = 6},
  [224] = {.index = 601, .length = 5},
  [225] = {.index = 606, .length = 2},
  [226] = {.index = 608, .length = 10},
  [227] = {.index = 618, .length = 10},
  [228] = {.index = 628, .length = 9},
  [229] = {.index = 637, .length = 4},
  [230] = {.index = 641, .length = 3},
  [231] = {.index = 644, .length = 11},
  [232] = {.index = 655, .length = 10},
  [233] = {.index = 665, .length = 10},
  [234] = {.index = 675, .length = 9},
  [235] = {.index = 684, .length = 4},
  [236] = {.index = 688, .length = 11},
  [237] = {.index = 699, .length = 10},
  [238] = {.index = 709, .length = 10},
  [239] = {.index = 719, .length = 11},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_args, 0, .inherited = true},
    {field_assign, 0, .inherited = true},
    {field_attribute, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [5] =
    {field_args, 0, .inherited = true},
    {field_assign, 0, .inherited = true},
    {field_attribute, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_resultName, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [11] =
    {field_name, 0},
  [12] =
    {field_args, 1, .inherited = true},
    {field_assign, 1, .inherited = true},
    {field_attribute, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [17] =
    {field_args, 1, .inherited = true},
    {field_assign, 1, .inherited = true},
    {field_attribute, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_resultName, 1, .inherited = true},
    {field_type, 1, .inherited = true},
  [23] =
    {field_operand, 1},
    {field_operator, 0},
  [25] =
    {field_body, 1},
  [26] =
    {field_operand, 0},
    {field_operator, 1},
  [28] =
    {field_exception, 1},
  [29] =
    {field_name, 1},
  [30] =
    {field_body, 1},
    {field_header, 0},
  [32] =
    {field_attribute, 0, .inherited = true},
  [33] =
    {field_args, 0, .inherited = true},
    {field_assign, 0, .inherited = true},
    {field_attribute, 0, .inherited = true},
    {field_attribute, 2, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [39] =
    {field_body, 2},
    {field_local, 1},
  [41] =
    {field_args, 1},
    {field_body, 2},
  [43] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [46] =
    {field_entity, 0},
  [47] =
    {field_condition, 1},
  [48] =
    {field_condition, 2},
  [49] =
    {field_except, 1},
  [50] =
    {field_finally, 1},
  [51] =
    {field_entity, 1},
  [52] =
    {field_entity, 0, .inherited = true},
    {field_entity, 1, .inherited = true},
  [54] =
    {field_defaultValue, 1},
    {field_name, 0},
  [56] =
    {field_name, 2},
  [57] =
    {field_attribute, 3, .inherited = true},
    {field_name, 1},
  [59] =
    {field_assign, 2},
    {field_name, 1},
  [61] =
    {field_args, 2},
    {field_name, 1},
  [63] =
    {field_body, 2},
    {field_header, 0},
    {field_local, 1},
  [66] =
    {field_args, 0, .inherited = true},
    {field_assign, 0, .inherited = true},
    {field_attribute, 0, .inherited = true},
    {field_attribute, 3, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [72] =
    {field_dispid, 0},
    {field_dispid, 1},
  [74] =
    {field_attribute, 0},
  [75] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
  [77] =
    {field__dummy, 0},
  [78] =
    {field_body, 3},
    {field_type, 2},
  [80] =
    {field_args, 1},
    {field_body, 3},
    {field_local, 2},
  [83] =
    {field_args, 2},
    {field_entity, 0},
  [85] =
    {field_type, 3},
  [86] =
    {field_condition, 1},
    {field_then, 3},
  [88] =
    {field_body, 3},
    {field_condition, 1},
  [90] =
    {field_body, 1},
    {field_condition, 3},
  [92] =
    {field_except, 1},
    {field_except, 2},
  [94] =
    {field_finally, 1},
    {field_finally, 2},
  [96] =
    {field_except, 2},
    {field_try, 1},
  [98] =
    {field_finally, 2},
    {field_try, 1},
  [100] =
    {field_label, 0},
  [101] =
    {field_body, 3},
    {field_entity, 1},
  [103] =
    {field_entity, 1, .inherited = true},
    {field_entity, 2},
  [105] =
    {field_args, 1},
  [106] =
    {field_name, 0},
    {field_type, 2},
  [108] =
    {field_value, 0},
  [109] =
    {field_attribute, 3, .inherited = true},
    {field_defaultValue, 1},
    {field_name, 0},
  [112] =
    {field_defaultValue, 2},
    {field_name, 1},
  [114] =
    {field_name, 0},
    {field_name, 1},
  [116] =
    {field_guid, 1},
  [117] =
    {field_attribute, 4, .inherited = true},
    {field_name, 2},
  [119] =
    {field_assign, 3},
    {field_name, 2},
  [121] =
    {field_args, 3},
    {field_name, 2},
  [123] =
    {field_name, 3},
  [124] =
    {field_name, 1},
    {field_type, 3},
  [126] =
    {field_assign, 2},
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
  [129] =
    {field_args, 2},
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
  [132] =
    {field_args, 2},
    {field_assign, 3},
    {field_name, 1},
  [135] =
    {field_body, 2},
    {field_header, 0},
  [137] =
    {field_body, 4},
    {field_local, 3},
    {field_type, 2},
  [140] =
    {field_name, 1},
    {field_name, 2},
  [142] =
    {field_args, 1},
    {field_body, 4},
    {field_type, 3},
  [145] =
    {field_args, 2},
    {field_args, 3},
    {field_entity, 0},
  [148] =
    {field_end, 3},
    {field_start, 1},
  [150] =
    {field_iterable, 3},
    {field_iterator, 1},
  [152] =
    {field_condition, 1},
    {field_else, 4},
  [154] =
    {field_except, 2},
    {field_except, 3},
    {field_try, 1},
  [157] =
    {field_finally, 2},
    {field_finally, 3},
    {field_try, 1},
  [160] =
    {field_body, 1},
    {field_label, 0},
  [162] =
    {field_body, 4},
    {field_entity, 1, .inherited = true},
    {field_entity, 2},
  [165] =
    {field_name, 0},
    {field_value, 1},
  [167] =
    {field_type, 2},
  [168] =
    {field_attribute, 4, .inherited = true},
    {field_name, 0},
    {field_type, 2},
  [171] =
    {field_defaultValue, 3},
    {field_name, 0},
    {field_type, 2},
  [174] =
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [177] =
    {field_attribute, 4, .inherited = true},
    {field_defaultValue, 2},
    {field_name, 1},
  [180] =
    {field_name, 0},
    {field_type, 1},
    {field_type, 2},
  [183] =
    {field_defaultValue, 2},
    {field_name, 0},
    {field_name, 1},
  [186] =
    {field_parent, 1},
    {field_parent, 2},
  [188] =
    {field_name, 0},
    {field_type, 2},
    {field_type, 3},
  [191] =
    {field_guid, 2},
  [192] =
    {field_name, 2},
    {field_type, 4},
  [194] =
    {field_assign, 3},
    {field_attribute, 5, .inherited = true},
    {field_name, 2},
  [197] =
    {field_args, 3},
    {field_attribute, 5, .inherited = true},
    {field_name, 2},
  [200] =
    {field_args, 3},
    {field_assign, 4},
    {field_name, 2},
  [203] =
    {field_attribute, 5, .inherited = true},
    {field_name, 3},
  [205] =
    {field_assign, 4},
    {field_name, 3},
  [207] =
    {field_args, 4},
    {field_name, 3},
  [209] =
    {field_attribute, 5, .inherited = true},
    {field_name, 1},
    {field_type, 3},
  [212] =
    {field_assign, 4},
    {field_name, 1},
    {field_type, 3},
  [215] =
    {field_args, 2},
    {field_name, 1},
    {field_type, 4},
  [218] =
    {field_args, 2},
    {field_assign, 3},
    {field_attribute, 5, .inherited = true},
    {field_name, 1},
  [222] =
    {field_name, 1},
    {field_resultName, 2},
    {field_type, 4},
  [225] =
    {field_body, 2},
    {field_body, 4, .inherited = true},
    {field_header, 0},
    {field_local, 4, .inherited = true},
  [229] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_local, 0, .inherited = true},
    {field_local, 1, .inherited = true},
  [233] =
    {field_body, 3},
    {field_header, 0},
    {field_local, 2},
  [236] =
    {field_attribute, 1},
  [237] =
    {field_args, 1},
    {field_body, 5},
    {field_local, 4},
    {field_type, 3},
  [241] =
    {field_body, 5},
    {field_end, 3},
    {field_start, 1},
  [244] =
    {field_body, 5},
    {field_iterable, 3},
    {field_iterator, 1},
  [247] =
    {field_condition, 1},
    {field_else, 5},
    {field_then, 3},
  [250] =
    {field_body, 3},
    {field_exception, 1},
  [252] =
    {field_args, 1},
    {field_type, 3},
  [254] =
    {field_args, 3},
  [255] =
    {field_attribute, 5, .inherited = true},
    {field_defaultValue, 3},
    {field_name, 0},
    {field_type, 2},
  [259] =
    {field_defaultValue, 4},
    {field_name, 1},
    {field_type, 3},
  [262] =
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
  [265] =
    {field_attribute, 5, .inherited = true},
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [269] =
    {field_defaultValue, 4},
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [273] =
    {field_name, 0},
    {field_value, 2},
  [275] =
    {field_name, 1},
    {field_type, 3},
    {field_type, 4},
  [278] =
    {field_defaultValue, 3},
    {field_name, 0},
    {field_type, 1},
    {field_type, 2},
  [282] =
    {field_name, 0},
    {field_name, 1},
    {field_type, 2},
    {field_type, 3},
  [286] =
    {field_guid, 3},
    {field_parent, 1},
    {field_parent, 2},
  [289] =
    {field_parent, 1},
    {field_parent, 2},
    {field_parent, 3},
  [292] =
    {field_attribute, 5, .inherited = true},
    {field_name, 0},
    {field_type, 2},
    {field_type, 3},
  [296] =
    {field_parent, 2},
    {field_parent, 3},
  [298] =
    {field_attribute, 6, .inherited = true},
    {field_name, 2},
    {field_type, 4},
  [301] =
    {field_assign, 5},
    {field_name, 2},
    {field_type, 4},
  [304] =
    {field_args, 3},
    {field_name, 2},
    {field_type, 5},
  [307] =
    {field_args, 3},
    {field_assign, 4},
    {field_attribute, 6, .inherited = true},
    {field_name, 2},
  [311] =
    {field_name, 2},
    {field_resultName, 3},
    {field_type, 5},
  [314] =
    {field_name, 3},
    {field_type, 5},
  [316] =
    {field_assign, 4},
    {field_attribute, 6, .inherited = true},
    {field_name, 3},
  [319] =
    {field_args, 4},
    {field_attribute, 6, .inherited = true},
    {field_name, 3},
  [322] =
    {field_args, 4},
    {field_assign, 5},
    {field_name, 3},
  [325] =
    {field_assign, 4},
    {field_attribute, 6, .inherited = true},
    {field_name, 1},
    {field_type, 3},
  [329] =
    {field_args, 2},
    {field_attribute, 6, .inherited = true},
    {field_name, 1},
    {field_type, 4},
  [333] =
    {field_args, 2},
    {field_assign, 5},
    {field_name, 1},
    {field_type, 4},
  [337] =
    {field_attribute, 6, .inherited = true},
    {field_name, 1},
    {field_resultName, 2},
    {field_type, 4},
  [341] =
    {field_assign, 5},
    {field_name, 1},
    {field_resultName, 2},
    {field_type, 4},
  [345] =
    {field_args, 2},
    {field_name, 1},
    {field_resultName, 3},
    {field_type, 5},
  [349] =
    {field_body, 3},
    {field_body, 5, .inherited = true},
    {field_header, 0},
    {field_local, 2},
    {field_local, 5, .inherited = true},
  [354] =
    {field_attribute, 1, .inherited = true},
    {field_attribute, 2},
  [356] =
    {field_exception, 3},
    {field_variable, 1},
    {field_variable, 2},
  [359] =
    {field_type, 4},
  [360] =
    {field_attribute, 6, .inherited = true},
    {field_name, 0},
    {field_type, 2},
  [363] =
    {field_attribute, 6, .inherited = true},
    {field_defaultValue, 4},
    {field_name, 1},
    {field_type, 3},
  [367] =
    {field_attribute, 6, .inherited = true},
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
  [371] =
    {field_defaultValue, 5},
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
  [375] =
    {field_attribute, 6, .inherited = true},
    {field_defaultValue, 4},
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [380] =
    {field_attribute, 6, .inherited = true},
    {field_name, 1},
    {field_type, 3},
    {field_type, 4},
  [384] =
    {field_defaultValue, 4},
    {field_name, 0},
    {field_name, 1},
    {field_type, 2},
    {field_type, 3},
  [389] =
    {field_guid, 4},
    {field_parent, 1},
    {field_parent, 2},
    {field_parent, 3},
  [393] =
    {field_parent, 1},
    {field_parent, 2},
    {field_parent, 3},
    {field_parent, 4},
  [397] =
    {field_type, 1},
  [398] =
    {field_parent, 2},
    {field_parent, 3},
    {field_parent, 4},
  [401] =
    {field_guid, 4},
    {field_parent, 2},
    {field_parent, 3},
  [404] =
    {field_parent, 3},
    {field_parent, 4},
  [406] =
    {field_name, 2},
    {field_type, 4},
    {field_type, 5},
  [409] =
    {field_assign, 5},
    {field_attribute, 7, .inherited = true},
    {field_name, 2},
    {field_type, 4},
  [413] =
    {field_args, 3},
    {field_attribute, 7, .inherited = true},
    {field_name, 2},
    {field_type, 5},
  [417] =
    {field_args, 3},
    {field_assign, 6},
    {field_name, 2},
    {field_type, 5},
  [421] =
    {field_attribute, 7, .inherited = true},
    {field_name, 2},
    {field_resultName, 3},
    {field_type, 5},
  [425] =
    {field_assign, 6},
    {field_name, 2},
    {field_resultName, 3},
    {field_type, 5},
  [429] =
    {field_args, 3},
    {field_name, 2},
    {field_resultName, 4},
    {field_type, 6},
  [433] =
    {field_attribute, 7, .inherited = true},
    {field_name, 3},
    {field_type, 5},
  [436] =
    {field_assign, 6},
    {field_name, 3},
    {field_type, 5},
  [439] =
    {field_args, 4},
    {field_name, 3},
    {field_type, 6},
  [442] =
    {field_args, 4},
    {field_assign, 5},
    {field_attribute, 7, .inherited = true},
    {field_name, 3},
  [446] =
    {field_args, 2},
    {field_assign, 5},
    {field_attribute, 7, .inherited = true},
    {field_name, 1},
    {field_type, 4},
  [451] =
    {field_assign, 5},
    {field_attribute, 7, .inherited = true},
    {field_name, 1},
    {field_resultName, 2},
    {field_type, 4},
  [456] =
    {field_args, 2},
    {field_attribute, 7, .inherited = true},
    {field_name, 1},
    {field_resultName, 3},
    {field_type, 5},
  [461] =
    {field_args, 2},
    {field_assign, 6},
    {field_name, 1},
    {field_resultName, 3},
    {field_type, 5},
  [466] =
    {field_body, 5},
    {field_exception, 3},
    {field_variable, 1},
    {field_variable, 2},
  [470] =
    {field_args, 3},
    {field_type, 5},
  [472] =
    {field_attribute, 7, .inherited = true},
    {field_name, 1},
    {field_type, 3},
  [475] =
    {field_attribute, 7, .inherited = true},
    {field_defaultValue, 5},
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
  [480] =
    {field_attribute, 7, .inherited = true},
    {field_name, 0},
    {field_name, 1},
    {field_type, 3},
  [484] =
    {field_guid, 5},
    {field_parent, 1},
    {field_parent, 2},
    {field_parent, 3},
    {field_parent, 4},
  [489] =
    {field_parent, 2},
    {field_parent, 3},
    {field_parent, 4},
    {field_parent, 5},
  [493] =
    {field_parent, 4},
    {field_parent, 5},
  [495] =
    {field_guid, 5},
    {field_parent, 2},
    {field_parent, 3},
    {field_parent, 4},
  [499] =
    {field_parent, 3},
    {field_parent, 4},
    {field_parent, 5},
  [502] =
    {field_attribute, 7, .inherited = true},
    {field_name, 2},
    {field_type, 4},
    {field_type, 5},
  [506] =
    {field_args, 3},
    {field_assign, 6},
    {field_attribute, 8, .inherited = true},
    {field_name, 2},
    {field_type, 5},
  [511] =
    {field_assign, 6},
    {field_attribute, 8, .inherited = true},
    {field_name, 2},
    {field_resultName, 3},
    {field_type, 5},
  [516] =
    {field_args, 3},
    {field_attribute, 8, .inherited = true},
    {field_name, 2},
    {field_resultName, 4},
    {field_type, 6},
  [521] =
    {field_args, 3},
    {field_assign, 7},
    {field_name, 2},
    {field_resultName, 4},
    {field_type, 6},
  [526] =
    {field_assign, 6},
    {field_attribute, 8, .inherited = true},
    {field_name, 3},
    {field_type, 5},
  [530] =
    {field_args, 4},
    {field_attribute, 8, .inherited = true},
    {field_name, 3},
    {field_type, 6},
  [534] =
    {field_args, 4},
    {field_assign, 7},
    {field_name, 3},
    {field_type, 6},
  [538] =
    {field_args, 2},
    {field_assign, 6},
    {field_attribute, 8, .inherited = true},
    {field_name, 1},
    {field_resultName, 3},
    {field_type, 5},
  [544] =
    {field_getter, 1},
  [545] =
    {field_setter, 1},
  [546] =
    {field_implements, 1},
  [547] =
    {field_defaultValue, 1},
  [548] =
    {field_stored, 1},
  [549] =
    {field_index, 1},
  [550] =
    {field_dispid, 1},
  [551] =
    {field_defaultValue, 4, .inherited = true},
    {field_dispid, 4, .inherited = true},
    {field_getter, 4, .inherited = true},
    {field_implements, 4, .inherited = true},
    {field_index, 4, .inherited = true},
    {field_name, 1},
    {field_setter, 4, .inherited = true},
    {field_stored, 4, .inherited = true},
    {field_type, 3},
  [560] =
    {field_defaultValue, 0, .inherited = true},
    {field_defaultValue, 1, .inherited = true},
    {field_dispid, 0, .inherited = true},
    {field_dispid, 1, .inherited = true},
    {field_getter, 0, .inherited = true},
    {field_getter, 1, .inherited = true},
    {field_implements, 0, .inherited = true},
    {field_implements, 1, .inherited = true},
    {field_index, 0, .inherited = true},
    {field_index, 1, .inherited = true},
    {field_setter, 0, .inherited = true},
    {field_setter, 1, .inherited = true},
    {field_stored, 0, .inherited = true},
    {field_stored, 1, .inherited = true},
  [574] =
    {field_attribute, 8, .inherited = true},
    {field_name, 1},
    {field_name, 2},
    {field_type, 4},
  [578] =
    {field_name, 1},
    {field_name, 2},
    {field_type, 3},
  [581] =
    {field_parent, 4},
    {field_parent, 5},
    {field_parent, 6},
  [584] =
    {field_guid, 6},
    {field_parent, 2},
    {field_parent, 3},
    {field_parent, 4},
    {field_parent, 5},
  [589] =
    {field_parent, 3},
    {field_parent, 4},
    {field_parent, 5},
    {field_parent, 6},
  [593] =
    {field_parent, 5},
    {field_parent, 6},
  [595] =
    {field_args, 3},
    {field_assign, 7},
    {field_attribute, 9, .inherited = true},
    {field_name, 2},
    {field_resultName, 4},
    {field_type, 6},
  [601] =
    {field_args, 4},
    {field_assign, 7},
    {field_attribute, 9, .inherited = true},
    {field_name, 3},
    {field_type, 6},
  [606] =
    {field_implements, 1},
    {field_implements, 2},
  [608] =
    {field_attribute, 6, .inherited = true},
    {field_defaultValue, 4, .inherited = true},
    {field_dispid, 4, .inherited = true},
    {field_getter, 4, .inherited = true},
    {field_implements, 4, .inherited = true},
    {field_index, 4, .inherited = true},
    {field_name, 1},
    {field_setter, 4, .inherited = true},
    {field_stored, 4, .inherited = true},
    {field_type, 3},
  [618] =
    {field_args, 2},
    {field_defaultValue, 5, .inherited = true},
    {field_dispid, 5, .inherited = true},
    {field_getter, 5, .inherited = true},
    {field_implements, 5, .inherited = true},
    {field_index, 5, .inherited = true},
    {field_name, 1},
    {field_setter, 5, .inherited = true},
    {field_stored, 5, .inherited = true},
    {field_type, 4},
  [628] =
    {field_defaultValue, 5, .inherited = true},
    {field_dispid, 5, .inherited = true},
    {field_getter, 5, .inherited = true},
    {field_implements, 5, .inherited = true},
    {field_index, 5, .inherited = true},
    {field_name, 2},
    {field_setter, 5, .inherited = true},
    {field_stored, 5, .inherited = true},
    {field_type, 4},
  [637] =
    {field_parent, 4},
    {field_parent, 5},
    {field_parent, 6},
    {field_parent, 7},
  [641] =
    {field_parent, 5},
    {field_parent, 6},
    {field_parent, 7},
  [644] =
    {field_args, 2},
    {field_attribute, 7, .inherited = true},
    {field_defaultValue, 5, .inherited = true},
    {field_dispid, 5, .inherited = true},
    {field_getter, 5, .inherited = true},
    {field_implements, 5, .inherited = true},
    {field_index, 5, .inherited = true},
    {field_name, 1},
    {field_setter, 5, .inherited = true},
    {field_stored, 5, .inherited = true},
    {field_type, 4},
  [655] =
    {field_attribute, 7, .inherited = true},
    {field_defaultValue, 5, .inherited = true},
    {field_dispid, 5, .inherited = true},
    {field_getter, 5, .inherited = true},
    {field_implements, 5, .inherited = true},
    {field_index, 5, .inherited = true},
    {field_name, 2},
    {field_setter, 5, .inherited = true},
    {field_stored, 5, .inherited = true},
    {field_type, 4},
  [665] =
    {field_args, 3},
    {field_defaultValue, 6, .inherited = true},
    {field_dispid, 6, .inherited = true},
    {field_getter, 6, .inherited = true},
    {field_implements, 6, .inherited = true},
    {field_index, 6, .inherited = true},
    {field_name, 2},
    {field_setter, 6, .inherited = true},
    {field_stored, 6, .inherited = true},
    {field_type, 5},
  [675] =
    {field_defaultValue, 6, .inherited = true},
    {field_dispid, 6, .inherited = true},
    {field_getter, 6, .inherited = true},
    {field_implements, 6, .inherited = true},
    {field_index, 6, .inherited = true},
    {field_name, 3},
    {field_setter, 6, .inherited = true},
    {field_stored, 6, .inherited = true},
    {field_type, 5},
  [684] =
    {field_parent, 5},
    {field_parent, 6},
    {field_parent, 7},
    {field_parent, 8},
  [688] =
    {field_args, 3},
    {field_attribute, 8, .inherited = true},
    {field_defaultValue, 6, .inherited = true},
    {field_dispid, 6, .inherited = true},
    {field_getter, 6, .inherited = true},
    {field_implements, 6, .inherited = true},
    {field_index, 6, .inherited = true},
    {field_name, 2},
    {field_setter, 6, .inherited = true},
    {field_stored, 6, .inherited = true},
    {field_type, 5},
  [699] =
    {field_attribute, 8, .inherited = true},
    {field_defaultValue, 6, .inherited = true},
    {field_dispid, 6, .inherited = true},
    {field_getter, 6, .inherited = true},
    {field_implements, 6, .inherited = true},
    {field_index, 6, .inherited = true},
    {field_name, 3},
    {field_setter, 6, .inherited = true},
    {field_stored, 6, .inherited = true},
    {field_type, 5},
  [709] =
    {field_args, 4},
    {field_defaultValue, 7, .inherited = true},
    {field_dispid, 7, .inherited = true},
    {field_getter, 7, .inherited = true},
    {field_implements, 7, .inherited = true},
    {field_index, 7, .inherited = true},
    {field_name, 3},
    {field_setter, 7, .inherited = true},
    {field_stored, 7, .inherited = true},
    {field_type, 6},
  [719] =
    {field_args, 4},
    {field_attribute, 9, .inherited = true},
    {field_defaultValue, 7, .inherited = true},
    {field_dispid, 7, .inherited = true},
    {field_getter, 7, .inherited = true},
    {field_implements, 7, .inherited = true},
    {field_index, 7, .inherited = true},
    {field_name, 3},
    {field_setter, 7, .inherited = true},
    {field_stored, 7, .inherited = true},
    {field_type, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_identifier,
  },
  [4] = {
    [0] = sym_if,
  },
  [5] = {
    [0] = sym_block,
  },
  [10] = {
    [1] = sym_block,
  },
  [15] = {
    [1] = sym_block,
  },
  [19] = {
    [2] = sym_block,
  },
  [21] = {
    [2] = sym_block,
  },
  [36] = {
    [2] = sym_block,
  },
  [43] = {
    [3] = sym_block,
  },
  [45] = {
    [3] = sym_block,
  },
  [48] = {
    [3] = sym_block,
  },
  [75] = {
    [2] = sym_block,
  },
  [77] = {
    [4] = sym_block,
  },
  [80] = {
    [4] = sym_block,
  },
  [83] = {
    [4] = sym_block,
  },
  [114] = {
    [2] = sym_block,
  },
  [117] = {
    [3] = sym_block,
  },
  [120] = {
    [5] = sym_block,
  },
  [156] = {
    [3] = sym_block,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_if, 2,
    sym_if,
    sym_if,
  sym_blockTr, 2,
    sym_blockTr,
    sym_block,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 15,
  [21] = 16,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 12,
  [32] = 32,
  [33] = 10,
  [34] = 13,
  [35] = 19,
  [36] = 14,
  [37] = 11,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 39,
  [49] = 49,
  [50] = 39,
  [51] = 39,
  [52] = 39,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 53,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 59,
  [63] = 60,
  [64] = 59,
  [65] = 59,
  [66] = 59,
  [67] = 60,
  [68] = 59,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 60,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 59,
  [114] = 60,
  [115] = 115,
  [116] = 59,
  [117] = 117,
  [118] = 59,
  [119] = 119,
  [120] = 120,
  [121] = 59,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 84,
  [130] = 130,
  [131] = 131,
  [132] = 90,
  [133] = 73,
  [134] = 79,
  [135] = 85,
  [136] = 89,
  [137] = 92,
  [138] = 93,
  [139] = 69,
  [140] = 86,
  [141] = 83,
  [142] = 81,
  [143] = 82,
  [144] = 87,
  [145] = 88,
  [146] = 91,
  [147] = 74,
  [148] = 70,
  [149] = 71,
  [150] = 72,
  [151] = 75,
  [152] = 76,
  [153] = 77,
  [154] = 78,
  [155] = 80,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 112,
  [227] = 108,
  [228] = 228,
  [229] = 109,
  [230] = 97,
  [231] = 95,
  [232] = 100,
  [233] = 96,
  [234] = 98,
  [235] = 99,
  [236] = 126,
  [237] = 101,
  [238] = 117,
  [239] = 119,
  [240] = 120,
  [241] = 122,
  [242] = 123,
  [243] = 124,
  [244] = 103,
  [245] = 104,
  [246] = 105,
  [247] = 106,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 259,
  [306] = 260,
  [307] = 261,
  [308] = 262,
  [309] = 309,
  [310] = 268,
  [311] = 269,
  [312] = 270,
  [313] = 271,
  [314] = 297,
  [315] = 283,
  [316] = 284,
  [317] = 285,
  [318] = 286,
  [319] = 287,
  [320] = 298,
  [321] = 299,
  [322] = 251,
  [323] = 252,
  [324] = 253,
  [325] = 254,
  [326] = 255,
  [327] = 256,
  [328] = 257,
  [329] = 215,
  [330] = 219,
  [331] = 195,
  [332] = 181,
  [333] = 182,
  [334] = 184,
  [335] = 185,
  [336] = 161,
  [337] = 162,
  [338] = 163,
  [339] = 164,
  [340] = 165,
  [341] = 166,
  [342] = 167,
  [343] = 258,
  [344] = 186,
  [345] = 196,
  [346] = 197,
  [347] = 198,
  [348] = 263,
  [349] = 199,
  [350] = 204,
  [351] = 216,
  [352] = 217,
  [353] = 222,
  [354] = 224,
  [355] = 160,
  [356] = 264,
  [357] = 265,
  [358] = 266,
  [359] = 267,
  [360] = 169,
  [361] = 170,
  [362] = 171,
  [363] = 172,
  [364] = 273,
  [365] = 274,
  [366] = 275,
  [367] = 276,
  [368] = 173,
  [369] = 174,
  [370] = 175,
  [371] = 176,
  [372] = 177,
  [373] = 159,
  [374] = 179,
  [375] = 277,
  [376] = 278,
  [377] = 279,
  [378] = 280,
  [379] = 281,
  [380] = 282,
  [381] = 187,
  [382] = 188,
  [383] = 189,
  [384] = 288,
  [385] = 289,
  [386] = 290,
  [387] = 291,
  [388] = 292,
  [389] = 293,
  [390] = 190,
  [391] = 191,
  [392] = 192,
  [393] = 193,
  [394] = 194,
  [395] = 294,
  [396] = 295,
  [397] = 296,
  [398] = 250,
  [399] = 200,
  [400] = 300,
  [401] = 301,
  [402] = 302,
  [403] = 303,
  [404] = 201,
  [405] = 202,
  [406] = 203,
  [407] = 304,
  [408] = 309,
  [409] = 205,
  [410] = 272,
  [411] = 411,
  [412] = 412,
  [413] = 215,
  [414] = 216,
  [415] = 219,
  [416] = 102,
  [417] = 214,
  [418] = 166,
  [419] = 167,
  [420] = 195,
  [421] = 181,
  [422] = 169,
  [423] = 170,
  [424] = 171,
  [425] = 172,
  [426] = 205,
  [427] = 182,
  [428] = 217,
  [429] = 107,
  [430] = 208,
  [431] = 201,
  [432] = 222,
  [433] = 173,
  [434] = 224,
  [435] = 160,
  [436] = 202,
  [437] = 203,
  [438] = 174,
  [439] = 175,
  [440] = 176,
  [441] = 441,
  [442] = 177,
  [443] = 159,
  [444] = 179,
  [445] = 194,
  [446] = 204,
  [447] = 115,
  [448] = 212,
  [449] = 183,
  [450] = 197,
  [451] = 125,
  [452] = 220,
  [453] = 221,
  [454] = 111,
  [455] = 198,
  [456] = 186,
  [457] = 184,
  [458] = 199,
  [459] = 185,
  [460] = 161,
  [461] = 162,
  [462] = 462,
  [463] = 163,
  [464] = 464,
  [465] = 164,
  [466] = 165,
  [467] = 200,
  [468] = 187,
  [469] = 188,
  [470] = 189,
  [471] = 190,
  [472] = 191,
  [473] = 192,
  [474] = 193,
  [475] = 196,
  [476] = 476,
  [477] = 228,
  [478] = 304,
  [479] = 296,
  [480] = 273,
  [481] = 462,
  [482] = 263,
  [483] = 274,
  [484] = 275,
  [485] = 276,
  [486] = 441,
  [487] = 309,
  [488] = 300,
  [489] = 301,
  [490] = 302,
  [491] = 303,
  [492] = 250,
  [493] = 277,
  [494] = 294,
  [495] = 279,
  [496] = 280,
  [497] = 281,
  [498] = 282,
  [499] = 258,
  [500] = 464,
  [501] = 264,
  [502] = 412,
  [503] = 265,
  [504] = 266,
  [505] = 267,
  [506] = 506,
  [507] = 411,
  [508] = 295,
  [509] = 288,
  [510] = 289,
  [511] = 290,
  [512] = 291,
  [513] = 292,
  [514] = 293,
  [515] = 278,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 411,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 412,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 506,
  [537] = 537,
  [538] = 538,
  [539] = 441,
  [540] = 462,
  [541] = 541,
  [542] = 542,
  [543] = 464,
  [544] = 544,
  [545] = 545,
  [546] = 59,
  [547] = 60,
  [548] = 60,
  [549] = 59,
  [550] = 550,
  [551] = 59,
  [552] = 552,
  [553] = 59,
  [554] = 59,
  [555] = 59,
  [556] = 60,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 566,
  [569] = 567,
  [570] = 218,
  [571] = 561,
  [572] = 565,
  [573] = 563,
  [574] = 560,
  [575] = 562,
  [576] = 560,
  [577] = 567,
  [578] = 567,
  [579] = 562,
  [580] = 564,
  [581] = 564,
  [582] = 561,
  [583] = 180,
  [584] = 564,
  [585] = 565,
  [586] = 180,
  [587] = 561,
  [588] = 563,
  [589] = 218,
  [590] = 565,
  [591] = 563,
  [592] = 560,
  [593] = 562,
  [594] = 566,
  [595] = 566,
  [596] = 596,
  [597] = 597,
  [598] = 597,
  [599] = 599,
  [600] = 600,
  [601] = 599,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 606,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 607,
  [618] = 616,
  [619] = 612,
  [620] = 608,
  [621] = 616,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 249,
  [626] = 624,
  [627] = 248,
  [628] = 624,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 599,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 561,
  [644] = 564,
  [645] = 565,
  [646] = 563,
  [647] = 560,
  [648] = 562,
  [649] = 566,
  [650] = 567,
  [651] = 564,
  [652] = 600,
  [653] = 218,
  [654] = 565,
  [655] = 560,
  [656] = 180,
  [657] = 218,
  [658] = 563,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 566,
  [663] = 663,
  [664] = 567,
  [665] = 665,
  [666] = 666,
  [667] = 562,
  [668] = 660,
  [669] = 599,
  [670] = 604,
  [671] = 180,
  [672] = 561,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 476,
  [679] = 180,
  [680] = 680,
  [681] = 218,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 561,
  [687] = 565,
  [688] = 563,
  [689] = 689,
  [690] = 560,
  [691] = 562,
  [692] = 566,
  [693] = 567,
  [694] = 564,
  [695] = 685,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 607,
  [701] = 612,
  [702] = 608,
  [703] = 699,
  [704] = 685,
  [705] = 705,
  [706] = 676,
  [707] = 685,
  [708] = 676,
  [709] = 685,
  [710] = 676,
  [711] = 685,
  [712] = 676,
  [713] = 685,
  [714] = 676,
  [715] = 683,
  [716] = 716,
  [717] = 717,
  [718] = 716,
  [719] = 683,
  [720] = 716,
  [721] = 677,
  [722] = 676,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 723,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 723,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 604,
  [754] = 748,
  [755] = 723,
  [756] = 531,
  [757] = 748,
  [758] = 723,
  [759] = 748,
  [760] = 723,
  [761] = 748,
  [762] = 599,
  [763] = 748,
  [764] = 723,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 746,
  [769] = 748,
  [770] = 737,
  [771] = 771,
  [772] = 600,
  [773] = 746,
  [774] = 737,
  [775] = 775,
  [776] = 534,
  [777] = 533,
  [778] = 566,
  [779] = 542,
  [780] = 567,
  [781] = 518,
  [782] = 782,
  [783] = 564,
  [784] = 516,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 782,
  [789] = 789,
  [790] = 790,
  [791] = 521,
  [792] = 792,
  [793] = 793,
  [794] = 607,
  [795] = 612,
  [796] = 530,
  [797] = 532,
  [798] = 608,
  [799] = 541,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 782,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 818,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 824,
  [825] = 782,
  [826] = 826,
  [827] = 827,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 782,
  [832] = 538,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 249,
  [844] = 844,
  [845] = 506,
  [846] = 782,
  [847] = 248,
  [848] = 809,
  [849] = 849,
  [850] = 782,
  [851] = 249,
  [852] = 803,
  [853] = 853,
  [854] = 841,
  [855] = 855,
  [856] = 523,
  [857] = 782,
  [858] = 519,
  [859] = 248,
  [860] = 841,
  [861] = 524,
  [862] = 561,
  [863] = 544,
  [864] = 841,
  [865] = 545,
  [866] = 517,
  [867] = 841,
  [868] = 782,
  [869] = 537,
  [870] = 841,
  [871] = 525,
  [872] = 565,
  [873] = 841,
  [874] = 841,
  [875] = 522,
  [876] = 563,
  [877] = 529,
  [878] = 878,
  [879] = 879,
  [880] = 528,
  [881] = 560,
  [882] = 526,
  [883] = 562,
  [884] = 535,
  [885] = 782,
  [886] = 607,
  [887] = 608,
  [888] = 888,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 893,
  [894] = 894,
  [895] = 892,
  [896] = 896,
  [897] = 897,
  [898] = 890,
  [899] = 899,
  [900] = 890,
  [901] = 901,
  [902] = 902,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 889,
  [907] = 902,
  [908] = 903,
  [909] = 909,
  [910] = 890,
  [911] = 904,
  [912] = 612,
  [913] = 913,
  [914] = 914,
  [915] = 902,
  [916] = 903,
  [917] = 904,
  [918] = 905,
  [919] = 889,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 926,
  [927] = 905,
  [928] = 890,
  [929] = 929,
  [930] = 930,
  [931] = 889,
  [932] = 902,
  [933] = 903,
  [934] = 904,
  [935] = 905,
  [936] = 890,
  [937] = 889,
  [938] = 902,
  [939] = 903,
  [940] = 904,
  [941] = 896,
  [942] = 905,
  [943] = 890,
  [944] = 902,
  [945] = 903,
  [946] = 904,
  [947] = 905,
  [948] = 889,
  [949] = 913,
  [950] = 889,
  [951] = 951,
  [952] = 952,
  [953] = 905,
  [954] = 890,
  [955] = 903,
  [956] = 904,
  [957] = 957,
  [958] = 958,
  [959] = 892,
  [960] = 960,
  [961] = 922,
  [962] = 913,
  [963] = 890,
  [964] = 902,
  [965] = 903,
  [966] = 904,
  [967] = 905,
  [968] = 889,
  [969] = 890,
  [970] = 903,
  [971] = 904,
  [972] = 972,
  [973] = 892,
  [974] = 888,
  [975] = 975,
  [976] = 892,
  [977] = 922,
  [978] = 892,
  [979] = 922,
  [980] = 980,
  [981] = 894,
  [982] = 897,
  [983] = 901,
  [984] = 984,
  [985] = 922,
  [986] = 986,
  [987] = 987,
  [988] = 988,
  [989] = 989,
  [990] = 990,
  [991] = 925,
  [992] = 926,
  [993] = 929,
  [994] = 984,
  [995] = 995,
  [996] = 894,
  [997] = 902,
  [998] = 899,
  [999] = 999,
  [1000] = 894,
  [1001] = 987,
  [1002] = 894,
  [1003] = 986,
  [1004] = 988,
  [1005] = 903,
  [1006] = 894,
  [1007] = 922,
  [1008] = 894,
  [1009] = 1009,
  [1010] = 1010,
  [1011] = 904,
  [1012] = 990,
  [1013] = 1013,
  [1014] = 995,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 641,
  [1018] = 476,
  [1019] = 640,
  [1020] = 476,
  [1021] = 1021,
  [1022] = 1022,
  [1023] = 531,
  [1024] = 640,
  [1025] = 599,
  [1026] = 604,
  [1027] = 604,
  [1028] = 531,
  [1029] = 599,
  [1030] = 1021,
  [1031] = 1031,
  [1032] = 1022,
  [1033] = 1033,
  [1034] = 600,
  [1035] = 1035,
  [1036] = 600,
  [1037] = 1031,
  [1038] = 1022,
  [1039] = 1022,
  [1040] = 1040,
  [1041] = 1022,
  [1042] = 1022,
  [1043] = 1022,
  [1044] = 1022,
  [1045] = 1045,
  [1046] = 1040,
  [1047] = 641,
  [1048] = 1048,
  [1049] = 1035,
  [1050] = 519,
  [1051] = 544,
  [1052] = 523,
  [1053] = 519,
  [1054] = 545,
  [1055] = 524,
  [1056] = 506,
  [1057] = 544,
  [1058] = 545,
  [1059] = 517,
  [1060] = 517,
  [1061] = 1061,
  [1062] = 521,
  [1063] = 537,
  [1064] = 525,
  [1065] = 522,
  [1066] = 537,
  [1067] = 525,
  [1068] = 529,
  [1069] = 522,
  [1070] = 529,
  [1071] = 607,
  [1072] = 612,
  [1073] = 530,
  [1074] = 532,
  [1075] = 607,
  [1076] = 534,
  [1077] = 1077,
  [1078] = 608,
  [1079] = 612,
  [1080] = 530,
  [1081] = 1081,
  [1082] = 532,
  [1083] = 534,
  [1084] = 608,
  [1085] = 523,
  [1086] = 541,
  [1087] = 528,
  [1088] = 524,
  [1089] = 506,
  [1090] = 535,
  [1091] = 538,
  [1092] = 533,
  [1093] = 542,
  [1094] = 528,
  [1095] = 526,
  [1096] = 518,
  [1097] = 535,
  [1098] = 538,
  [1099] = 533,
  [1100] = 516,
  [1101] = 1101,
  [1102] = 1102,
  [1103] = 542,
  [1104] = 1104,
  [1105] = 518,
  [1106] = 521,
  [1107] = 516,
  [1108] = 541,
  [1109] = 526,
  [1110] = 1110,
  [1111] = 1110,
  [1112] = 1110,
  [1113] = 1110,
  [1114] = 1114,
  [1115] = 1110,
  [1116] = 1116,
  [1117] = 1110,
  [1118] = 1118,
  [1119] = 1033,
  [1120] = 1110,
  [1121] = 1110,
  [1122] = 1122,
  [1123] = 1123,
  [1124] = 1124,
  [1125] = 1125,
  [1126] = 1125,
  [1127] = 1127,
  [1128] = 1128,
  [1129] = 1129,
  [1130] = 1124,
  [1131] = 1131,
  [1132] = 1127,
  [1133] = 1133,
  [1134] = 1131,
  [1135] = 1125,
  [1136] = 1127,
  [1137] = 1128,
  [1138] = 1129,
  [1139] = 1124,
  [1140] = 1129,
  [1141] = 1131,
  [1142] = 1142,
  [1143] = 1125,
  [1144] = 1127,
  [1145] = 1128,
  [1146] = 1129,
  [1147] = 1124,
  [1148] = 1131,
  [1149] = 1128,
  [1150] = 1125,
  [1151] = 1128,
  [1152] = 1129,
  [1153] = 1124,
  [1154] = 1131,
  [1155] = 1125,
  [1156] = 1127,
  [1157] = 1128,
  [1158] = 1129,
  [1159] = 1124,
  [1160] = 1131,
  [1161] = 1125,
  [1162] = 1127,
  [1163] = 1128,
  [1164] = 1129,
  [1165] = 1124,
  [1166] = 1131,
  [1167] = 1125,
  [1168] = 1127,
  [1169] = 1128,
  [1170] = 1129,
  [1171] = 1124,
  [1172] = 1131,
  [1173] = 1173,
  [1174] = 1174,
  [1175] = 1175,
  [1176] = 1122,
  [1177] = 1177,
  [1178] = 1127,
  [1179] = 1179,
  [1180] = 1180,
  [1181] = 1181,
  [1182] = 1182,
  [1183] = 1183,
  [1184] = 1184,
  [1185] = 1185,
  [1186] = 1186,
  [1187] = 1187,
  [1188] = 1188,
  [1189] = 248,
  [1190] = 641,
  [1191] = 1191,
  [1192] = 640,
  [1193] = 1193,
  [1194] = 1194,
  [1195] = 1195,
  [1196] = 249,
  [1197] = 1197,
  [1198] = 1198,
  [1199] = 1199,
  [1200] = 1200,
  [1201] = 1201,
  [1202] = 1202,
  [1203] = 249,
  [1204] = 248,
  [1205] = 249,
  [1206] = 1206,
  [1207] = 1188,
  [1208] = 248,
  [1209] = 641,
  [1210] = 1210,
  [1211] = 1211,
  [1212] = 1212,
  [1213] = 1213,
  [1214] = 1214,
  [1215] = 1202,
  [1216] = 1200,
  [1217] = 1217,
  [1218] = 1218,
  [1219] = 640,
  [1220] = 1187,
  [1221] = 1221,
  [1222] = 476,
  [1223] = 1223,
  [1224] = 476,
  [1225] = 1225,
  [1226] = 1226,
  [1227] = 1227,
  [1228] = 1228,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1231,
  [1232] = 1232,
  [1233] = 1233,
  [1234] = 1234,
  [1235] = 1217,
  [1236] = 476,
  [1237] = 1237,
  [1238] = 600,
  [1239] = 1237,
  [1240] = 1218,
  [1241] = 1211,
  [1242] = 600,
  [1243] = 1212,
  [1244] = 1244,
  [1245] = 531,
  [1246] = 604,
  [1247] = 604,
  [1248] = 531,
  [1249] = 1214,
  [1250] = 599,
  [1251] = 1251,
  [1252] = 1251,
  [1253] = 1237,
  [1254] = 599,
  [1255] = 1251,
  [1256] = 524,
  [1257] = 599,
  [1258] = 1230,
  [1259] = 1225,
  [1260] = 612,
  [1261] = 541,
  [1262] = 542,
  [1263] = 1232,
  [1264] = 533,
  [1265] = 1234,
  [1266] = 526,
  [1267] = 607,
  [1268] = 544,
  [1269] = 544,
  [1270] = 535,
  [1271] = 506,
  [1272] = 1272,
  [1273] = 537,
  [1274] = 530,
  [1275] = 525,
  [1276] = 545,
  [1277] = 1272,
  [1278] = 1278,
  [1279] = 542,
  [1280] = 604,
  [1281] = 1281,
  [1282] = 612,
  [1283] = 1283,
  [1284] = 541,
  [1285] = 516,
  [1286] = 1286,
  [1287] = 530,
  [1288] = 545,
  [1289] = 523,
  [1290] = 1290,
  [1291] = 517,
  [1292] = 532,
  [1293] = 608,
  [1294] = 519,
  [1295] = 532,
  [1296] = 1278,
  [1297] = 534,
  [1298] = 538,
  [1299] = 523,
  [1300] = 529,
  [1301] = 608,
  [1302] = 1302,
  [1303] = 522,
  [1304] = 518,
  [1305] = 1305,
  [1306] = 518,
  [1307] = 1226,
  [1308] = 1308,
  [1309] = 535,
  [1310] = 528,
  [1311] = 537,
  [1312] = 522,
  [1313] = 538,
  [1314] = 516,
  [1315] = 1283,
  [1316] = 521,
  [1317] = 534,
  [1318] = 533,
  [1319] = 521,
  [1320] = 526,
  [1321] = 524,
  [1322] = 517,
  [1323] = 519,
  [1324] = 529,
  [1325] = 531,
  [1326] = 525,
  [1327] = 528,
  [1328] = 607,
  [1329] = 1329,
  [1330] = 600,
  [1331] = 1331,
  [1332] = 1332,
  [1333] = 1333,
  [1334] = 1334,
  [1335] = 1335,
  [1336] = 1336,
  [1337] = 1337,
  [1338] = 1338,
  [1339] = 1339,
  [1340] = 1340,
  [1341] = 1341,
  [1342] = 1342,
  [1343] = 1335,
  [1344] = 1336,
  [1345] = 1337,
  [1346] = 1346,
  [1347] = 1347,
  [1348] = 1348,
  [1349] = 1349,
  [1350] = 1350,
  [1351] = 1351,
  [1352] = 1352,
  [1353] = 1353,
  [1354] = 1347,
  [1355] = 1355,
  [1356] = 1356,
  [1357] = 1357,
  [1358] = 1290,
  [1359] = 1359,
  [1360] = 1360,
  [1361] = 1361,
  [1362] = 1286,
  [1363] = 1363,
  [1364] = 1364,
  [1365] = 1365,
  [1366] = 1366,
  [1367] = 1367,
  [1368] = 1368,
  [1369] = 1350,
  [1370] = 1332,
  [1371] = 1371,
  [1372] = 1372,
  [1373] = 607,
  [1374] = 612,
  [1375] = 530,
  [1376] = 532,
  [1377] = 608,
  [1378] = 1378,
  [1379] = 1379,
  [1380] = 1380,
  [1381] = 1381,
  [1382] = 1382,
  [1383] = 1281,
  [1384] = 1353,
  [1385] = 523,
  [1386] = 519,
  [1387] = 524,
  [1388] = 506,
  [1389] = 544,
  [1390] = 545,
  [1391] = 1391,
  [1392] = 521,
  [1393] = 537,
  [1394] = 525,
  [1395] = 522,
  [1396] = 529,
  [1397] = 534,
  [1398] = 541,
  [1399] = 528,
  [1400] = 526,
  [1401] = 535,
  [1402] = 538,
  [1403] = 533,
  [1404] = 542,
  [1405] = 518,
  [1406] = 516,
  [1407] = 1407,
  [1408] = 1408,
  [1409] = 1409,
  [1410] = 1410,
  [1411] = 1411,
  [1412] = 1335,
  [1413] = 1336,
  [1414] = 1337,
  [1415] = 1415,
  [1416] = 1347,
  [1417] = 1350,
  [1418] = 1353,
  [1419] = 1331,
  [1420] = 1355,
  [1421] = 1421,
  [1422] = 1422,
  [1423] = 1423,
  [1424] = 1331,
  [1425] = 1411,
  [1426] = 1302,
  [1427] = 1409,
  [1428] = 1340,
  [1429] = 1429,
  [1430] = 1367,
  [1431] = 1368,
  [1432] = 1378,
  [1433] = 1379,
  [1434] = 1380,
  [1435] = 1338,
  [1436] = 1355,
  [1437] = 1341,
  [1438] = 1342,
  [1439] = 1346,
  [1440] = 1359,
  [1441] = 1365,
  [1442] = 1381,
  [1443] = 1382,
  [1444] = 1422,
  [1445] = 1423,
  [1446] = 1429,
  [1447] = 1340,
  [1448] = 1378,
  [1449] = 1379,
  [1450] = 1380,
  [1451] = 1341,
  [1452] = 1342,
  [1453] = 1346,
  [1454] = 1359,
  [1455] = 1421,
  [1456] = 517,
  [1457] = 1457,
  [1458] = 1458,
  [1459] = 1459,
  [1460] = 1460,
  [1461] = 1461,
  [1462] = 1461,
  [1463] = 1463,
  [1464] = 1464,
  [1465] = 1459,
  [1466] = 1463,
  [1467] = 1464,
  [1468] = 1457,
  [1469] = 1469,
  [1470] = 1470,
  [1471] = 1471,
  [1472] = 1472,
  [1473] = 1473,
  [1474] = 1469,
  [1475] = 1475,
  [1476] = 1476,
  [1477] = 1477,
  [1478] = 1478,
  [1479] = 1479,
  [1480] = 1479,
  [1481] = 1481,
  [1482] = 1482,
  [1483] = 1483,
  [1484] = 1484,
  [1485] = 1485,
  [1486] = 1486,
  [1487] = 1487,
  [1488] = 1488,
  [1489] = 1489,
  [1490] = 1488,
  [1491] = 1491,
  [1492] = 1492,
  [1493] = 1493,
  [1494] = 1494,
  [1495] = 1495,
  [1496] = 1496,
  [1497] = 1497,
  [1498] = 640,
  [1499] = 1499,
  [1500] = 1488,
  [1501] = 1501,
  [1502] = 1499,
  [1503] = 1488,
  [1504] = 1499,
  [1505] = 1505,
  [1506] = 1506,
  [1507] = 1507,
  [1508] = 1508,
  [1509] = 1499,
  [1510] = 1488,
  [1511] = 1499,
  [1512] = 1488,
  [1513] = 1513,
  [1514] = 1514,
  [1515] = 1515,
  [1516] = 1499,
  [1517] = 1517,
  [1518] = 1488,
  [1519] = 641,
  [1520] = 1520,
  [1521] = 1521,
  [1522] = 1522,
  [1523] = 1523,
  [1524] = 1523,
  [1525] = 1497,
  [1526] = 1520,
  [1527] = 1527,
  [1528] = 1528,
  [1529] = 1529,
  [1530] = 1499,
  [1531] = 1531,
  [1532] = 1532,
  [1533] = 1533,
  [1534] = 1497,
  [1535] = 1535,
  [1536] = 1520,
  [1537] = 1523,
  [1538] = 1538,
  [1539] = 1539,
  [1540] = 1540,
  [1541] = 1541,
  [1542] = 1542,
  [1543] = 1543,
  [1544] = 1544,
  [1545] = 1545,
  [1546] = 1540,
  [1547] = 1308,
  [1548] = 1548,
  [1549] = 1286,
  [1550] = 1544,
  [1551] = 1551,
  [1552] = 1551,
  [1553] = 1553,
  [1554] = 1305,
  [1555] = 1553,
  [1556] = 1556,
  [1557] = 608,
  [1558] = 1558,
  [1559] = 1308,
  [1560] = 1560,
  [1561] = 608,
  [1562] = 1558,
  [1563] = 1563,
  [1564] = 1305,
  [1565] = 1560,
  [1566] = 1560,
  [1567] = 1560,
  [1568] = 608,
  [1569] = 1569,
  [1570] = 1558,
  [1571] = 1571,
  [1572] = 1560,
  [1573] = 1573,
  [1574] = 608,
  [1575] = 1558,
  [1576] = 1560,
  [1577] = 1571,
  [1578] = 608,
  [1579] = 1558,
  [1580] = 1580,
  [1581] = 608,
  [1582] = 1558,
  [1583] = 608,
  [1584] = 1573,
  [1585] = 1585,
  [1586] = 1586,
  [1587] = 1587,
  [1588] = 1588,
  [1589] = 1589,
  [1590] = 1558,
  [1591] = 1591,
  [1592] = 1580,
  [1593] = 1593,
  [1594] = 1594,
  [1595] = 1482,
  [1596] = 1481,
  [1597] = 1597,
  [1598] = 1598,
  [1599] = 1599,
  [1600] = 1600,
  [1601] = 1601,
  [1602] = 1558,
  [1603] = 1597,
  [1604] = 1560,
  [1605] = 1605,
  [1606] = 1606,
  [1607] = 1606,
  [1608] = 1608,
  [1609] = 1606,
  [1610] = 1606,
  [1611] = 1606,
  [1612] = 1606,
  [1613] = 1606,
  [1614] = 1598,
  [1615] = 1606,
  [1616] = 1616,
  [1617] = 1617,
  [1618] = 1618,
  [1619] = 1619,
  [1620] = 1620,
  [1621] = 1621,
  [1622] = 1622,
  [1623] = 1623,
  [1624] = 1233,
  [1625] = 1625,
  [1626] = 1626,
  [1627] = 1627,
  [1628] = 1628,
  [1629] = 1629,
  [1630] = 1223,
  [1631] = 1631,
  [1632] = 1229,
  [1633] = 1633,
  [1634] = 1634,
  [1635] = 1635,
  [1636] = 1636,
  [1637] = 1637,
  [1638] = 1638,
  [1639] = 1639,
  [1640] = 1305,
  [1641] = 1308,
  [1642] = 1642,
  [1643] = 1308,
  [1644] = 1644,
  [1645] = 1645,
  [1646] = 1646,
  [1647] = 1305,
  [1648] = 1648,
  [1649] = 1649,
  [1650] = 1650,
  [1651] = 1651,
  [1652] = 1652,
  [1653] = 1653,
  [1654] = 1654,
  [1655] = 1655,
  [1656] = 1656,
  [1657] = 1657,
  [1658] = 1658,
  [1659] = 1659,
  [1660] = 1660,
  [1661] = 1661,
  [1662] = 1662,
  [1663] = 1663,
  [1664] = 1664,
  [1665] = 1665,
  [1666] = 1666,
  [1667] = 1667,
  [1668] = 1668,
  [1669] = 1669,
  [1670] = 1670,
  [1671] = 1671,
  [1672] = 1672,
  [1673] = 1673,
  [1674] = 1674,
  [1675] = 1675,
  [1676] = 1676,
  [1677] = 1677,
  [1678] = 1678,
  [1679] = 1679,
  [1680] = 1680,
  [1681] = 1681,
  [1682] = 1682,
  [1683] = 1683,
  [1684] = 1684,
  [1685] = 1685,
  [1686] = 1686,
  [1687] = 1687,
  [1688] = 1688,
  [1689] = 1689,
  [1690] = 1690,
  [1691] = 1691,
  [1692] = 1692,
  [1693] = 1693,
  [1694] = 1694,
  [1695] = 1695,
  [1696] = 1696,
  [1697] = 1697,
  [1698] = 1698,
  [1699] = 1699,
  [1700] = 1700,
  [1701] = 1701,
  [1702] = 1702,
  [1703] = 1703,
  [1704] = 1693,
  [1705] = 1694,
  [1706] = 1695,
  [1707] = 1703,
  [1708] = 1708,
  [1709] = 1709,
  [1710] = 1710,
  [1711] = 1711,
  [1712] = 1712,
  [1713] = 1713,
  [1714] = 1714,
  [1715] = 1715,
  [1716] = 1716,
  [1717] = 1717,
  [1718] = 1718,
  [1719] = 1719,
  [1720] = 1720,
  [1721] = 1721,
  [1722] = 1722,
  [1723] = 1723,
  [1724] = 1724,
  [1725] = 1725,
  [1726] = 1726,
  [1727] = 1696,
  [1728] = 1697,
  [1729] = 1698,
  [1730] = 1699,
  [1731] = 1731,
  [1732] = 1732,
  [1733] = 1733,
  [1734] = 1713,
  [1735] = 1735,
  [1736] = 1736,
  [1737] = 1737,
  [1738] = 1738,
  [1739] = 1739,
  [1740] = 1691,
  [1741] = 1741,
  [1742] = 1742,
  [1743] = 1702,
  [1744] = 1744,
  [1745] = 1714,
  [1746] = 1746,
  [1747] = 1747,
  [1748] = 1748,
  [1749] = 1700,
  [1750] = 1701,
  [1751] = 1751,
  [1752] = 1752,
  [1753] = 1753,
  [1754] = 1754,
  [1755] = 1755,
  [1756] = 1752,
  [1757] = 1755,
  [1758] = 1758,
  [1759] = 1759,
  [1760] = 1760,
  [1761] = 1761,
  [1762] = 1762,
  [1763] = 1754,
  [1764] = 1752,
  [1765] = 1765,
  [1766] = 1766,
  [1767] = 1767,
  [1768] = 1674,
  [1769] = 1769,
  [1770] = 1770,
  [1771] = 1771,
  [1772] = 1765,
  [1773] = 1773,
  [1774] = 1774,
  [1775] = 1754,
  [1776] = 1776,
  [1777] = 1777,
  [1778] = 1778,
  [1779] = 1765,
  [1780] = 1780,
  [1781] = 1781,
  [1782] = 1782,
  [1783] = 1783,
  [1784] = 1784,
  [1785] = 1671,
  [1786] = 1786,
  [1787] = 1787,
  [1788] = 1788,
  [1789] = 1789,
  [1790] = 1790,
  [1791] = 1791,
  [1792] = 1792,
  [1793] = 1793,
  [1794] = 1794,
  [1795] = 1795,
  [1796] = 1796,
  [1797] = 1797,
  [1798] = 1798,
  [1799] = 1799,
  [1800] = 1800,
  [1801] = 1801,
  [1802] = 1802,
  [1803] = 1803,
  [1804] = 1804,
  [1805] = 1792,
  [1806] = 1802,
  [1807] = 1807,
  [1808] = 1788,
  [1809] = 1809,
  [1810] = 1810,
  [1811] = 1811,
  [1812] = 1812,
  [1813] = 1793,
  [1814] = 1814,
  [1815] = 1797,
  [1816] = 1816,
  [1817] = 1792,
  [1818] = 1818,
  [1819] = 1810,
  [1820] = 1801,
  [1821] = 1790,
  [1822] = 1809,
  [1823] = 1823,
  [1824] = 1816,
  [1825] = 1790,
  [1826] = 1796,
  [1827] = 1802,
  [1828] = 1804,
  [1829] = 1807,
  [1830] = 1788,
  [1831] = 1811,
  [1832] = 1812,
  [1833] = 1814,
  [1834] = 1834,
  [1835] = 1797,
  [1836] = 1836,
  [1837] = 1816,
  [1838] = 1834,
  [1839] = 1839,
  [1840] = 1809,
  [1841] = 1802,
  [1842] = 1788,
  [1843] = 1788,
  [1844] = 1802,
  [1845] = 1788,
  [1846] = 1811,
  [1847] = 1802,
  [1848] = 1848,
  [1849] = 1788,
  [1850] = 1850,
  [1851] = 1802,
  [1852] = 1788,
  [1853] = 1802,
  [1854] = 1834,
  [1855] = 1796,
  [1856] = 1856,
  [1857] = 1812,
  [1858] = 1818,
  [1859] = 1804,
  [1860] = 1818,
  [1861] = 1861,
  [1862] = 1862,
  [1863] = 1863,
  [1864] = 557,
  [1865] = 1865,
  [1866] = 558,
  [1867] = 1865,
  [1868] = 1865,
  [1869] = 1869,
  [1870] = 1683,
  [1871] = 1865,
  [1872] = 1681,
  [1873] = 1873,
  [1874] = 1874,
  [1875] = 1865,
  [1876] = 1876,
  [1877] = 1865,
  [1878] = 1308,
  [1879] = 1879,
  [1880] = 1305,
  [1881] = 1865,
  [1882] = 1882,
  [1883] = 1883,
  [1884] = 1884,
  [1885] = 1885,
  [1886] = 1886,
  [1887] = 1887,
  [1888] = 1888,
  [1889] = 1889,
  [1890] = 1890,
  [1891] = 1891,
  [1892] = 1892,
  [1893] = 1893,
  [1894] = 1886,
  [1895] = 1885,
  [1896] = 1889,
  [1897] = 1884,
  [1898] = 1732,
  [1899] = 1899,
  [1900] = 1899,
  [1901] = 1674,
  [1902] = 1671,
  [1903] = 1903,
  [1904] = 1885,
  [1905] = 1885,
  [1906] = 1885,
  [1907] = 1885,
  [1908] = 559,
  [1909] = 1909,
  [1910] = 1910,
  [1911] = 1911,
  [1912] = 1887,
  [1913] = 1913,
  [1914] = 1914,
  [1915] = 1915,
  [1916] = 1916,
  [1917] = 1917,
  [1918] = 1918,
  [1919] = 1919,
  [1920] = 1920,
  [1921] = 1921,
  [1922] = 1922,
  [1923] = 1923,
  [1924] = 1924,
  [1925] = 1925,
  [1926] = 1926,
  [1927] = 1927,
  [1928] = 1928,
  [1929] = 1883,
  [1930] = 1903,
  [1931] = 1931,
  [1932] = 1932,
  [1933] = 1933,
  [1934] = 1934,
  [1935] = 1916,
  [1936] = 1936,
  [1937] = 1937,
  [1938] = 1938,
  [1939] = 1916,
  [1940] = 1940,
  [1941] = 1941,
  [1942] = 1925,
  [1943] = 1936,
  [1944] = 1944,
  [1945] = 1945,
  [1946] = 1925,
  [1947] = 1947,
  [1948] = 1948,
  [1949] = 1949,
  [1950] = 1184,
  [1951] = 1951,
  [1952] = 1952,
  [1953] = 1953,
  [1954] = 1683,
  [1955] = 1955,
  [1956] = 1681,
  [1957] = 1957,
  [1958] = 1958,
  [1959] = 1959,
  [1960] = 1960,
  [1961] = 1961,
  [1962] = 1962,
  [1963] = 1963,
  [1964] = 1964,
  [1965] = 1182,
  [1966] = 1966,
  [1967] = 1967,
  [1968] = 1964,
  [1969] = 1969,
  [1970] = 1183,
  [1971] = 1971,
  [1972] = 1952,
  [1973] = 1973,
  [1974] = 1967,
  [1975] = 1957,
  [1976] = 1976,
  [1977] = 1960,
  [1978] = 1969,
  [1979] = 1979,
  [1980] = 1964,
  [1981] = 1981,
  [1982] = 1955,
  [1983] = 1955,
  [1984] = 1981,
  [1985] = 1985,
  [1986] = 1953,
  [1987] = 1987,
  [1988] = 1952,
  [1989] = 1989,
  [1990] = 1948,
  [1991] = 1991,
  [1992] = 1992,
  [1993] = 1993,
  [1994] = 1994,
  [1995] = 1995,
  [1996] = 1996,
  [1997] = 1985,
  [1998] = 1998,
  [1999] = 1999,
  [2000] = 2000,
  [2001] = 1987,
  [2002] = 2002,
  [2003] = 2003,
  [2004] = 1992,
  [2005] = 2005,
  [2006] = 1953,
  [2007] = 1987,
  [2008] = 1992,
  [2009] = 2009,
  [2010] = 1963,
  [2011] = 1995,
  [2012] = 1969,
  [2013] = 1979,
  [2014] = 1967,
  [2015] = 1962,
  [2016] = 1957,
  [2017] = 2017,
  [2018] = 2003,
  [2019] = 2019,
  [2020] = 2020,
  [2021] = 2021,
  [2022] = 2022,
  [2023] = 2023,
  [2024] = 2024,
  [2025] = 2025,
  [2026] = 2026,
  [2027] = 2027,
  [2028] = 1649,
  [2029] = 2029,
  [2030] = 2030,
  [2031] = 2031,
  [2032] = 2032,
  [2033] = 2033,
  [2034] = 2034,
  [2035] = 2035,
  [2036] = 2036,
  [2037] = 2037,
  [2038] = 2038,
  [2039] = 2039,
  [2040] = 2040,
  [2041] = 2041,
  [2042] = 2019,
  [2043] = 2043,
  [2044] = 2044,
  [2045] = 2045,
  [2046] = 2046,
  [2047] = 2047,
  [2048] = 1973,
  [2049] = 2031,
  [2050] = 2033,
  [2051] = 2036,
  [2052] = 2038,
  [2053] = 2053,
  [2054] = 2053,
  [2055] = 1949,
  [2056] = 2056,
  [2057] = 2057,
  [2058] = 2058,
  [2059] = 2059,
  [2060] = 2060,
  [2061] = 1644,
  [2062] = 2062,
  [2063] = 2063,
  [2064] = 1732,
  [2065] = 2065,
  [2066] = 2029,
  [2067] = 2067,
  [2068] = 2068,
  [2069] = 2069,
  [2070] = 2070,
  [2071] = 1648,
  [2072] = 2034,
  [2073] = 2035,
  [2074] = 2074,
  [2075] = 2041,
  [2076] = 2019,
  [2077] = 2043,
  [2078] = 2044,
  [2079] = 2045,
  [2080] = 2031,
  [2081] = 2033,
  [2082] = 2036,
  [2083] = 2083,
  [2084] = 2053,
  [2085] = 2056,
  [2086] = 2057,
  [2087] = 2029,
  [2088] = 2088,
  [2089] = 2029,
  [2090] = 2090,
  [2091] = 2091,
  [2092] = 2092,
  [2093] = 2093,
  [2094] = 2029,
  [2095] = 2095,
  [2096] = 2040,
  [2097] = 2029,
  [2098] = 2098,
  [2099] = 2099,
  [2100] = 2100,
  [2101] = 2041,
  [2102] = 2102,
  [2103] = 2021,
  [2104] = 1646,
  [2105] = 2091,
  [2106] = 2106,
  [2107] = 2107,
  [2108] = 2070,
  [2109] = 2109,
  [2110] = 2110,
  [2111] = 2111,
  [2112] = 2093,
  [2113] = 2113,
  [2114] = 2114,
  [2115] = 2115,
  [2116] = 2046,
  [2117] = 2056,
  [2118] = 2118,
  [2119] = 2119,
  [2120] = 2057,
  [2121] = 2034,
  [2122] = 2122,
  [2123] = 2035,
  [2124] = 2124,
  [2125] = 1645,
  [2126] = 2126,
  [2127] = 2127,
  [2128] = 2128,
  [2129] = 2129,
  [2130] = 2130,
  [2131] = 2131,
  [2132] = 2043,
  [2133] = 2133,
  [2134] = 2067,
  [2135] = 2068,
  [2136] = 2044,
  [2137] = 2130,
  [2138] = 2045,
  [2139] = 2139,
  [2140] = 2029,
  [2141] = 2038,
  [2142] = 2142,
  [2143] = 2143,
  [2144] = 2144,
  [2145] = 2145,
  [2146] = 2146,
  [2147] = 2147,
  [2148] = 2148,
  [2149] = 2149,
  [2150] = 2150,
  [2151] = 2151,
  [2152] = 2152,
  [2153] = 2153,
  [2154] = 2154,
  [2155] = 2155,
  [2156] = 2156,
  [2157] = 1654,
  [2158] = 1655,
  [2159] = 2159,
  [2160] = 1656,
  [2161] = 2161,
  [2162] = 1657,
  [2163] = 1650,
  [2164] = 2164,
  [2165] = 1658,
  [2166] = 1666,
  [2167] = 1667,
  [2168] = 2168,
  [2169] = 2169,
  [2170] = 1668,
  [2171] = 1669,
  [2172] = 2172,
  [2173] = 2173,
  [2174] = 2174,
  [2175] = 2175,
  [2176] = 1664,
  [2177] = 1670,
  [2178] = 1659,
  [2179] = 2179,
  [2180] = 2180,
  [2181] = 2181,
  [2182] = 2182,
  [2183] = 2183,
  [2184] = 2184,
  [2185] = 2185,
  [2186] = 2186,
  [2187] = 2187,
  [2188] = 2188,
  [2189] = 1660,
  [2190] = 2190,
  [2191] = 2191,
  [2192] = 2192,
  [2193] = 2193,
  [2194] = 2194,
  [2195] = 2195,
  [2196] = 2196,
  [2197] = 2197,
  [2198] = 2198,
  [2199] = 2199,
  [2200] = 2200,
  [2201] = 2183,
  [2202] = 1665,
  [2203] = 2203,
  [2204] = 2204,
  [2205] = 2186,
  [2206] = 2206,
  [2207] = 2207,
  [2208] = 2208,
  [2209] = 2147,
  [2210] = 2210,
  [2211] = 2183,
  [2212] = 2212,
  [2213] = 2186,
  [2214] = 2183,
  [2215] = 2215,
  [2216] = 2216,
  [2217] = 2217,
  [2218] = 2183,
  [2219] = 2219,
  [2220] = 2220,
  [2221] = 2186,
  [2222] = 2222,
  [2223] = 2223,
  [2224] = 2224,
  [2225] = 2225,
  [2226] = 2226,
  [2227] = 2183,
  [2228] = 2183,
  [2229] = 2229,
  [2230] = 2230,
  [2231] = 2143,
  [2232] = 2186,
  [2233] = 2233,
  [2234] = 2234,
  [2235] = 2235,
  [2236] = 2150,
  [2237] = 1651,
  [2238] = 2238,
  [2239] = 2239,
  [2240] = 1652,
  [2241] = 2241,
  [2242] = 2242,
  [2243] = 2243,
  [2244] = 2244,
  [2245] = 2186,
  [2246] = 2246,
  [2247] = 2247,
  [2248] = 2248,
  [2249] = 2192,
  [2250] = 2250,
  [2251] = 2217,
  [2252] = 2238,
  [2253] = 2253,
  [2254] = 2242,
  [2255] = 2255,
  [2256] = 2256,
  [2257] = 2257,
  [2258] = 2150,
  [2259] = 2161,
  [2260] = 2260,
  [2261] = 2151,
  [2262] = 2262,
  [2263] = 2216,
  [2264] = 2220,
  [2265] = 2265,
  [2266] = 2266,
  [2267] = 2267,
  [2268] = 2155,
  [2269] = 2149,
  [2270] = 2226,
  [2271] = 2271,
  [2272] = 2186,
  [2273] = 2273,
  [2274] = 2274,
  [2275] = 2275,
  [2276] = 2276,
  [2277] = 2198,
  [2278] = 2278,
  [2279] = 2279,
  [2280] = 2280,
  [2281] = 2281,
  [2282] = 1662,
  [2283] = 2266,
  [2284] = 2262,
  [2285] = 2285,
  [2286] = 2286,
  [2287] = 2149,
  [2288] = 2288,
  [2289] = 1663,
  [2290] = 1677,
  [2291] = 2291,
  [2292] = 2262,
  [2293] = 2293,
  [2294] = 2294,
  [2295] = 2295,
  [2296] = 2296,
  [2297] = 2297,
  [2298] = 2274,
  [2299] = 2299,
  [2300] = 2300,
  [2301] = 2301,
  [2302] = 2246,
  [2303] = 2281,
  [2304] = 2146,
  [2305] = 2305,
  [2306] = 2306,
  [2307] = 2307,
  [2308] = 2192,
  [2309] = 2142,
  [2310] = 2210,
  [2311] = 2271,
  [2312] = 2312,
  [2313] = 2151,
  [2314] = 2266,
  [2315] = 2315,
  [2316] = 2316,
  [2317] = 2226,
  [2318] = 2318,
  [2319] = 2273,
  [2320] = 2273,
  [2321] = 2142,
  [2322] = 1672,
  [2323] = 2271,
  [2324] = 2324,
  [2325] = 2325,
  [2326] = 1673,
  [2327] = 2279,
  [2328] = 2300,
  [2329] = 2294,
  [2330] = 2330,
  [2331] = 1653,
  [2332] = 2332,
  [2333] = 2333,
  [2334] = 2334,
  [2335] = 2335,
  [2336] = 2336,
  [2337] = 2337,
  [2338] = 2338,
  [2339] = 2339,
  [2340] = 2340,
  [2341] = 2341,
  [2342] = 2342,
  [2343] = 2343,
  [2344] = 2344,
  [2345] = 2345,
  [2346] = 2346,
  [2347] = 2347,
  [2348] = 2348,
  [2349] = 2349,
  [2350] = 2350,
  [2351] = 2351,
  [2352] = 2352,
  [2353] = 2353,
  [2354] = 2354,
  [2355] = 2355,
  [2356] = 2356,
  [2357] = 2357,
  [2358] = 2358,
  [2359] = 2359,
  [2360] = 2360,
  [2361] = 2361,
  [2362] = 2362,
  [2363] = 2353,
  [2364] = 2345,
  [2365] = 2365,
  [2366] = 2366,
  [2367] = 2367,
  [2368] = 2368,
  [2369] = 2369,
  [2370] = 2370,
  [2371] = 2347,
  [2372] = 2372,
  [2373] = 2373,
  [2374] = 2374,
  [2375] = 2375,
  [2376] = 2376,
  [2377] = 2377,
  [2378] = 2342,
  [2379] = 2379,
  [2380] = 2380,
  [2381] = 2381,
  [2382] = 2382,
  [2383] = 2383,
  [2384] = 2336,
  [2385] = 2385,
  [2386] = 2338,
  [2387] = 2387,
  [2388] = 2388,
  [2389] = 2389,
  [2390] = 2353,
  [2391] = 2391,
  [2392] = 2392,
  [2393] = 2393,
  [2394] = 2394,
  [2395] = 2395,
  [2396] = 2396,
  [2397] = 2397,
  [2398] = 2347,
  [2399] = 2399,
  [2400] = 2400,
  [2401] = 2401,
  [2402] = 2402,
  [2403] = 2376,
  [2404] = 2377,
  [2405] = 2405,
  [2406] = 2406,
  [2407] = 2407,
  [2408] = 2342,
  [2409] = 2409,
  [2410] = 2343,
  [2411] = 2411,
  [2412] = 2344,
  [2413] = 2413,
  [2414] = 2345,
  [2415] = 2353,
  [2416] = 2416,
  [2417] = 2417,
  [2418] = 2346,
  [2419] = 2419,
  [2420] = 2420,
  [2421] = 2421,
  [2422] = 2422,
  [2423] = 2347,
  [2424] = 2424,
  [2425] = 2425,
  [2426] = 2426,
  [2427] = 2427,
  [2428] = 2376,
  [2429] = 2377,
  [2430] = 2346,
  [2431] = 2431,
  [2432] = 2432,
  [2433] = 2431,
  [2434] = 2434,
  [2435] = 2435,
  [2436] = 2436,
  [2437] = 2437,
  [2438] = 2438,
  [2439] = 2439,
  [2440] = 2440,
  [2441] = 2441,
  [2442] = 2442,
  [2443] = 2443,
  [2444] = 2444,
  [2445] = 2445,
  [2446] = 2347,
  [2447] = 2447,
  [2448] = 2448,
  [2449] = 2434,
  [2450] = 2450,
  [2451] = 2376,
  [2452] = 2377,
  [2453] = 2453,
  [2454] = 2454,
  [2455] = 2455,
  [2456] = 2440,
  [2457] = 2457,
  [2458] = 2458,
  [2459] = 2348,
  [2460] = 2460,
  [2461] = 2461,
  [2462] = 2349,
  [2463] = 2463,
  [2464] = 2464,
  [2465] = 2465,
  [2466] = 2444,
  [2467] = 2350,
  [2468] = 2468,
  [2469] = 2352,
  [2470] = 2343,
  [2471] = 2354,
  [2472] = 2472,
  [2473] = 2473,
  [2474] = 2355,
  [2475] = 2475,
  [2476] = 2476,
  [2477] = 2477,
  [2478] = 2478,
  [2479] = 2357,
  [2480] = 2480,
  [2481] = 2481,
  [2482] = 2482,
  [2483] = 2483,
  [2484] = 2484,
  [2485] = 2485,
  [2486] = 2353,
  [2487] = 2487,
  [2488] = 2488,
  [2489] = 2489,
  [2490] = 2490,
  [2491] = 2376,
  [2492] = 2492,
  [2493] = 2493,
  [2494] = 2494,
  [2495] = 2495,
  [2496] = 2496,
  [2497] = 2497,
  [2498] = 2381,
  [2499] = 2499,
  [2500] = 2500,
  [2501] = 2501,
  [2502] = 2502,
  [2503] = 2356,
  [2504] = 2504,
  [2505] = 2357,
  [2506] = 2377,
  [2507] = 2365,
  [2508] = 2369,
  [2509] = 2509,
  [2510] = 2374,
  [2511] = 2509,
  [2512] = 2512,
  [2513] = 2513,
  [2514] = 2514,
  [2515] = 2515,
  [2516] = 2516,
  [2517] = 2517,
  [2518] = 2518,
  [2519] = 2347,
  [2520] = 2520,
  [2521] = 2521,
  [2522] = 2522,
  [2523] = 2523,
  [2524] = 2358,
  [2525] = 2361,
  [2526] = 2526,
  [2527] = 2527,
  [2528] = 2458,
  [2529] = 2529,
  [2530] = 2424,
  [2531] = 2531,
  [2532] = 2532,
  [2533] = 2533,
  [2534] = 2534,
  [2535] = 2425,
  [2536] = 2536,
  [2537] = 2537,
  [2538] = 2538,
  [2539] = 2333,
  [2540] = 2540,
  [2541] = 2541,
  [2542] = 2542,
  [2543] = 2427,
  [2544] = 2527,
  [2545] = 2545,
  [2546] = 2546,
  [2547] = 2341,
  [2548] = 2548,
  [2549] = 2540,
  [2550] = 2537,
  [2551] = 2551,
  [2552] = 2448,
  [2553] = 2553,
  [2554] = 2554,
  [2555] = 2555,
  [2556] = 2379,
  [2557] = 2557,
  [2558] = 2558,
  [2559] = 2559,
  [2560] = 2431,
  [2561] = 2561,
  [2562] = 2562,
  [2563] = 2348,
  [2564] = 2564,
  [2565] = 2565,
  [2566] = 2566,
  [2567] = 2483,
  [2568] = 2568,
  [2569] = 2484,
  [2570] = 2349,
  [2571] = 2571,
  [2572] = 2358,
  [2573] = 2350,
  [2574] = 2574,
  [2575] = 2382,
  [2576] = 2576,
  [2577] = 2577,
  [2578] = 2352,
  [2579] = 2564,
  [2580] = 2465,
  [2581] = 2341,
  [2582] = 2582,
  [2583] = 2583,
  [2584] = 2477,
  [2585] = 2354,
  [2586] = 2344,
  [2587] = 2587,
  [2588] = 2588,
  [2589] = 2589,
  [2590] = 2589,
  [2591] = 2515,
  [2592] = 2488,
  [2593] = 2356,
  [2594] = 2594,
  [2595] = 2595,
  [2596] = 2596,
  [2597] = 2336,
  [2598] = 2598,
  [2599] = 2355,
  [2600] = 2600,
  [2601] = 2601,
  [2602] = 2602,
  [2603] = 2353,
  [2604] = 2604,
  [2605] = 2605,
  [2606] = 2376,
  [2607] = 2607,
  [2608] = 2608,
  [2609] = 2377,
  [2610] = 2610,
  [2611] = 2611,
  [2612] = 2612,
  [2613] = 2613,
  [2614] = 2614,
  [2615] = 2615,
  [2616] = 2616,
  [2617] = 2617,
  [2618] = 2618,
  [2619] = 2548,
  [2620] = 2620,
  [2621] = 2621,
  [2622] = 2622,
  [2623] = 2623,
  [2624] = 2624,
  [2625] = 2514,
  [2626] = 2626,
  [2627] = 2627,
  [2628] = 2628,
  [2629] = 2629,
  [2630] = 2630,
  [2631] = 2631,
  [2632] = 2497,
  [2633] = 2633,
  [2634] = 2634,
  [2635] = 2337,
  [2636] = 2514,
  [2637] = 2637,
  [2638] = 2504,
  [2639] = 2610,
  [2640] = 2347,
  [2641] = 2641,
  [2642] = 2642,
  [2643] = 2643,
  [2644] = 2637,
  [2645] = 2645,
  [2646] = 2360,
  [2647] = 2647,
  [2648] = 2648,
  [2649] = 2376,
  [2650] = 2377,
  [2651] = 2558,
  [2652] = 2504,
  [2653] = 2653,
  [2654] = 2369,
  [2655] = 2559,
  [2656] = 2365,
  [2657] = 2657,
  [2658] = 2565,
  [2659] = 2659,
  [2660] = 2596,
  [2661] = 2661,
  [2662] = 2662,
  [2663] = 2359,
  [2664] = 2465,
  [2665] = 2518,
  [2666] = 2666,
  [2667] = 2667,
  [2668] = 2668,
  [2669] = 2395,
  [2670] = 2670,
  [2671] = 2515,
  [2672] = 2672,
  [2673] = 2613,
  [2674] = 2461,
  [2675] = 2624,
  [2676] = 2676,
  [2677] = 2677,
  [2678] = 2631,
  [2679] = 2496,
  [2680] = 2483,
  [2681] = 2681,
  [2682] = 2604,
  [2683] = 2559,
  [2684] = 2684,
  [2685] = 2338,
  [2686] = 2686,
  [2687] = 2558,
  [2688] = 2406,
  [2689] = 2689,
  [2690] = 2565,
  [2691] = 2484,
  [2692] = 2596,
  [2693] = 2518,
  [2694] = 2694,
  [2695] = 2695,
  [2696] = 2564,
  [2697] = 2485,
  [2698] = 2373,
  [2699] = 2589,
  [2700] = 2610,
  [2701] = 2366,
  [2702] = 2555,
  [2703] = 2703,
  [2704] = 2704,
  [2705] = 2372,
  [2706] = 2374,
  [2707] = 2375,
  [2708] = 2641,
  [2709] = 2624,
  [2710] = 2633,
  [2711] = 2370,
  [2712] = 2712,
  [2713] = 2713,
  [2714] = 2714,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '#', 60,
        '&', 50,
        '\'', 12,
        '(', 54,
        ')', 55,
        '*', 89,
        '+', 83,
        ',', 46,
        '-', 87,
        '.', 67,
        '/', 91,
        ':', 45,
        ';', 43,
        '<', 72,
        '=', 74,
        '>', 77,
        '@', 92,
        '[', 52,
        ']', 53,
        '^', 93,
        '{', 5,
        '$', 49,
        '%', 49,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 60,
        '$', 38,
        '&', 39,
        '\'', 12,
        '(', 54,
        '*', 88,
        '+', 82,
        ',', 46,
        '-', 86,
        '.', 70,
        '/', 90,
        ':', 44,
        '<', 73,
        '=', 74,
        '>', 77,
        '@', 92,
        '[', 52,
        '^', 93,
        '{', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 60,
        '$', 38,
        '&', 39,
        '\'', 12,
        '(', 54,
        '*', 88,
        '+', 82,
        ',', 46,
        '-', 86,
        '.', 69,
        '/', 90,
        ':', 44,
        '<', 73,
        '=', 74,
        '>', 77,
        '@', 92,
        '[', 52,
        ']', 53,
        '^', 93,
        '{', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 60,
        '&', 39,
        '\'', 12,
        '(', 54,
        ')', 55,
        '*', 89,
        '+', 83,
        ',', 46,
        '-', 87,
        '.', 68,
        '/', 91,
        ':', 45,
        ';', 43,
        '<', 73,
        '=', 74,
        '>', 77,
        '[', 52,
        ']', 53,
        '^', 93,
        '{', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 60,
        '&', 39,
        '\'', 12,
        '(', 54,
        '*', 88,
        '+', 80,
        ',', 46,
        '-', 84,
        '.', 67,
        '/', 90,
        '<', 73,
        '=', 74,
        '>', 77,
        '[', 52,
        '^', 93,
        '{', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '$', 38,
        '&', 39,
        '(', 14,
        ')', 55,
        '*', 19,
        '+', 20,
        ',', 46,
        '-', 21,
        '.', 67,
        '/', 18,
        ':', 45,
        ';', 43,
        '<', 71,
        '=', 74,
        '>', 76,
        '[', 52,
        ']', 53,
        '{', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '{') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == '{') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(103);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(102);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(56);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(58);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(57);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 39:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '#', 60,
        '$', 38,
        '&', 39,
        '\'', 12,
        '(', 54,
        ')', 55,
        '*', 89,
        '+', 81,
        ',', 46,
        '-', 85,
        '.', 70,
        '/', 91,
        ':', 45,
        ';', 43,
        '<', 73,
        '=', 74,
        '>', 77,
        '@', 92,
        '[', 52,
        ']', 53,
        '^', 93,
        '{', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '#', 60,
        '&', 39,
        '\'', 12,
        '(', 54,
        ')', 55,
        '*', 89,
        '+', 83,
        ',', 46,
        '-', 87,
        '.', 67,
        '/', 91,
        ':', 45,
        ';', 43,
        '<', 73,
        '=', 74,
        '>', 77,
        '[', 52,
        ']', 53,
        '^', 93,
        '{', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_asmBody_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_asmBody_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_asmBody_token2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_asmBody_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_asmBody_token3);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__literalString_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__literalInt_token1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__literalInt_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__literalInt_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__literalFloat_token1);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__literalFloat_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_kLt);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_kLt);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_kLt);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_kEq);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_kNeq);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_kGt);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_kGt);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_kLte);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_kGte);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_kAdd);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_kAdd);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '=') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_kAdd);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_kAdd);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_kSub);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_kSub);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '=') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_kSub);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_kSub);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_kMul);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_kMul);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_kFdiv);
      if (lookahead == '/') ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_kFdiv);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_kAt);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_kHat);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_kAssign);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_kAssignAdd);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_kAssignSub);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_kAssignMul);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_kAssignDiv);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__space);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_pp);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'a', 1,
        'B', 2,
        'b', 2,
        'C', 3,
        'c', 3,
        'D', 4,
        'd', 4,
        'E', 5,
        'e', 5,
        'F', 6,
        'f', 6,
        'G', 7,
        'g', 7,
        'H', 8,
        'h', 8,
        'I', 9,
        'i', 9,
        'L', 10,
        'l', 10,
        'M', 11,
        'm', 11,
        'N', 12,
        'n', 12,
        'O', 13,
        'o', 13,
        'P', 14,
        'p', 14,
        'R', 15,
        'r', 15,
        'S', 16,
        's', 16,
        'T', 17,
        't', 17,
        'U', 18,
        'u', 18,
        'V', 19,
        'v', 19,
        'W', 20,
        'w', 20,
        'X', 21,
        'x', 21,
      );
      END_STATE();
    case 1:
      ADVANCE_MAP(
        'B', 22,
        'b', 22,
        'L', 23,
        'l', 23,
        'N', 24,
        'n', 24,
        'R', 25,
        'r', 25,
        'S', 26,
        's', 26,
      );
      END_STATE();
    case 2:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'A', 28,
        'a', 28,
        'D', 29,
        'd', 29,
        'L', 30,
        'l', 30,
        'O', 31,
        'o', 31,
        'P', 32,
        'p', 32,
        'V', 33,
        'v', 33,
      );
      END_STATE();
    case 4:
      ADVANCE_MAP(
        'E', 34,
        'e', 34,
        'I', 35,
        'i', 35,
        'O', 36,
        'o', 36,
        'Y', 37,
        'y', 37,
      );
      END_STATE();
    case 5:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        'A', 41,
        'a', 41,
        'I', 42,
        'i', 42,
        'O', 43,
        'o', 43,
        'U', 44,
        'u', 44,
      );
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'F', 49,
        'f', 49,
        'M', 50,
        'm', 50,
        'N', 51,
        'n', 51,
        'O', 52,
        'o', 52,
        'S', 53,
        's', 53,
      );
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        'E', 57,
        'e', 57,
        'O', 58,
        'o', 58,
        'S', 59,
        's', 59,
        'W', 60,
        'w', 60,
      );
      END_STATE();
    case 12:
      ADVANCE_MAP(
        'A', 61,
        'a', 61,
        'E', 62,
        'e', 62,
        'I', 63,
        'i', 63,
        'O', 64,
        'o', 64,
      );
      END_STATE();
    case 13:
      ADVANCE_MAP(
        'B', 65,
        'b', 65,
        'F', 66,
        'f', 66,
        'N', 67,
        'n', 67,
        'P', 68,
        'p', 68,
        'R', 69,
        'r', 69,
        'U', 70,
        'u', 70,
        'V', 71,
        'v', 71,
      );
      END_STATE();
    case 14:
      ADVANCE_MAP(
        'A', 72,
        'a', 72,
        'L', 73,
        'l', 73,
        'R', 74,
        'r', 74,
        'U', 75,
        'u', 75,
      );
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        'A', 78,
        'a', 78,
        'E', 79,
        'e', 79,
        'H', 80,
        'h', 80,
        'O', 81,
        'o', 81,
        'P', 82,
        'p', 82,
        'T', 83,
        't', 83,
        'Y', 84,
        'y', 84,
      );
      END_STATE();
    case 17:
      ADVANCE_MAP(
        'H', 85,
        'h', 85,
        'O', 86,
        'o', 86,
        'R', 87,
        'r', 87,
        'Y', 88,
        'y', 88,
      );
      END_STATE();
    case 18:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 22:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_kAs);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      END_STATE();
    case 27:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        'F', 111,
        'f', 111,
        'L', 112,
        'l', 112,
        'P', 113,
        'p', 113,
        'S', 114,
        's', 114,
      );
      END_STATE();
    case 35:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_kDo);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 41:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 48:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_kIf);
      END_STATE();
    case 50:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_kIn);
      ADVANCE_MAP(
        'D', 135,
        'd', 135,
        'H', 136,
        'h', 136,
        'I', 137,
        'i', 137,
        'L', 138,
        'l', 138,
        'T', 139,
        't', 139,
      );
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_kIs);
      END_STATE();
    case 54:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 55:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 57:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 60:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 61:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 63:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 64:
      ADVANCE_MAP(
        'D', 151,
        'd', 151,
        'R', 152,
        'r', 152,
        'S', 153,
        's', 153,
        'T', 154,
        't', 154,
      );
      END_STATE();
    case 65:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(155);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_kOf);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_kOn);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_kOr);
      END_STATE();
    case 70:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        'A', 167,
        'a', 167,
        'C', 168,
        'c', 168,
        'F', 169,
        'f', 169,
        'G', 170,
        'g', 170,
        'I', 171,
        'i', 171,
        'P', 172,
        'p', 172,
        'Q', 173,
        'q', 173,
        'S', 174,
        's', 174,
      );
      END_STATE();
    case 78:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 81:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(181);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 83:
      ADVANCE_MAP(
        'A', 183,
        'a', 183,
        'D', 184,
        'd', 184,
        'O', 185,
        'o', 185,
        'R', 186,
        'r', 186,
      );
      END_STATE();
    case 84:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_kTo);
      END_STATE();
    case 87:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 88:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 91:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 93:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 97:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_kAnd);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_kAsm);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 114:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 115:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_kDiv);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_kEnd);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_kFar);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_kFor);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 140:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_kMod);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_kNil);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_kNot);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_kOut);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 160:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(260);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 163:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 164:
      ADVANCE_MAP(
        'C', 264,
        'c', 264,
        'G', 265,
        'g', 265,
        'P', 266,
        'p', 266,
        'T', 267,
        't', 267,
      );
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 173:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_kSet);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_kShl);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_kShr);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 187:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_kTry);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 193:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_kVar);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 200:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 201:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_kXor);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 206:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(305);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 208:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_kCase);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 212:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_kCvar);
      END_STATE();
    case 216:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 217:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_kElse);
      END_STATE();
    case 224:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_kFile);
      END_STATE();
    case 230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 231:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 233:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_kGoto);
      END_STATE();
    case 235:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 238:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(332);
      END_STATE();
    case 239:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 245:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 247:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 248:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 249:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_kName);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_kNear);
      END_STATE();
    case 252:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(344);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 254:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 255:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(347);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 256:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 257:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 261:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 262:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(356);
      END_STATE();
    case 263:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 268:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_kRead);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      END_STATE();
    case 275:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 276:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 277:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 278:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 280:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 281:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 282:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 283:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 284:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 286:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 287:
      if (lookahead == '_') ADVANCE(381);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_kThen);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_kTrue);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_kType);
      END_STATE();
    case 292:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_kUnit);
      END_STATE();
    case 294:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_kUses);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 298:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 300:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_kWith);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 303:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 304:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_kAlias);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_kArray);
      END_STATE();
    case 307:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(393);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_kBegin);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_kCdecl);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_kClass);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_kConst);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 312:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 313:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 315:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 317:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 319:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 320:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      END_STATE();
    case 321:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_kFalse);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 327:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 328:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 329:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 331:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(415);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_kIndex);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 334:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 336:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 337:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_kLabel);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_kLocal);
      END_STATE();
    case 341:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(423);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 343:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 344:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 345:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 346:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 347:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(432);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      END_STATE();
    case 351:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 354:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 355:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      END_STATE();
    case 358:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 359:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 361:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 362:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(446);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_kRaise);
      END_STATE();
    case 364:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(447);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      END_STATE();
    case 367:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 371:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_kSealed);
      END_STATE();
    case 374:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 375:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 376:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 377:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 378:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      END_STATE();
    case 380:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(462);
      END_STATE();
    case 381:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 382:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_kUntil);
      END_STATE();
    case 385:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(466);
      END_STATE();
    case 386:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 387:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_kWhile);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_kWrite);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(470);
      END_STATE();
    case 392:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      END_STATE();
    case 397:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 398:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 399:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_kDispId);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_kDownto);
      END_STATE();
    case 403:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_kExcept);
      END_STATE();
    case 405:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(482);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_kExport);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(483);
      END_STATE();
    case 407:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 408:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(485);
      END_STATE();
    case 409:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(486);
      END_STATE();
    case 410:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      END_STATE();
    case 411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 412:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      END_STATE();
    case 413:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_kHelper);
      END_STATE();
    case 415:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(492);
      END_STATE();
    case 417:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_kInline);
      END_STATE();
    case 419:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 420:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 421:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(496);
      END_STATE();
    case 422:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(497);
      END_STATE();
    case 423:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 424:
      if (lookahead == '_') ADVANCE(499);
      END_STATE();
    case 425:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 426:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 427:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 428:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(503);
      END_STATE();
    case 429:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      END_STATE();
    case 430:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 431:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_kObject);
      END_STATE();
    case 433:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 434:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 435:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 436:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(510);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_kPacked);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_kPascal);
      END_STATE();
    case 439:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 440:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 441:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(513);
      END_STATE();
    case 442:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      END_STATE();
    case 444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_kPublic);
      END_STATE();
    case 446:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(517);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_kRecord);
      END_STATE();
    case 448:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 449:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_kRepeat);
      END_STATE();
    case 452:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 453:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(522);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 455:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(524);
      END_STATE();
    case 456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_kStatic);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_kStored);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_kStrict);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_kString);
      END_STATE();
    case 463:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(528);
      END_STATE();
    case 464:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(529);
      END_STATE();
    case 465:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 466:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      END_STATE();
    case 467:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_kWinapi);
      END_STATE();
    case 470:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      END_STATE();
    case 472:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 473:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(537);
      END_STATE();
    case 474:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_kCppdecl);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_kDefault);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_kDelayed);
      END_STATE();
    case 478:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      END_STATE();
    case 479:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(540);
      END_STATE();
    case 480:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_kDynamic);
      END_STATE();
    case 482:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_kExports);
      END_STATE();
    case 484:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 485:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_kFinally);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_kForward);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(545);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_kGeneric);
      END_STATE();
    case 490:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(547);
      END_STATE();
    case 492:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 493:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 494:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(550);
      END_STATE();
    case 495:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(551);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_kIocheck);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_kLibrary);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_kMessage);
      END_STATE();
    case 499:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(552);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(553);
      END_STATE();
    case 500:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 501:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(555);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(556);
      END_STATE();
    case 503:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(557);
      END_STATE();
    case 504:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 505:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      END_STATE();
    case 506:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      END_STATE();
    case 507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 508:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 509:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(563);
      END_STATE();
    case 510:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 511:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_kPrivate);
      END_STATE();
    case 513:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_kProgram);
      END_STATE();
    case 515:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(567);
      END_STATE();
    case 516:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 517:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 518:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      END_STATE();
    case 519:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 520:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(572);
      END_STATE();
    case 521:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      END_STATE();
    case 522:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_kSafecall);
      END_STATE();
    case 524:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 525:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 526:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_kStdcall);
      END_STATE();
    case 528:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      END_STATE();
    case 529:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 530:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_kVarargs);
      END_STATE();
    case 532:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_kVirtual);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_kAbsolute);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_kAbstract);
      END_STATE();
    case 536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_kConstref);
      END_STATE();
    case 538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(583);
      END_STATE();
    case 539:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 542:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_kExternal);
      END_STATE();
    case 544:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_kFunction);
      END_STATE();
    case 546:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(589);
      END_STATE();
    case 547:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      END_STATE();
    case 548:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(591);
      END_STATE();
    case 549:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(592);
      END_STATE();
    case 550:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 551:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      END_STATE();
    case 552:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 553:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_kMwpascal);
      END_STATE();
    case 555:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_kNoreturn);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 558:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 559:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_kOperator);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_kOptional);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_kOverload);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_kOverride);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_kPlatform);
      END_STATE();
    case 566:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_kProperty);
      END_STATE();
    case 568:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(603);
      END_STATE();
    case 569:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      END_STATE();
    case 570:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_kRegister);
      END_STATE();
    case 572:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(606);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_kRequired);
      END_STATE();
    case 574:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(607);
      END_STATE();
    case 575:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(608);
      END_STATE();
    case 576:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      END_STATE();
    case 577:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(610);
      END_STATE();
    case 578:
      if (lookahead == '_') ADVANCE(611);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 580:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 581:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_kAssembler);
      END_STATE();
    case 583:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 584:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 586:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(618);
      END_STATE();
    case 587:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(619);
      END_STATE();
    case 588:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_kHardfloat);
      END_STATE();
    case 590:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(621);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_kInherited);
      END_STATE();
    case 592:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_kInterface);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_kInterrupt);
      END_STATE();
    case 595:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 596:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(625);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_kNodefault);
      END_STATE();
    case 598:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 599:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_kObjcclass);
      END_STATE();
    case 601:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(628);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_kProcedure);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_kProtected);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_kPublished);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_kReference);
      END_STATE();
    case 606:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(629);
      END_STATE();
    case 607:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(630);
      END_STATE();
    case 608:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_kSoftfloat);
      END_STATE();
    case 610:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 611:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(633);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_kThreadvar);
      END_STATE();
    case 613:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 614:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(636);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_kDeprecated);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_kDestructor);
      END_STATE();
    case 618:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(638);
      END_STATE();
    case 619:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 620:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(641);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_kImplements);
      END_STATE();
    case 623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      END_STATE();
    case 624:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(643);
      END_STATE();
    case 625:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 626:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(645);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 628:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 629:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 631:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_kSpecialize);
      END_STATE();
    case 633:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(651);
      END_STATE();
    case 634:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_kVectorcall);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_kConstructor);
      END_STATE();
    case 638:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(654);
      END_STATE();
    case 639:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 640:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 641:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 642:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 643:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 644:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      END_STATE();
    case 645:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 646:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(662);
      END_STATE();
    case 647:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(663);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_kReintroduce);
      END_STATE();
    case 649:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 651:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 652:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(667);
      END_STATE();
    case 653:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 654:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_kExperimental);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_kFinalization);
      END_STATE();
    case 657:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 658:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_kMs_abi_cdecl);
      END_STATE();
    case 660:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_kNostackframe);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_kObjccategory);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_kObjcprotocol);
      END_STATE();
    case 664:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 665:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(674);
      END_STATE();
    case 666:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(675);
      END_STATE();
    case 667:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 668:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(677);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_kDispInterface);
      END_STATE();
    case 670:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 671:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(680);
      END_STATE();
    case 673:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(681);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_kSaveregisters);
      END_STATE();
    case 675:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 676:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_kUnimplemented);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_kImplementation);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_kInitialization);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_kMs_abi_default);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_kResourcestring);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_kSysv_abi_cdecl);
      END_STATE();
    case 683:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(684);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_kSysv_abi_default);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 40},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 40},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 40},
  [79] = {.lex_state = 40},
  [80] = {.lex_state = 40},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 40},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 40},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 40},
  [89] = {.lex_state = 40},
  [90] = {.lex_state = 40},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 40},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 40},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 40},
  [99] = {.lex_state = 40},
  [100] = {.lex_state = 40},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 40},
  [103] = {.lex_state = 40},
  [104] = {.lex_state = 40},
  [105] = {.lex_state = 40},
  [106] = {.lex_state = 40},
  [107] = {.lex_state = 40},
  [108] = {.lex_state = 40},
  [109] = {.lex_state = 40},
  [110] = {.lex_state = 40},
  [111] = {.lex_state = 40},
  [112] = {.lex_state = 40},
  [113] = {.lex_state = 40},
  [114] = {.lex_state = 40},
  [115] = {.lex_state = 40},
  [116] = {.lex_state = 40},
  [117] = {.lex_state = 40},
  [118] = {.lex_state = 40},
  [119] = {.lex_state = 40},
  [120] = {.lex_state = 40},
  [121] = {.lex_state = 40},
  [122] = {.lex_state = 40},
  [123] = {.lex_state = 40},
  [124] = {.lex_state = 40},
  [125] = {.lex_state = 40},
  [126] = {.lex_state = 40},
  [127] = {.lex_state = 40},
  [128] = {.lex_state = 40},
  [129] = {.lex_state = 40},
  [130] = {.lex_state = 40},
  [131] = {.lex_state = 40},
  [132] = {.lex_state = 40},
  [133] = {.lex_state = 40},
  [134] = {.lex_state = 40},
  [135] = {.lex_state = 40},
  [136] = {.lex_state = 40},
  [137] = {.lex_state = 40},
  [138] = {.lex_state = 40},
  [139] = {.lex_state = 40},
  [140] = {.lex_state = 40},
  [141] = {.lex_state = 40},
  [142] = {.lex_state = 40},
  [143] = {.lex_state = 40},
  [144] = {.lex_state = 40},
  [145] = {.lex_state = 40},
  [146] = {.lex_state = 40},
  [147] = {.lex_state = 40},
  [148] = {.lex_state = 40},
  [149] = {.lex_state = 40},
  [150] = {.lex_state = 40},
  [151] = {.lex_state = 40},
  [152] = {.lex_state = 40},
  [153] = {.lex_state = 40},
  [154] = {.lex_state = 40},
  [155] = {.lex_state = 40},
  [156] = {.lex_state = 40},
  [157] = {.lex_state = 40},
  [158] = {.lex_state = 40},
  [159] = {.lex_state = 40},
  [160] = {.lex_state = 40},
  [161] = {.lex_state = 40},
  [162] = {.lex_state = 40},
  [163] = {.lex_state = 40},
  [164] = {.lex_state = 40},
  [165] = {.lex_state = 40},
  [166] = {.lex_state = 40},
  [167] = {.lex_state = 40},
  [168] = {.lex_state = 40},
  [169] = {.lex_state = 40},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 40},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 40},
  [175] = {.lex_state = 40},
  [176] = {.lex_state = 40},
  [177] = {.lex_state = 40},
  [178] = {.lex_state = 40},
  [179] = {.lex_state = 40},
  [180] = {.lex_state = 41},
  [181] = {.lex_state = 40},
  [182] = {.lex_state = 40},
  [183] = {.lex_state = 40},
  [184] = {.lex_state = 40},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 40},
  [189] = {.lex_state = 40},
  [190] = {.lex_state = 40},
  [191] = {.lex_state = 40},
  [192] = {.lex_state = 40},
  [193] = {.lex_state = 40},
  [194] = {.lex_state = 40},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 40},
  [197] = {.lex_state = 40},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 40},
  [200] = {.lex_state = 40},
  [201] = {.lex_state = 40},
  [202] = {.lex_state = 40},
  [203] = {.lex_state = 40},
  [204] = {.lex_state = 40},
  [205] = {.lex_state = 40},
  [206] = {.lex_state = 40},
  [207] = {.lex_state = 40},
  [208] = {.lex_state = 40},
  [209] = {.lex_state = 40},
  [210] = {.lex_state = 40},
  [211] = {.lex_state = 40},
  [212] = {.lex_state = 40},
  [213] = {.lex_state = 40},
  [214] = {.lex_state = 40},
  [215] = {.lex_state = 40},
  [216] = {.lex_state = 40},
  [217] = {.lex_state = 40},
  [218] = {.lex_state = 41},
  [219] = {.lex_state = 40},
  [220] = {.lex_state = 40},
  [221] = {.lex_state = 40},
  [222] = {.lex_state = 40},
  [223] = {.lex_state = 40},
  [224] = {.lex_state = 40},
  [225] = {.lex_state = 40},
  [226] = {.lex_state = 40},
  [227] = {.lex_state = 40},
  [228] = {.lex_state = 40},
  [229] = {.lex_state = 40},
  [230] = {.lex_state = 40},
  [231] = {.lex_state = 40},
  [232] = {.lex_state = 40},
  [233] = {.lex_state = 40},
  [234] = {.lex_state = 40},
  [235] = {.lex_state = 40},
  [236] = {.lex_state = 40},
  [237] = {.lex_state = 40},
  [238] = {.lex_state = 40},
  [239] = {.lex_state = 40},
  [240] = {.lex_state = 40},
  [241] = {.lex_state = 40},
  [242] = {.lex_state = 40},
  [243] = {.lex_state = 40},
  [244] = {.lex_state = 40},
  [245] = {.lex_state = 40},
  [246] = {.lex_state = 40},
  [247] = {.lex_state = 40},
  [248] = {.lex_state = 41},
  [249] = {.lex_state = 41},
  [250] = {.lex_state = 40},
  [251] = {.lex_state = 40},
  [252] = {.lex_state = 40},
  [253] = {.lex_state = 40},
  [254] = {.lex_state = 40},
  [255] = {.lex_state = 40},
  [256] = {.lex_state = 40},
  [257] = {.lex_state = 40},
  [258] = {.lex_state = 40},
  [259] = {.lex_state = 40},
  [260] = {.lex_state = 40},
  [261] = {.lex_state = 40},
  [262] = {.lex_state = 40},
  [263] = {.lex_state = 40},
  [264] = {.lex_state = 40},
  [265] = {.lex_state = 40},
  [266] = {.lex_state = 40},
  [267] = {.lex_state = 40},
  [268] = {.lex_state = 40},
  [269] = {.lex_state = 40},
  [270] = {.lex_state = 40},
  [271] = {.lex_state = 40},
  [272] = {.lex_state = 40},
  [273] = {.lex_state = 40},
  [274] = {.lex_state = 40},
  [275] = {.lex_state = 40},
  [276] = {.lex_state = 40},
  [277] = {.lex_state = 40},
  [278] = {.lex_state = 40},
  [279] = {.lex_state = 40},
  [280] = {.lex_state = 40},
  [281] = {.lex_state = 40},
  [282] = {.lex_state = 40},
  [283] = {.lex_state = 40},
  [284] = {.lex_state = 40},
  [285] = {.lex_state = 40},
  [286] = {.lex_state = 40},
  [287] = {.lex_state = 40},
  [288] = {.lex_state = 40},
  [289] = {.lex_state = 40},
  [290] = {.lex_state = 40},
  [291] = {.lex_state = 40},
  [292] = {.lex_state = 40},
  [293] = {.lex_state = 40},
  [294] = {.lex_state = 40},
  [295] = {.lex_state = 40},
  [296] = {.lex_state = 40},
  [297] = {.lex_state = 40},
  [298] = {.lex_state = 40},
  [299] = {.lex_state = 40},
  [300] = {.lex_state = 40},
  [301] = {.lex_state = 40},
  [302] = {.lex_state = 40},
  [303] = {.lex_state = 40},
  [304] = {.lex_state = 40},
  [305] = {.lex_state = 40},
  [306] = {.lex_state = 40},
  [307] = {.lex_state = 40},
  [308] = {.lex_state = 40},
  [309] = {.lex_state = 40},
  [310] = {.lex_state = 40},
  [311] = {.lex_state = 40},
  [312] = {.lex_state = 40},
  [313] = {.lex_state = 40},
  [314] = {.lex_state = 40},
  [315] = {.lex_state = 40},
  [316] = {.lex_state = 40},
  [317] = {.lex_state = 40},
  [318] = {.lex_state = 40},
  [319] = {.lex_state = 40},
  [320] = {.lex_state = 40},
  [321] = {.lex_state = 40},
  [322] = {.lex_state = 40},
  [323] = {.lex_state = 40},
  [324] = {.lex_state = 40},
  [325] = {.lex_state = 40},
  [326] = {.lex_state = 40},
  [327] = {.lex_state = 40},
  [328] = {.lex_state = 40},
  [329] = {.lex_state = 40},
  [330] = {.lex_state = 40},
  [331] = {.lex_state = 40},
  [332] = {.lex_state = 40},
  [333] = {.lex_state = 40},
  [334] = {.lex_state = 40},
  [335] = {.lex_state = 40},
  [336] = {.lex_state = 40},
  [337] = {.lex_state = 40},
  [338] = {.lex_state = 40},
  [339] = {.lex_state = 40},
  [340] = {.lex_state = 40},
  [341] = {.lex_state = 40},
  [342] = {.lex_state = 40},
  [343] = {.lex_state = 40},
  [344] = {.lex_state = 40},
  [345] = {.lex_state = 40},
  [346] = {.lex_state = 40},
  [347] = {.lex_state = 40},
  [348] = {.lex_state = 40},
  [349] = {.lex_state = 40},
  [350] = {.lex_state = 40},
  [351] = {.lex_state = 40},
  [352] = {.lex_state = 40},
  [353] = {.lex_state = 40},
  [354] = {.lex_state = 40},
  [355] = {.lex_state = 40},
  [356] = {.lex_state = 40},
  [357] = {.lex_state = 40},
  [358] = {.lex_state = 40},
  [359] = {.lex_state = 40},
  [360] = {.lex_state = 40},
  [361] = {.lex_state = 40},
  [362] = {.lex_state = 40},
  [363] = {.lex_state = 40},
  [364] = {.lex_state = 40},
  [365] = {.lex_state = 40},
  [366] = {.lex_state = 40},
  [367] = {.lex_state = 40},
  [368] = {.lex_state = 40},
  [369] = {.lex_state = 40},
  [370] = {.lex_state = 40},
  [371] = {.lex_state = 40},
  [372] = {.lex_state = 40},
  [373] = {.lex_state = 40},
  [374] = {.lex_state = 40},
  [375] = {.lex_state = 40},
  [376] = {.lex_state = 40},
  [377] = {.lex_state = 40},
  [378] = {.lex_state = 40},
  [379] = {.lex_state = 40},
  [380] = {.lex_state = 40},
  [381] = {.lex_state = 40},
  [382] = {.lex_state = 40},
  [383] = {.lex_state = 40},
  [384] = {.lex_state = 40},
  [385] = {.lex_state = 40},
  [386] = {.lex_state = 40},
  [387] = {.lex_state = 40},
  [388] = {.lex_state = 40},
  [389] = {.lex_state = 40},
  [390] = {.lex_state = 40},
  [391] = {.lex_state = 40},
  [392] = {.lex_state = 40},
  [393] = {.lex_state = 40},
  [394] = {.lex_state = 40},
  [395] = {.lex_state = 40},
  [396] = {.lex_state = 40},
  [397] = {.lex_state = 40},
  [398] = {.lex_state = 40},
  [399] = {.lex_state = 40},
  [400] = {.lex_state = 40},
  [401] = {.lex_state = 40},
  [402] = {.lex_state = 40},
  [403] = {.lex_state = 40},
  [404] = {.lex_state = 40},
  [405] = {.lex_state = 40},
  [406] = {.lex_state = 40},
  [407] = {.lex_state = 40},
  [408] = {.lex_state = 40},
  [409] = {.lex_state = 40},
  [410] = {.lex_state = 40},
  [411] = {.lex_state = 40},
  [412] = {.lex_state = 40},
  [413] = {.lex_state = 11},
  [414] = {.lex_state = 11},
  [415] = {.lex_state = 11},
  [416] = {.lex_state = 40},
  [417] = {.lex_state = 40},
  [418] = {.lex_state = 11},
  [419] = {.lex_state = 11},
  [420] = {.lex_state = 11},
  [421] = {.lex_state = 11},
  [422] = {.lex_state = 11},
  [423] = {.lex_state = 11},
  [424] = {.lex_state = 11},
  [425] = {.lex_state = 11},
  [426] = {.lex_state = 11},
  [427] = {.lex_state = 11},
  [428] = {.lex_state = 11},
  [429] = {.lex_state = 40},
  [430] = {.lex_state = 40},
  [431] = {.lex_state = 11},
  [432] = {.lex_state = 11},
  [433] = {.lex_state = 11},
  [434] = {.lex_state = 11},
  [435] = {.lex_state = 11},
  [436] = {.lex_state = 11},
  [437] = {.lex_state = 11},
  [438] = {.lex_state = 11},
  [439] = {.lex_state = 11},
  [440] = {.lex_state = 11},
  [441] = {.lex_state = 40},
  [442] = {.lex_state = 11},
  [443] = {.lex_state = 11},
  [444] = {.lex_state = 11},
  [445] = {.lex_state = 11},
  [446] = {.lex_state = 11},
  [447] = {.lex_state = 40},
  [448] = {.lex_state = 40},
  [449] = {.lex_state = 40},
  [450] = {.lex_state = 11},
  [451] = {.lex_state = 40},
  [452] = {.lex_state = 40},
  [453] = {.lex_state = 40},
  [454] = {.lex_state = 40},
  [455] = {.lex_state = 11},
  [456] = {.lex_state = 11},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 11},
  [459] = {.lex_state = 11},
  [460] = {.lex_state = 11},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 40},
  [463] = {.lex_state = 11},
  [464] = {.lex_state = 40},
  [465] = {.lex_state = 11},
  [466] = {.lex_state = 11},
  [467] = {.lex_state = 11},
  [468] = {.lex_state = 11},
  [469] = {.lex_state = 11},
  [470] = {.lex_state = 11},
  [471] = {.lex_state = 11},
  [472] = {.lex_state = 11},
  [473] = {.lex_state = 11},
  [474] = {.lex_state = 11},
  [475] = {.lex_state = 11},
  [476] = {.lex_state = 41},
  [477] = {.lex_state = 40},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 11},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 40},
  [482] = {.lex_state = 11},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 11},
  [485] = {.lex_state = 11},
  [486] = {.lex_state = 40},
  [487] = {.lex_state = 11},
  [488] = {.lex_state = 11},
  [489] = {.lex_state = 11},
  [490] = {.lex_state = 11},
  [491] = {.lex_state = 11},
  [492] = {.lex_state = 11},
  [493] = {.lex_state = 11},
  [494] = {.lex_state = 11},
  [495] = {.lex_state = 11},
  [496] = {.lex_state = 11},
  [497] = {.lex_state = 11},
  [498] = {.lex_state = 11},
  [499] = {.lex_state = 11},
  [500] = {.lex_state = 40},
  [501] = {.lex_state = 11},
  [502] = {.lex_state = 40},
  [503] = {.lex_state = 11},
  [504] = {.lex_state = 11},
  [505] = {.lex_state = 11},
  [506] = {.lex_state = 3},
  [507] = {.lex_state = 40},
  [508] = {.lex_state = 11},
  [509] = {.lex_state = 11},
  [510] = {.lex_state = 11},
  [511] = {.lex_state = 11},
  [512] = {.lex_state = 11},
  [513] = {.lex_state = 11},
  [514] = {.lex_state = 11},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 41},
  [517] = {.lex_state = 41},
  [518] = {.lex_state = 41},
  [519] = {.lex_state = 41},
  [520] = {.lex_state = 11},
  [521] = {.lex_state = 41},
  [522] = {.lex_state = 41},
  [523] = {.lex_state = 41},
  [524] = {.lex_state = 41},
  [525] = {.lex_state = 41},
  [526] = {.lex_state = 41},
  [527] = {.lex_state = 11},
  [528] = {.lex_state = 41},
  [529] = {.lex_state = 41},
  [530] = {.lex_state = 41},
  [531] = {.lex_state = 41},
  [532] = {.lex_state = 41},
  [533] = {.lex_state = 41},
  [534] = {.lex_state = 41},
  [535] = {.lex_state = 41},
  [536] = {.lex_state = 41},
  [537] = {.lex_state = 41},
  [538] = {.lex_state = 41},
  [539] = {.lex_state = 11},
  [540] = {.lex_state = 11},
  [541] = {.lex_state = 41},
  [542] = {.lex_state = 41},
  [543] = {.lex_state = 11},
  [544] = {.lex_state = 41},
  [545] = {.lex_state = 41},
  [546] = {.lex_state = 2},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 2},
  [549] = {.lex_state = 1},
  [550] = {.lex_state = 41},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 41},
  [553] = {.lex_state = 2},
  [554] = {.lex_state = 40},
  [555] = {.lex_state = 40},
  [556] = {.lex_state = 40},
  [557] = {.lex_state = 6},
  [558] = {.lex_state = 6},
  [559] = {.lex_state = 6},
  [560] = {.lex_state = 41},
  [561] = {.lex_state = 41},
  [562] = {.lex_state = 41},
  [563] = {.lex_state = 41},
  [564] = {.lex_state = 41},
  [565] = {.lex_state = 41},
  [566] = {.lex_state = 41},
  [567] = {.lex_state = 41},
  [568] = {.lex_state = 41},
  [569] = {.lex_state = 41},
  [570] = {.lex_state = 41},
  [571] = {.lex_state = 41},
  [572] = {.lex_state = 41},
  [573] = {.lex_state = 41},
  [574] = {.lex_state = 41},
  [575] = {.lex_state = 41},
  [576] = {.lex_state = 41},
  [577] = {.lex_state = 41},
  [578] = {.lex_state = 41},
  [579] = {.lex_state = 41},
  [580] = {.lex_state = 41},
  [581] = {.lex_state = 41},
  [582] = {.lex_state = 41},
  [583] = {.lex_state = 41},
  [584] = {.lex_state = 41},
  [585] = {.lex_state = 41},
  [586] = {.lex_state = 41},
  [587] = {.lex_state = 41},
  [588] = {.lex_state = 41},
  [589] = {.lex_state = 41},
  [590] = {.lex_state = 41},
  [591] = {.lex_state = 41},
  [592] = {.lex_state = 41},
  [593] = {.lex_state = 41},
  [594] = {.lex_state = 41},
  [595] = {.lex_state = 41},
  [596] = {.lex_state = 40},
  [597] = {.lex_state = 40},
  [598] = {.lex_state = 40},
  [599] = {.lex_state = 41},
  [600] = {.lex_state = 41},
  [601] = {.lex_state = 41},
  [602] = {.lex_state = 40},
  [603] = {.lex_state = 40},
  [604] = {.lex_state = 41},
  [605] = {.lex_state = 40},
  [606] = {.lex_state = 40},
  [607] = {.lex_state = 41},
  [608] = {.lex_state = 41},
  [609] = {.lex_state = 40},
  [610] = {.lex_state = 40},
  [611] = {.lex_state = 40},
  [612] = {.lex_state = 41},
  [613] = {.lex_state = 40},
  [614] = {.lex_state = 40},
  [615] = {.lex_state = 40},
  [616] = {.lex_state = 40},
  [617] = {.lex_state = 41},
  [618] = {.lex_state = 40},
  [619] = {.lex_state = 41},
  [620] = {.lex_state = 41},
  [621] = {.lex_state = 40},
  [622] = {.lex_state = 40},
  [623] = {.lex_state = 40},
  [624] = {.lex_state = 40},
  [625] = {.lex_state = 41},
  [626] = {.lex_state = 40},
  [627] = {.lex_state = 41},
  [628] = {.lex_state = 40},
  [629] = {.lex_state = 40},
  [630] = {.lex_state = 40},
  [631] = {.lex_state = 40},
  [632] = {.lex_state = 40},
  [633] = {.lex_state = 40},
  [634] = {.lex_state = 40},
  [635] = {.lex_state = 40},
  [636] = {.lex_state = 40},
  [637] = {.lex_state = 40},
  [638] = {.lex_state = 40},
  [639] = {.lex_state = 41},
  [640] = {.lex_state = 41},
  [641] = {.lex_state = 41},
  [642] = {.lex_state = 40},
  [643] = {.lex_state = 4},
  [644] = {.lex_state = 3},
  [645] = {.lex_state = 4},
  [646] = {.lex_state = 4},
  [647] = {.lex_state = 4},
  [648] = {.lex_state = 4},
  [649] = {.lex_state = 4},
  [650] = {.lex_state = 4},
  [651] = {.lex_state = 4},
  [652] = {.lex_state = 41},
  [653] = {.lex_state = 4},
  [654] = {.lex_state = 3},
  [655] = {.lex_state = 3},
  [656] = {.lex_state = 3},
  [657] = {.lex_state = 3},
  [658] = {.lex_state = 3},
  [659] = {.lex_state = 40},
  [660] = {.lex_state = 40},
  [661] = {.lex_state = 40},
  [662] = {.lex_state = 3},
  [663] = {.lex_state = 40},
  [664] = {.lex_state = 3},
  [665] = {.lex_state = 40},
  [666] = {.lex_state = 40},
  [667] = {.lex_state = 3},
  [668] = {.lex_state = 40},
  [669] = {.lex_state = 41},
  [670] = {.lex_state = 41},
  [671] = {.lex_state = 4},
  [672] = {.lex_state = 3},
  [673] = {.lex_state = 40},
  [674] = {.lex_state = 40},
  [675] = {.lex_state = 40},
  [676] = {.lex_state = 40},
  [677] = {.lex_state = 40},
  [678] = {.lex_state = 41},
  [679] = {.lex_state = 41},
  [680] = {.lex_state = 40},
  [681] = {.lex_state = 41},
  [682] = {.lex_state = 40},
  [683] = {.lex_state = 40},
  [684] = {.lex_state = 40},
  [685] = {.lex_state = 40},
  [686] = {.lex_state = 41},
  [687] = {.lex_state = 41},
  [688] = {.lex_state = 41},
  [689] = {.lex_state = 40},
  [690] = {.lex_state = 41},
  [691] = {.lex_state = 41},
  [692] = {.lex_state = 41},
  [693] = {.lex_state = 41},
  [694] = {.lex_state = 41},
  [695] = {.lex_state = 40},
  [696] = {.lex_state = 40},
  [697] = {.lex_state = 40},
  [698] = {.lex_state = 40},
  [699] = {.lex_state = 40},
  [700] = {.lex_state = 41},
  [701] = {.lex_state = 41},
  [702] = {.lex_state = 41},
  [703] = {.lex_state = 40},
  [704] = {.lex_state = 40},
  [705] = {.lex_state = 40},
  [706] = {.lex_state = 40},
  [707] = {.lex_state = 40},
  [708] = {.lex_state = 40},
  [709] = {.lex_state = 40},
  [710] = {.lex_state = 40},
  [711] = {.lex_state = 40},
  [712] = {.lex_state = 40},
  [713] = {.lex_state = 40},
  [714] = {.lex_state = 40},
  [715] = {.lex_state = 40},
  [716] = {.lex_state = 40},
  [717] = {.lex_state = 40},
  [718] = {.lex_state = 40},
  [719] = {.lex_state = 40},
  [720] = {.lex_state = 40},
  [721] = {.lex_state = 40},
  [722] = {.lex_state = 40},
  [723] = {.lex_state = 40},
  [724] = {.lex_state = 40},
  [725] = {.lex_state = 40},
  [726] = {.lex_state = 40},
  [727] = {.lex_state = 40},
  [728] = {.lex_state = 40},
  [729] = {.lex_state = 40},
  [730] = {.lex_state = 40},
  [731] = {.lex_state = 40},
  [732] = {.lex_state = 40},
  [733] = {.lex_state = 40},
  [734] = {.lex_state = 40},
  [735] = {.lex_state = 40},
  [736] = {.lex_state = 40},
  [737] = {.lex_state = 40},
  [738] = {.lex_state = 40},
  [739] = {.lex_state = 40},
  [740] = {.lex_state = 40},
  [741] = {.lex_state = 40},
  [742] = {.lex_state = 40},
  [743] = {.lex_state = 40},
  [744] = {.lex_state = 40},
  [745] = {.lex_state = 40},
  [746] = {.lex_state = 40},
  [747] = {.lex_state = 40},
  [748] = {.lex_state = 40},
  [749] = {.lex_state = 40},
  [750] = {.lex_state = 40},
  [751] = {.lex_state = 40},
  [752] = {.lex_state = 40},
  [753] = {.lex_state = 41},
  [754] = {.lex_state = 40},
  [755] = {.lex_state = 40},
  [756] = {.lex_state = 41},
  [757] = {.lex_state = 40},
  [758] = {.lex_state = 40},
  [759] = {.lex_state = 40},
  [760] = {.lex_state = 40},
  [761] = {.lex_state = 40},
  [762] = {.lex_state = 41},
  [763] = {.lex_state = 40},
  [764] = {.lex_state = 40},
  [765] = {.lex_state = 40},
  [766] = {.lex_state = 40},
  [767] = {.lex_state = 40},
  [768] = {.lex_state = 40},
  [769] = {.lex_state = 40},
  [770] = {.lex_state = 40},
  [771] = {.lex_state = 40},
  [772] = {.lex_state = 41},
  [773] = {.lex_state = 40},
  [774] = {.lex_state = 40},
  [775] = {.lex_state = 40},
  [776] = {.lex_state = 41},
  [777] = {.lex_state = 41},
  [778] = {.lex_state = 41},
  [779] = {.lex_state = 41},
  [780] = {.lex_state = 41},
  [781] = {.lex_state = 41},
  [782] = {.lex_state = 40},
  [783] = {.lex_state = 41},
  [784] = {.lex_state = 41},
  [785] = {.lex_state = 40},
  [786] = {.lex_state = 40},
  [787] = {.lex_state = 40},
  [788] = {.lex_state = 40},
  [789] = {.lex_state = 40},
  [790] = {.lex_state = 40},
  [791] = {.lex_state = 41},
  [792] = {.lex_state = 40},
  [793] = {.lex_state = 40},
  [794] = {.lex_state = 41},
  [795] = {.lex_state = 41},
  [796] = {.lex_state = 41},
  [797] = {.lex_state = 41},
  [798] = {.lex_state = 41},
  [799] = {.lex_state = 41},
  [800] = {.lex_state = 40},
  [801] = {.lex_state = 40},
  [802] = {.lex_state = 40},
  [803] = {.lex_state = 40},
  [804] = {.lex_state = 40},
  [805] = {.lex_state = 40},
  [806] = {.lex_state = 40},
  [807] = {.lex_state = 40},
  [808] = {.lex_state = 40},
  [809] = {.lex_state = 40},
  [810] = {.lex_state = 40},
  [811] = {.lex_state = 40},
  [812] = {.lex_state = 40},
  [813] = {.lex_state = 40},
  [814] = {.lex_state = 40},
  [815] = {.lex_state = 40},
  [816] = {.lex_state = 40},
  [817] = {.lex_state = 40},
  [818] = {.lex_state = 40},
  [819] = {.lex_state = 40},
  [820] = {.lex_state = 40},
  [821] = {.lex_state = 40},
  [822] = {.lex_state = 40},
  [823] = {.lex_state = 40},
  [824] = {.lex_state = 40},
  [825] = {.lex_state = 40},
  [826] = {.lex_state = 40},
  [827] = {.lex_state = 40},
  [828] = {.lex_state = 40},
  [829] = {.lex_state = 40},
  [830] = {.lex_state = 40},
  [831] = {.lex_state = 40},
  [832] = {.lex_state = 41},
  [833] = {.lex_state = 40},
  [834] = {.lex_state = 40},
  [835] = {.lex_state = 40},
  [836] = {.lex_state = 40},
  [837] = {.lex_state = 40},
  [838] = {.lex_state = 40},
  [839] = {.lex_state = 40},
  [840] = {.lex_state = 40},
  [841] = {.lex_state = 40},
  [842] = {.lex_state = 40},
  [843] = {.lex_state = 41},
  [844] = {.lex_state = 40},
  [845] = {.lex_state = 41},
  [846] = {.lex_state = 40},
  [847] = {.lex_state = 41},
  [848] = {.lex_state = 40},
  [849] = {.lex_state = 40},
  [850] = {.lex_state = 40},
  [851] = {.lex_state = 41},
  [852] = {.lex_state = 40},
  [853] = {.lex_state = 40},
  [854] = {.lex_state = 40},
  [855] = {.lex_state = 40},
  [856] = {.lex_state = 41},
  [857] = {.lex_state = 40},
  [858] = {.lex_state = 41},
  [859] = {.lex_state = 41},
  [860] = {.lex_state = 40},
  [861] = {.lex_state = 41},
  [862] = {.lex_state = 41},
  [863] = {.lex_state = 41},
  [864] = {.lex_state = 40},
  [865] = {.lex_state = 41},
  [866] = {.lex_state = 41},
  [867] = {.lex_state = 40},
  [868] = {.lex_state = 40},
  [869] = {.lex_state = 41},
  [870] = {.lex_state = 40},
  [871] = {.lex_state = 41},
  [872] = {.lex_state = 41},
  [873] = {.lex_state = 40},
  [874] = {.lex_state = 40},
  [875] = {.lex_state = 41},
  [876] = {.lex_state = 41},
  [877] = {.lex_state = 41},
  [878] = {.lex_state = 40},
  [879] = {.lex_state = 40},
  [880] = {.lex_state = 41},
  [881] = {.lex_state = 41},
  [882] = {.lex_state = 41},
  [883] = {.lex_state = 41},
  [884] = {.lex_state = 41},
  [885] = {.lex_state = 40},
  [886] = {.lex_state = 41},
  [887] = {.lex_state = 41},
  [888] = {.lex_state = 40},
  [889] = {.lex_state = 40},
  [890] = {.lex_state = 40},
  [891] = {.lex_state = 40},
  [892] = {.lex_state = 40},
  [893] = {.lex_state = 40},
  [894] = {.lex_state = 40},
  [895] = {.lex_state = 40},
  [896] = {.lex_state = 40},
  [897] = {.lex_state = 40},
  [898] = {.lex_state = 40},
  [899] = {.lex_state = 40},
  [900] = {.lex_state = 40},
  [901] = {.lex_state = 40},
  [902] = {.lex_state = 40},
  [903] = {.lex_state = 40},
  [904] = {.lex_state = 40},
  [905] = {.lex_state = 40},
  [906] = {.lex_state = 40},
  [907] = {.lex_state = 40},
  [908] = {.lex_state = 40},
  [909] = {.lex_state = 40},
  [910] = {.lex_state = 40},
  [911] = {.lex_state = 40},
  [912] = {.lex_state = 41},
  [913] = {.lex_state = 40},
  [914] = {.lex_state = 40},
  [915] = {.lex_state = 40},
  [916] = {.lex_state = 40},
  [917] = {.lex_state = 40},
  [918] = {.lex_state = 40},
  [919] = {.lex_state = 40},
  [920] = {.lex_state = 40},
  [921] = {.lex_state = 40},
  [922] = {.lex_state = 40},
  [923] = {.lex_state = 40},
  [924] = {.lex_state = 40},
  [925] = {.lex_state = 40},
  [926] = {.lex_state = 40},
  [927] = {.lex_state = 40},
  [928] = {.lex_state = 40},
  [929] = {.lex_state = 40},
  [930] = {.lex_state = 40},
  [931] = {.lex_state = 40},
  [932] = {.lex_state = 40},
  [933] = {.lex_state = 40},
  [934] = {.lex_state = 40},
  [935] = {.lex_state = 40},
  [936] = {.lex_state = 40},
  [937] = {.lex_state = 40},
  [938] = {.lex_state = 40},
  [939] = {.lex_state = 40},
  [940] = {.lex_state = 40},
  [941] = {.lex_state = 40},
  [942] = {.lex_state = 40},
  [943] = {.lex_state = 40},
  [944] = {.lex_state = 40},
  [945] = {.lex_state = 40},
  [946] = {.lex_state = 40},
  [947] = {.lex_state = 40},
  [948] = {.lex_state = 40},
  [949] = {.lex_state = 40},
  [950] = {.lex_state = 40},
  [951] = {.lex_state = 40},
  [952] = {.lex_state = 40},
  [953] = {.lex_state = 40},
  [954] = {.lex_state = 40},
  [955] = {.lex_state = 40},
  [956] = {.lex_state = 40},
  [957] = {.lex_state = 40},
  [958] = {.lex_state = 40},
  [959] = {.lex_state = 40},
  [960] = {.lex_state = 40},
  [961] = {.lex_state = 40},
  [962] = {.lex_state = 40},
  [963] = {.lex_state = 40},
  [964] = {.lex_state = 40},
  [965] = {.lex_state = 40},
  [966] = {.lex_state = 40},
  [967] = {.lex_state = 40},
  [968] = {.lex_state = 40},
  [969] = {.lex_state = 40},
  [970] = {.lex_state = 40},
  [971] = {.lex_state = 40},
  [972] = {.lex_state = 40},
  [973] = {.lex_state = 40},
  [974] = {.lex_state = 40},
  [975] = {.lex_state = 40},
  [976] = {.lex_state = 40},
  [977] = {.lex_state = 40},
  [978] = {.lex_state = 40},
  [979] = {.lex_state = 40},
  [980] = {.lex_state = 40},
  [981] = {.lex_state = 40},
  [982] = {.lex_state = 40},
  [983] = {.lex_state = 40},
  [984] = {.lex_state = 40},
  [985] = {.lex_state = 40},
  [986] = {.lex_state = 40},
  [987] = {.lex_state = 40},
  [988] = {.lex_state = 40},
  [989] = {.lex_state = 40},
  [990] = {.lex_state = 40},
  [991] = {.lex_state = 40},
  [992] = {.lex_state = 40},
  [993] = {.lex_state = 40},
  [994] = {.lex_state = 40},
  [995] = {.lex_state = 40},
  [996] = {.lex_state = 40},
  [997] = {.lex_state = 40},
  [998] = {.lex_state = 40},
  [999] = {.lex_state = 40},
  [1000] = {.lex_state = 40},
  [1001] = {.lex_state = 40},
  [1002] = {.lex_state = 40},
  [1003] = {.lex_state = 40},
  [1004] = {.lex_state = 40},
  [1005] = {.lex_state = 40},
  [1006] = {.lex_state = 40},
  [1007] = {.lex_state = 40},
  [1008] = {.lex_state = 40},
  [1009] = {.lex_state = 40},
  [1010] = {.lex_state = 40},
  [1011] = {.lex_state = 40},
  [1012] = {.lex_state = 40},
  [1013] = {.lex_state = 40},
  [1014] = {.lex_state = 40},
  [1015] = {.lex_state = 40},
  [1016] = {.lex_state = 40},
  [1017] = {.lex_state = 41},
  [1018] = {.lex_state = 41},
  [1019] = {.lex_state = 41},
  [1020] = {.lex_state = 41},
  [1021] = {.lex_state = 11},
  [1022] = {.lex_state = 40},
  [1023] = {.lex_state = 41},
  [1024] = {.lex_state = 41},
  [1025] = {.lex_state = 41},
  [1026] = {.lex_state = 41},
  [1027] = {.lex_state = 41},
  [1028] = {.lex_state = 41},
  [1029] = {.lex_state = 41},
  [1030] = {.lex_state = 11},
  [1031] = {.lex_state = 40},
  [1032] = {.lex_state = 40},
  [1033] = {.lex_state = 40},
  [1034] = {.lex_state = 41},
  [1035] = {.lex_state = 11},
  [1036] = {.lex_state = 41},
  [1037] = {.lex_state = 40},
  [1038] = {.lex_state = 40},
  [1039] = {.lex_state = 40},
  [1040] = {.lex_state = 11},
  [1041] = {.lex_state = 40},
  [1042] = {.lex_state = 40},
  [1043] = {.lex_state = 40},
  [1044] = {.lex_state = 40},
  [1045] = {.lex_state = 40},
  [1046] = {.lex_state = 11},
  [1047] = {.lex_state = 41},
  [1048] = {.lex_state = 40},
  [1049] = {.lex_state = 11},
  [1050] = {.lex_state = 41},
  [1051] = {.lex_state = 41},
  [1052] = {.lex_state = 41},
  [1053] = {.lex_state = 41},
  [1054] = {.lex_state = 41},
  [1055] = {.lex_state = 41},
  [1056] = {.lex_state = 41},
  [1057] = {.lex_state = 41},
  [1058] = {.lex_state = 41},
  [1059] = {.lex_state = 41},
  [1060] = {.lex_state = 41},
  [1061] = {.lex_state = 40},
  [1062] = {.lex_state = 41},
  [1063] = {.lex_state = 41},
  [1064] = {.lex_state = 41},
  [1065] = {.lex_state = 41},
  [1066] = {.lex_state = 41},
  [1067] = {.lex_state = 41},
  [1068] = {.lex_state = 41},
  [1069] = {.lex_state = 41},
  [1070] = {.lex_state = 41},
  [1071] = {.lex_state = 41},
  [1072] = {.lex_state = 41},
  [1073] = {.lex_state = 41},
  [1074] = {.lex_state = 41},
  [1075] = {.lex_state = 41},
  [1076] = {.lex_state = 41},
  [1077] = {.lex_state = 40},
  [1078] = {.lex_state = 41},
  [1079] = {.lex_state = 41},
  [1080] = {.lex_state = 41},
  [1081] = {.lex_state = 40},
  [1082] = {.lex_state = 41},
  [1083] = {.lex_state = 41},
  [1084] = {.lex_state = 41},
  [1085] = {.lex_state = 41},
  [1086] = {.lex_state = 41},
  [1087] = {.lex_state = 41},
  [1088] = {.lex_state = 41},
  [1089] = {.lex_state = 41},
  [1090] = {.lex_state = 41},
  [1091] = {.lex_state = 41},
  [1092] = {.lex_state = 41},
  [1093] = {.lex_state = 41},
  [1094] = {.lex_state = 41},
  [1095] = {.lex_state = 41},
  [1096] = {.lex_state = 41},
  [1097] = {.lex_state = 41},
  [1098] = {.lex_state = 41},
  [1099] = {.lex_state = 41},
  [1100] = {.lex_state = 41},
  [1101] = {.lex_state = 40},
  [1102] = {.lex_state = 40},
  [1103] = {.lex_state = 41},
  [1104] = {.lex_state = 40},
  [1105] = {.lex_state = 41},
  [1106] = {.lex_state = 41},
  [1107] = {.lex_state = 41},
  [1108] = {.lex_state = 41},
  [1109] = {.lex_state = 41},
  [1110] = {.lex_state = 40},
  [1111] = {.lex_state = 40},
  [1112] = {.lex_state = 40},
  [1113] = {.lex_state = 40},
  [1114] = {.lex_state = 40},
  [1115] = {.lex_state = 40},
  [1116] = {.lex_state = 40},
  [1117] = {.lex_state = 40},
  [1118] = {.lex_state = 11},
  [1119] = {.lex_state = 40},
  [1120] = {.lex_state = 40},
  [1121] = {.lex_state = 40},
  [1122] = {.lex_state = 41},
  [1123] = {.lex_state = 40},
  [1124] = {.lex_state = 40},
  [1125] = {.lex_state = 40},
  [1126] = {.lex_state = 40},
  [1127] = {.lex_state = 40},
  [1128] = {.lex_state = 40},
  [1129] = {.lex_state = 40},
  [1130] = {.lex_state = 40},
  [1131] = {.lex_state = 40},
  [1132] = {.lex_state = 40},
  [1133] = {.lex_state = 40},
  [1134] = {.lex_state = 40},
  [1135] = {.lex_state = 40},
  [1136] = {.lex_state = 40},
  [1137] = {.lex_state = 40},
  [1138] = {.lex_state = 40},
  [1139] = {.lex_state = 40},
  [1140] = {.lex_state = 40},
  [1141] = {.lex_state = 40},
  [1142] = {.lex_state = 40},
  [1143] = {.lex_state = 40},
  [1144] = {.lex_state = 40},
  [1145] = {.lex_state = 40},
  [1146] = {.lex_state = 40},
  [1147] = {.lex_state = 40},
  [1148] = {.lex_state = 40},
  [1149] = {.lex_state = 40},
  [1150] = {.lex_state = 40},
  [1151] = {.lex_state = 40},
  [1152] = {.lex_state = 40},
  [1153] = {.lex_state = 40},
  [1154] = {.lex_state = 40},
  [1155] = {.lex_state = 40},
  [1156] = {.lex_state = 40},
  [1157] = {.lex_state = 40},
  [1158] = {.lex_state = 40},
  [1159] = {.lex_state = 40},
  [1160] = {.lex_state = 40},
  [1161] = {.lex_state = 40},
  [1162] = {.lex_state = 40},
  [1163] = {.lex_state = 40},
  [1164] = {.lex_state = 40},
  [1165] = {.lex_state = 40},
  [1166] = {.lex_state = 40},
  [1167] = {.lex_state = 40},
  [1168] = {.lex_state = 40},
  [1169] = {.lex_state = 40},
  [1170] = {.lex_state = 40},
  [1171] = {.lex_state = 40},
  [1172] = {.lex_state = 40},
  [1173] = {.lex_state = 40},
  [1174] = {.lex_state = 40},
  [1175] = {.lex_state = 40},
  [1176] = {.lex_state = 41},
  [1177] = {.lex_state = 40},
  [1178] = {.lex_state = 40},
  [1179] = {.lex_state = 40},
  [1180] = {.lex_state = 40},
  [1181] = {.lex_state = 40},
  [1182] = {.lex_state = 40},
  [1183] = {.lex_state = 40},
  [1184] = {.lex_state = 40},
  [1185] = {.lex_state = 40},
  [1186] = {.lex_state = 40},
  [1187] = {.lex_state = 40},
  [1188] = {.lex_state = 41},
  [1189] = {.lex_state = 4},
  [1190] = {.lex_state = 41},
  [1191] = {.lex_state = 40},
  [1192] = {.lex_state = 41},
  [1193] = {.lex_state = 40},
  [1194] = {.lex_state = 40},
  [1195] = {.lex_state = 40},
  [1196] = {.lex_state = 3},
  [1197] = {.lex_state = 40},
  [1198] = {.lex_state = 40},
  [1199] = {.lex_state = 40},
  [1200] = {.lex_state = 40},
  [1201] = {.lex_state = 40},
  [1202] = {.lex_state = 40},
  [1203] = {.lex_state = 4},
  [1204] = {.lex_state = 3},
  [1205] = {.lex_state = 41},
  [1206] = {.lex_state = 40},
  [1207] = {.lex_state = 41},
  [1208] = {.lex_state = 41},
  [1209] = {.lex_state = 41},
  [1210] = {.lex_state = 41},
  [1211] = {.lex_state = 40},
  [1212] = {.lex_state = 40},
  [1213] = {.lex_state = 41},
  [1214] = {.lex_state = 40},
  [1215] = {.lex_state = 40},
  [1216] = {.lex_state = 40},
  [1217] = {.lex_state = 40},
  [1218] = {.lex_state = 40},
  [1219] = {.lex_state = 41},
  [1220] = {.lex_state = 40},
  [1221] = {.lex_state = 41},
  [1222] = {.lex_state = 4},
  [1223] = {.lex_state = 40},
  [1224] = {.lex_state = 3},
  [1225] = {.lex_state = 40},
  [1226] = {.lex_state = 40},
  [1227] = {.lex_state = 41},
  [1228] = {.lex_state = 41},
  [1229] = {.lex_state = 40},
  [1230] = {.lex_state = 40},
  [1231] = {.lex_state = 41},
  [1232] = {.lex_state = 40},
  [1233] = {.lex_state = 40},
  [1234] = {.lex_state = 40},
  [1235] = {.lex_state = 40},
  [1236] = {.lex_state = 41},
  [1237] = {.lex_state = 41},
  [1238] = {.lex_state = 4},
  [1239] = {.lex_state = 41},
  [1240] = {.lex_state = 40},
  [1241] = {.lex_state = 40},
  [1242] = {.lex_state = 3},
  [1243] = {.lex_state = 40},
  [1244] = {.lex_state = 40},
  [1245] = {.lex_state = 4},
  [1246] = {.lex_state = 4},
  [1247] = {.lex_state = 3},
  [1248] = {.lex_state = 3},
  [1249] = {.lex_state = 40},
  [1250] = {.lex_state = 4},
  [1251] = {.lex_state = 41},
  [1252] = {.lex_state = 41},
  [1253] = {.lex_state = 41},
  [1254] = {.lex_state = 3},
  [1255] = {.lex_state = 41},
  [1256] = {.lex_state = 4},
  [1257] = {.lex_state = 41},
  [1258] = {.lex_state = 40},
  [1259] = {.lex_state = 40},
  [1260] = {.lex_state = 4},
  [1261] = {.lex_state = 3},
  [1262] = {.lex_state = 4},
  [1263] = {.lex_state = 40},
  [1264] = {.lex_state = 3},
  [1265] = {.lex_state = 40},
  [1266] = {.lex_state = 3},
  [1267] = {.lex_state = 3},
  [1268] = {.lex_state = 3},
  [1269] = {.lex_state = 4},
  [1270] = {.lex_state = 3},
  [1271] = {.lex_state = 4},
  [1272] = {.lex_state = 11},
  [1273] = {.lex_state = 3},
  [1274] = {.lex_state = 4},
  [1275] = {.lex_state = 3},
  [1276] = {.lex_state = 4},
  [1277] = {.lex_state = 11},
  [1278] = {.lex_state = 11},
  [1279] = {.lex_state = 3},
  [1280] = {.lex_state = 41},
  [1281] = {.lex_state = 41},
  [1282] = {.lex_state = 3},
  [1283] = {.lex_state = 11},
  [1284] = {.lex_state = 4},
  [1285] = {.lex_state = 3},
  [1286] = {.lex_state = 41},
  [1287] = {.lex_state = 3},
  [1288] = {.lex_state = 3},
  [1289] = {.lex_state = 3},
  [1290] = {.lex_state = 41},
  [1291] = {.lex_state = 3},
  [1292] = {.lex_state = 4},
  [1293] = {.lex_state = 4},
  [1294] = {.lex_state = 4},
  [1295] = {.lex_state = 3},
  [1296] = {.lex_state = 11},
  [1297] = {.lex_state = 3},
  [1298] = {.lex_state = 3},
  [1299] = {.lex_state = 4},
  [1300] = {.lex_state = 4},
  [1301] = {.lex_state = 3},
  [1302] = {.lex_state = 41},
  [1303] = {.lex_state = 3},
  [1304] = {.lex_state = 4},
  [1305] = {.lex_state = 41},
  [1306] = {.lex_state = 3},
  [1307] = {.lex_state = 40},
  [1308] = {.lex_state = 41},
  [1309] = {.lex_state = 4},
  [1310] = {.lex_state = 4},
  [1311] = {.lex_state = 4},
  [1312] = {.lex_state = 4},
  [1313] = {.lex_state = 4},
  [1314] = {.lex_state = 4},
  [1315] = {.lex_state = 11},
  [1316] = {.lex_state = 3},
  [1317] = {.lex_state = 4},
  [1318] = {.lex_state = 4},
  [1319] = {.lex_state = 4},
  [1320] = {.lex_state = 4},
  [1321] = {.lex_state = 3},
  [1322] = {.lex_state = 4},
  [1323] = {.lex_state = 3},
  [1324] = {.lex_state = 3},
  [1325] = {.lex_state = 41},
  [1326] = {.lex_state = 4},
  [1327] = {.lex_state = 3},
  [1328] = {.lex_state = 4},
  [1329] = {.lex_state = 41},
  [1330] = {.lex_state = 41},
  [1331] = {.lex_state = 11},
  [1332] = {.lex_state = 11},
  [1333] = {.lex_state = 11},
  [1334] = {.lex_state = 11},
  [1335] = {.lex_state = 11},
  [1336] = {.lex_state = 11},
  [1337] = {.lex_state = 11},
  [1338] = {.lex_state = 11},
  [1339] = {.lex_state = 41},
  [1340] = {.lex_state = 11},
  [1341] = {.lex_state = 11},
  [1342] = {.lex_state = 11},
  [1343] = {.lex_state = 11},
  [1344] = {.lex_state = 11},
  [1345] = {.lex_state = 11},
  [1346] = {.lex_state = 11},
  [1347] = {.lex_state = 11},
  [1348] = {.lex_state = 11},
  [1349] = {.lex_state = 11},
  [1350] = {.lex_state = 11},
  [1351] = {.lex_state = 41},
  [1352] = {.lex_state = 41},
  [1353] = {.lex_state = 11},
  [1354] = {.lex_state = 11},
  [1355] = {.lex_state = 11},
  [1356] = {.lex_state = 41},
  [1357] = {.lex_state = 11},
  [1358] = {.lex_state = 41},
  [1359] = {.lex_state = 11},
  [1360] = {.lex_state = 41},
  [1361] = {.lex_state = 41},
  [1362] = {.lex_state = 41},
  [1363] = {.lex_state = 11},
  [1364] = {.lex_state = 41},
  [1365] = {.lex_state = 11},
  [1366] = {.lex_state = 41},
  [1367] = {.lex_state = 11},
  [1368] = {.lex_state = 11},
  [1369] = {.lex_state = 11},
  [1370] = {.lex_state = 11},
  [1371] = {.lex_state = 11},
  [1372] = {.lex_state = 11},
  [1373] = {.lex_state = 41},
  [1374] = {.lex_state = 41},
  [1375] = {.lex_state = 41},
  [1376] = {.lex_state = 41},
  [1377] = {.lex_state = 41},
  [1378] = {.lex_state = 11},
  [1379] = {.lex_state = 11},
  [1380] = {.lex_state = 11},
  [1381] = {.lex_state = 11},
  [1382] = {.lex_state = 11},
  [1383] = {.lex_state = 41},
  [1384] = {.lex_state = 11},
  [1385] = {.lex_state = 41},
  [1386] = {.lex_state = 41},
  [1387] = {.lex_state = 41},
  [1388] = {.lex_state = 41},
  [1389] = {.lex_state = 41},
  [1390] = {.lex_state = 41},
  [1391] = {.lex_state = 41},
  [1392] = {.lex_state = 41},
  [1393] = {.lex_state = 41},
  [1394] = {.lex_state = 41},
  [1395] = {.lex_state = 41},
  [1396] = {.lex_state = 41},
  [1397] = {.lex_state = 41},
  [1398] = {.lex_state = 41},
  [1399] = {.lex_state = 41},
  [1400] = {.lex_state = 41},
  [1401] = {.lex_state = 41},
  [1402] = {.lex_state = 41},
  [1403] = {.lex_state = 41},
  [1404] = {.lex_state = 41},
  [1405] = {.lex_state = 41},
  [1406] = {.lex_state = 41},
  [1407] = {.lex_state = 11},
  [1408] = {.lex_state = 11},
  [1409] = {.lex_state = 11},
  [1410] = {.lex_state = 41},
  [1411] = {.lex_state = 41},
  [1412] = {.lex_state = 11},
  [1413] = {.lex_state = 11},
  [1414] = {.lex_state = 11},
  [1415] = {.lex_state = 41},
  [1416] = {.lex_state = 11},
  [1417] = {.lex_state = 11},
  [1418] = {.lex_state = 11},
  [1419] = {.lex_state = 11},
  [1420] = {.lex_state = 11},
  [1421] = {.lex_state = 11},
  [1422] = {.lex_state = 11},
  [1423] = {.lex_state = 11},
  [1424] = {.lex_state = 11},
  [1425] = {.lex_state = 41},
  [1426] = {.lex_state = 41},
  [1427] = {.lex_state = 11},
  [1428] = {.lex_state = 11},
  [1429] = {.lex_state = 11},
  [1430] = {.lex_state = 11},
  [1431] = {.lex_state = 11},
  [1432] = {.lex_state = 11},
  [1433] = {.lex_state = 11},
  [1434] = {.lex_state = 11},
  [1435] = {.lex_state = 11},
  [1436] = {.lex_state = 11},
  [1437] = {.lex_state = 11},
  [1438] = {.lex_state = 11},
  [1439] = {.lex_state = 11},
  [1440] = {.lex_state = 11},
  [1441] = {.lex_state = 11},
  [1442] = {.lex_state = 11},
  [1443] = {.lex_state = 11},
  [1444] = {.lex_state = 11},
  [1445] = {.lex_state = 11},
  [1446] = {.lex_state = 11},
  [1447] = {.lex_state = 11},
  [1448] = {.lex_state = 11},
  [1449] = {.lex_state = 11},
  [1450] = {.lex_state = 11},
  [1451] = {.lex_state = 11},
  [1452] = {.lex_state = 11},
  [1453] = {.lex_state = 11},
  [1454] = {.lex_state = 11},
  [1455] = {.lex_state = 11},
  [1456] = {.lex_state = 41},
  [1457] = {.lex_state = 41},
  [1458] = {.lex_state = 41},
  [1459] = {.lex_state = 41},
  [1460] = {.lex_state = 41},
  [1461] = {.lex_state = 41},
  [1462] = {.lex_state = 41},
  [1463] = {.lex_state = 41},
  [1464] = {.lex_state = 41},
  [1465] = {.lex_state = 41},
  [1466] = {.lex_state = 41},
  [1467] = {.lex_state = 41},
  [1468] = {.lex_state = 41},
  [1469] = {.lex_state = 41},
  [1470] = {.lex_state = 40},
  [1471] = {.lex_state = 40},
  [1472] = {.lex_state = 40},
  [1473] = {.lex_state = 40},
  [1474] = {.lex_state = 41},
  [1475] = {.lex_state = 41},
  [1476] = {.lex_state = 40},
  [1477] = {.lex_state = 40},
  [1478] = {.lex_state = 40},
  [1479] = {.lex_state = 40},
  [1480] = {.lex_state = 40},
  [1481] = {.lex_state = 40},
  [1482] = {.lex_state = 41},
  [1483] = {.lex_state = 41},
  [1484] = {.lex_state = 40},
  [1485] = {.lex_state = 40},
  [1486] = {.lex_state = 41},
  [1487] = {.lex_state = 40},
  [1488] = {.lex_state = 3},
  [1489] = {.lex_state = 41},
  [1490] = {.lex_state = 3},
  [1491] = {.lex_state = 40},
  [1492] = {.lex_state = 40},
  [1493] = {.lex_state = 40},
  [1494] = {.lex_state = 3},
  [1495] = {.lex_state = 40},
  [1496] = {.lex_state = 40},
  [1497] = {.lex_state = 3},
  [1498] = {.lex_state = 4},
  [1499] = {.lex_state = 3},
  [1500] = {.lex_state = 3},
  [1501] = {.lex_state = 41},
  [1502] = {.lex_state = 3},
  [1503] = {.lex_state = 3},
  [1504] = {.lex_state = 3},
  [1505] = {.lex_state = 40},
  [1506] = {.lex_state = 41},
  [1507] = {.lex_state = 40},
  [1508] = {.lex_state = 40},
  [1509] = {.lex_state = 3},
  [1510] = {.lex_state = 3},
  [1511] = {.lex_state = 3},
  [1512] = {.lex_state = 3},
  [1513] = {.lex_state = 41},
  [1514] = {.lex_state = 40},
  [1515] = {.lex_state = 40},
  [1516] = {.lex_state = 3},
  [1517] = {.lex_state = 40},
  [1518] = {.lex_state = 3},
  [1519] = {.lex_state = 4},
  [1520] = {.lex_state = 3},
  [1521] = {.lex_state = 40},
  [1522] = {.lex_state = 40},
  [1523] = {.lex_state = 3},
  [1524] = {.lex_state = 3},
  [1525] = {.lex_state = 3},
  [1526] = {.lex_state = 3},
  [1527] = {.lex_state = 40},
  [1528] = {.lex_state = 40},
  [1529] = {.lex_state = 40},
  [1530] = {.lex_state = 3},
  [1531] = {.lex_state = 40},
  [1532] = {.lex_state = 40},
  [1533] = {.lex_state = 40},
  [1534] = {.lex_state = 3},
  [1535] = {.lex_state = 3},
  [1536] = {.lex_state = 3},
  [1537] = {.lex_state = 3},
  [1538] = {.lex_state = 41},
  [1539] = {.lex_state = 40},
  [1540] = {.lex_state = 41},
  [1541] = {.lex_state = 41},
  [1542] = {.lex_state = 41},
  [1543] = {.lex_state = 3},
  [1544] = {.lex_state = 41},
  [1545] = {.lex_state = 40},
  [1546] = {.lex_state = 41},
  [1547] = {.lex_state = 6},
  [1548] = {.lex_state = 3},
  [1549] = {.lex_state = 41},
  [1550] = {.lex_state = 41},
  [1551] = {.lex_state = 41},
  [1552] = {.lex_state = 41},
  [1553] = {.lex_state = 41},
  [1554] = {.lex_state = 6},
  [1555] = {.lex_state = 41},
  [1556] = {.lex_state = 40},
  [1557] = {.lex_state = 41},
  [1558] = {.lex_state = 41},
  [1559] = {.lex_state = 41},
  [1560] = {.lex_state = 41},
  [1561] = {.lex_state = 41},
  [1562] = {.lex_state = 41},
  [1563] = {.lex_state = 40},
  [1564] = {.lex_state = 41},
  [1565] = {.lex_state = 41},
  [1566] = {.lex_state = 41},
  [1567] = {.lex_state = 41},
  [1568] = {.lex_state = 41},
  [1569] = {.lex_state = 41},
  [1570] = {.lex_state = 41},
  [1571] = {.lex_state = 41},
  [1572] = {.lex_state = 41},
  [1573] = {.lex_state = 41},
  [1574] = {.lex_state = 41},
  [1575] = {.lex_state = 41},
  [1576] = {.lex_state = 41},
  [1577] = {.lex_state = 41},
  [1578] = {.lex_state = 41},
  [1579] = {.lex_state = 41},
  [1580] = {.lex_state = 41},
  [1581] = {.lex_state = 41},
  [1582] = {.lex_state = 41},
  [1583] = {.lex_state = 41},
  [1584] = {.lex_state = 41},
  [1585] = {.lex_state = 41},
  [1586] = {.lex_state = 41},
  [1587] = {.lex_state = 40},
  [1588] = {.lex_state = 41},
  [1589] = {.lex_state = 41},
  [1590] = {.lex_state = 41},
  [1591] = {.lex_state = 41},
  [1592] = {.lex_state = 41},
  [1593] = {.lex_state = 41},
  [1594] = {.lex_state = 41},
  [1595] = {.lex_state = 41},
  [1596] = {.lex_state = 11},
  [1597] = {.lex_state = 41},
  [1598] = {.lex_state = 41},
  [1599] = {.lex_state = 41},
  [1600] = {.lex_state = 41},
  [1601] = {.lex_state = 40},
  [1602] = {.lex_state = 41},
  [1603] = {.lex_state = 41},
  [1604] = {.lex_state = 41},
  [1605] = {.lex_state = 41},
  [1606] = {.lex_state = 41},
  [1607] = {.lex_state = 41},
  [1608] = {.lex_state = 40},
  [1609] = {.lex_state = 41},
  [1610] = {.lex_state = 41},
  [1611] = {.lex_state = 41},
  [1612] = {.lex_state = 41},
  [1613] = {.lex_state = 41},
  [1614] = {.lex_state = 40},
  [1615] = {.lex_state = 41},
  [1616] = {.lex_state = 41},
  [1617] = {.lex_state = 41},
  [1618] = {.lex_state = 40},
  [1619] = {.lex_state = 40},
  [1620] = {.lex_state = 40},
  [1621] = {.lex_state = 40},
  [1622] = {.lex_state = 40},
  [1623] = {.lex_state = 41},
  [1624] = {.lex_state = 11},
  [1625] = {.lex_state = 40},
  [1626] = {.lex_state = 40},
  [1627] = {.lex_state = 40},
  [1628] = {.lex_state = 40},
  [1629] = {.lex_state = 40},
  [1630] = {.lex_state = 11},
  [1631] = {.lex_state = 40},
  [1632] = {.lex_state = 11},
  [1633] = {.lex_state = 40},
  [1634] = {.lex_state = 40},
  [1635] = {.lex_state = 40},
  [1636] = {.lex_state = 40},
  [1637] = {.lex_state = 40},
  [1638] = {.lex_state = 40},
  [1639] = {.lex_state = 41},
  [1640] = {.lex_state = 41},
  [1641] = {.lex_state = 41},
  [1642] = {.lex_state = 40},
  [1643] = {.lex_state = 41},
  [1644] = {.lex_state = 40},
  [1645] = {.lex_state = 40},
  [1646] = {.lex_state = 40},
  [1647] = {.lex_state = 41},
  [1648] = {.lex_state = 40},
  [1649] = {.lex_state = 40},
  [1650] = {.lex_state = 40},
  [1651] = {.lex_state = 40},
  [1652] = {.lex_state = 40},
  [1653] = {.lex_state = 40},
  [1654] = {.lex_state = 40},
  [1655] = {.lex_state = 40},
  [1656] = {.lex_state = 40},
  [1657] = {.lex_state = 40},
  [1658] = {.lex_state = 40},
  [1659] = {.lex_state = 40},
  [1660] = {.lex_state = 40},
  [1661] = {.lex_state = 40},
  [1662] = {.lex_state = 40},
  [1663] = {.lex_state = 40},
  [1664] = {.lex_state = 40},
  [1665] = {.lex_state = 40},
  [1666] = {.lex_state = 40},
  [1667] = {.lex_state = 40},
  [1668] = {.lex_state = 40},
  [1669] = {.lex_state = 40},
  [1670] = {.lex_state = 40},
  [1671] = {.lex_state = 40},
  [1672] = {.lex_state = 40},
  [1673] = {.lex_state = 40},
  [1674] = {.lex_state = 40},
  [1675] = {.lex_state = 40},
  [1676] = {.lex_state = 40},
  [1677] = {.lex_state = 40},
  [1678] = {.lex_state = 40},
  [1679] = {.lex_state = 40},
  [1680] = {.lex_state = 40},
  [1681] = {.lex_state = 40},
  [1682] = {.lex_state = 41},
  [1683] = {.lex_state = 40},
  [1684] = {.lex_state = 40},
  [1685] = {.lex_state = 40},
  [1686] = {.lex_state = 40},
  [1687] = {.lex_state = 40},
  [1688] = {.lex_state = 40},
  [1689] = {.lex_state = 40},
  [1690] = {.lex_state = 40},
  [1691] = {.lex_state = 40},
  [1692] = {.lex_state = 40},
  [1693] = {.lex_state = 40},
  [1694] = {.lex_state = 40},
  [1695] = {.lex_state = 40},
  [1696] = {.lex_state = 40},
  [1697] = {.lex_state = 40},
  [1698] = {.lex_state = 40},
  [1699] = {.lex_state = 40},
  [1700] = {.lex_state = 40},
  [1701] = {.lex_state = 40},
  [1702] = {.lex_state = 40},
  [1703] = {.lex_state = 40},
  [1704] = {.lex_state = 40},
  [1705] = {.lex_state = 40},
  [1706] = {.lex_state = 40},
  [1707] = {.lex_state = 40},
  [1708] = {.lex_state = 40},
  [1709] = {.lex_state = 40},
  [1710] = {.lex_state = 41},
  [1711] = {.lex_state = 40},
  [1712] = {.lex_state = 40},
  [1713] = {.lex_state = 40},
  [1714] = {.lex_state = 40},
  [1715] = {.lex_state = 40},
  [1716] = {.lex_state = 40},
  [1717] = {.lex_state = 40},
  [1718] = {.lex_state = 40},
  [1719] = {.lex_state = 40},
  [1720] = {.lex_state = 40},
  [1721] = {.lex_state = 40},
  [1722] = {.lex_state = 40},
  [1723] = {.lex_state = 40},
  [1724] = {.lex_state = 40},
  [1725] = {.lex_state = 40},
  [1726] = {.lex_state = 40},
  [1727] = {.lex_state = 40},
  [1728] = {.lex_state = 40},
  [1729] = {.lex_state = 40},
  [1730] = {.lex_state = 40},
  [1731] = {.lex_state = 40},
  [1732] = {.lex_state = 40},
  [1733] = {.lex_state = 40},
  [1734] = {.lex_state = 40},
  [1735] = {.lex_state = 40},
  [1736] = {.lex_state = 40},
  [1737] = {.lex_state = 40},
  [1738] = {.lex_state = 40},
  [1739] = {.lex_state = 40},
  [1740] = {.lex_state = 40},
  [1741] = {.lex_state = 40},
  [1742] = {.lex_state = 40},
  [1743] = {.lex_state = 40},
  [1744] = {.lex_state = 40},
  [1745] = {.lex_state = 40},
  [1746] = {.lex_state = 40},
  [1747] = {.lex_state = 40},
  [1748] = {.lex_state = 40},
  [1749] = {.lex_state = 40},
  [1750] = {.lex_state = 40},
  [1751] = {.lex_state = 40},
  [1752] = {.lex_state = 41},
  [1753] = {.lex_state = 40},
  [1754] = {.lex_state = 41},
  [1755] = {.lex_state = 40},
  [1756] = {.lex_state = 41},
  [1757] = {.lex_state = 40},
  [1758] = {.lex_state = 40},
  [1759] = {.lex_state = 40},
  [1760] = {.lex_state = 40},
  [1761] = {.lex_state = 40},
  [1762] = {.lex_state = 40},
  [1763] = {.lex_state = 41},
  [1764] = {.lex_state = 41},
  [1765] = {.lex_state = 41},
  [1766] = {.lex_state = 40},
  [1767] = {.lex_state = 40},
  [1768] = {.lex_state = 40},
  [1769] = {.lex_state = 40},
  [1770] = {.lex_state = 40},
  [1771] = {.lex_state = 40},
  [1772] = {.lex_state = 41},
  [1773] = {.lex_state = 40},
  [1774] = {.lex_state = 40},
  [1775] = {.lex_state = 41},
  [1776] = {.lex_state = 40},
  [1777] = {.lex_state = 40},
  [1778] = {.lex_state = 40},
  [1779] = {.lex_state = 41},
  [1780] = {.lex_state = 40},
  [1781] = {.lex_state = 40},
  [1782] = {.lex_state = 40},
  [1783] = {.lex_state = 40},
  [1784] = {.lex_state = 40},
  [1785] = {.lex_state = 40},
  [1786] = {.lex_state = 40},
  [1787] = {.lex_state = 40},
  [1788] = {.lex_state = 40},
  [1789] = {.lex_state = 40},
  [1790] = {.lex_state = 40},
  [1791] = {.lex_state = 40},
  [1792] = {.lex_state = 40},
  [1793] = {.lex_state = 40},
  [1794] = {.lex_state = 40},
  [1795] = {.lex_state = 40},
  [1796] = {.lex_state = 40},
  [1797] = {.lex_state = 40},
  [1798] = {.lex_state = 40},
  [1799] = {.lex_state = 40},
  [1800] = {.lex_state = 41},
  [1801] = {.lex_state = 40},
  [1802] = {.lex_state = 40},
  [1803] = {.lex_state = 40},
  [1804] = {.lex_state = 40},
  [1805] = {.lex_state = 40},
  [1806] = {.lex_state = 40},
  [1807] = {.lex_state = 40},
  [1808] = {.lex_state = 40},
  [1809] = {.lex_state = 40},
  [1810] = {.lex_state = 40},
  [1811] = {.lex_state = 40},
  [1812] = {.lex_state = 40},
  [1813] = {.lex_state = 40},
  [1814] = {.lex_state = 40},
  [1815] = {.lex_state = 40},
  [1816] = {.lex_state = 40},
  [1817] = {.lex_state = 40},
  [1818] = {.lex_state = 40},
  [1819] = {.lex_state = 40},
  [1820] = {.lex_state = 40},
  [1821] = {.lex_state = 40},
  [1822] = {.lex_state = 40},
  [1823] = {.lex_state = 40},
  [1824] = {.lex_state = 40},
  [1825] = {.lex_state = 40},
  [1826] = {.lex_state = 40},
  [1827] = {.lex_state = 40},
  [1828] = {.lex_state = 40},
  [1829] = {.lex_state = 40},
  [1830] = {.lex_state = 40},
  [1831] = {.lex_state = 40},
  [1832] = {.lex_state = 40},
  [1833] = {.lex_state = 40},
  [1834] = {.lex_state = 40},
  [1835] = {.lex_state = 40},
  [1836] = {.lex_state = 40},
  [1837] = {.lex_state = 40},
  [1838] = {.lex_state = 40},
  [1839] = {.lex_state = 40},
  [1840] = {.lex_state = 40},
  [1841] = {.lex_state = 40},
  [1842] = {.lex_state = 40},
  [1843] = {.lex_state = 40},
  [1844] = {.lex_state = 40},
  [1845] = {.lex_state = 40},
  [1846] = {.lex_state = 40},
  [1847] = {.lex_state = 40},
  [1848] = {.lex_state = 40},
  [1849] = {.lex_state = 40},
  [1850] = {.lex_state = 40},
  [1851] = {.lex_state = 40},
  [1852] = {.lex_state = 40},
  [1853] = {.lex_state = 40},
  [1854] = {.lex_state = 40},
  [1855] = {.lex_state = 40},
  [1856] = {.lex_state = 40},
  [1857] = {.lex_state = 40},
  [1858] = {.lex_state = 40},
  [1859] = {.lex_state = 40},
  [1860] = {.lex_state = 40},
  [1861] = {.lex_state = 40},
  [1862] = {.lex_state = 40},
  [1863] = {.lex_state = 40},
  [1864] = {.lex_state = 4},
  [1865] = {.lex_state = 10},
  [1866] = {.lex_state = 4},
  [1867] = {.lex_state = 10},
  [1868] = {.lex_state = 10},
  [1869] = {.lex_state = 10},
  [1870] = {.lex_state = 40},
  [1871] = {.lex_state = 10},
  [1872] = {.lex_state = 40},
  [1873] = {.lex_state = 40},
  [1874] = {.lex_state = 10},
  [1875] = {.lex_state = 10},
  [1876] = {.lex_state = 40},
  [1877] = {.lex_state = 10},
  [1878] = {.lex_state = 4},
  [1879] = {.lex_state = 40},
  [1880] = {.lex_state = 4},
  [1881] = {.lex_state = 10},
  [1882] = {.lex_state = 10},
  [1883] = {.lex_state = 40},
  [1884] = {.lex_state = 40},
  [1885] = {.lex_state = 40},
  [1886] = {.lex_state = 40},
  [1887] = {.lex_state = 6},
  [1888] = {.lex_state = 10},
  [1889] = {.lex_state = 40},
  [1890] = {.lex_state = 40},
  [1891] = {.lex_state = 40},
  [1892] = {.lex_state = 40},
  [1893] = {.lex_state = 41},
  [1894] = {.lex_state = 40},
  [1895] = {.lex_state = 40},
  [1896] = {.lex_state = 40},
  [1897] = {.lex_state = 40},
  [1898] = {.lex_state = 40},
  [1899] = {.lex_state = 40},
  [1900] = {.lex_state = 40},
  [1901] = {.lex_state = 1},
  [1902] = {.lex_state = 1},
  [1903] = {.lex_state = 6},
  [1904] = {.lex_state = 40},
  [1905] = {.lex_state = 40},
  [1906] = {.lex_state = 40},
  [1907] = {.lex_state = 40},
  [1908] = {.lex_state = 4},
  [1909] = {.lex_state = 6},
  [1910] = {.lex_state = 40},
  [1911] = {.lex_state = 6},
  [1912] = {.lex_state = 40},
  [1913] = {.lex_state = 6},
  [1914] = {.lex_state = 40},
  [1915] = {.lex_state = 40},
  [1916] = {.lex_state = 40},
  [1917] = {.lex_state = 40},
  [1918] = {.lex_state = 41},
  [1919] = {.lex_state = 40},
  [1920] = {.lex_state = 6},
  [1921] = {.lex_state = 40},
  [1922] = {.lex_state = 40},
  [1923] = {.lex_state = 40},
  [1924] = {.lex_state = 40},
  [1925] = {.lex_state = 40},
  [1926] = {.lex_state = 40},
  [1927] = {.lex_state = 40},
  [1928] = {.lex_state = 40},
  [1929] = {.lex_state = 40},
  [1930] = {.lex_state = 40},
  [1931] = {.lex_state = 6},
  [1932] = {.lex_state = 40},
  [1933] = {.lex_state = 41},
  [1934] = {.lex_state = 41},
  [1935] = {.lex_state = 40},
  [1936] = {.lex_state = 40},
  [1937] = {.lex_state = 40},
  [1938] = {.lex_state = 6},
  [1939] = {.lex_state = 40},
  [1940] = {.lex_state = 6},
  [1941] = {.lex_state = 40},
  [1942] = {.lex_state = 40},
  [1943] = {.lex_state = 40},
  [1944] = {.lex_state = 40},
  [1945] = {.lex_state = 40},
  [1946] = {.lex_state = 40},
  [1947] = {.lex_state = 40},
  [1948] = {.lex_state = 41},
  [1949] = {.lex_state = 6},
  [1950] = {.lex_state = 1},
  [1951] = {.lex_state = 40},
  [1952] = {.lex_state = 40},
  [1953] = {.lex_state = 40},
  [1954] = {.lex_state = 1},
  [1955] = {.lex_state = 40},
  [1956] = {.lex_state = 1},
  [1957] = {.lex_state = 40},
  [1958] = {.lex_state = 41},
  [1959] = {.lex_state = 40},
  [1960] = {.lex_state = 40},
  [1961] = {.lex_state = 41},
  [1962] = {.lex_state = 40},
  [1963] = {.lex_state = 40},
  [1964] = {.lex_state = 40},
  [1965] = {.lex_state = 1},
  [1966] = {.lex_state = 40},
  [1967] = {.lex_state = 40},
  [1968] = {.lex_state = 40},
  [1969] = {.lex_state = 40},
  [1970] = {.lex_state = 1},
  [1971] = {.lex_state = 40},
  [1972] = {.lex_state = 40},
  [1973] = {.lex_state = 6},
  [1974] = {.lex_state = 40},
  [1975] = {.lex_state = 40},
  [1976] = {.lex_state = 41},
  [1977] = {.lex_state = 40},
  [1978] = {.lex_state = 40},
  [1979] = {.lex_state = 40},
  [1980] = {.lex_state = 40},
  [1981] = {.lex_state = 41},
  [1982] = {.lex_state = 40},
  [1983] = {.lex_state = 40},
  [1984] = {.lex_state = 41},
  [1985] = {.lex_state = 40},
  [1986] = {.lex_state = 40},
  [1987] = {.lex_state = 40},
  [1988] = {.lex_state = 40},
  [1989] = {.lex_state = 40},
  [1990] = {.lex_state = 41},
  [1991] = {.lex_state = 40},
  [1992] = {.lex_state = 40},
  [1993] = {.lex_state = 40},
  [1994] = {.lex_state = 40},
  [1995] = {.lex_state = 41},
  [1996] = {.lex_state = 40},
  [1997] = {.lex_state = 40},
  [1998] = {.lex_state = 40},
  [1999] = {.lex_state = 40},
  [2000] = {.lex_state = 40},
  [2001] = {.lex_state = 40},
  [2002] = {.lex_state = 40},
  [2003] = {.lex_state = 40},
  [2004] = {.lex_state = 40},
  [2005] = {.lex_state = 40},
  [2006] = {.lex_state = 40},
  [2007] = {.lex_state = 40},
  [2008] = {.lex_state = 40},
  [2009] = {.lex_state = 40},
  [2010] = {.lex_state = 40},
  [2011] = {.lex_state = 41},
  [2012] = {.lex_state = 40},
  [2013] = {.lex_state = 40},
  [2014] = {.lex_state = 40},
  [2015] = {.lex_state = 40},
  [2016] = {.lex_state = 40},
  [2017] = {.lex_state = 40},
  [2018] = {.lex_state = 40},
  [2019] = {.lex_state = 40},
  [2020] = {.lex_state = 1},
  [2021] = {.lex_state = 40},
  [2022] = {.lex_state = 1},
  [2023] = {.lex_state = 1},
  [2024] = {.lex_state = 40},
  [2025] = {.lex_state = 40},
  [2026] = {.lex_state = 40},
  [2027] = {.lex_state = 40},
  [2028] = {.lex_state = 1},
  [2029] = {.lex_state = 6},
  [2030] = {.lex_state = 40},
  [2031] = {.lex_state = 40},
  [2032] = {.lex_state = 40},
  [2033] = {.lex_state = 40},
  [2034] = {.lex_state = 40},
  [2035] = {.lex_state = 40},
  [2036] = {.lex_state = 40},
  [2037] = {.lex_state = 40},
  [2038] = {.lex_state = 40},
  [2039] = {.lex_state = 40},
  [2040] = {.lex_state = 1},
  [2041] = {.lex_state = 40},
  [2042] = {.lex_state = 40},
  [2043] = {.lex_state = 40},
  [2044] = {.lex_state = 40},
  [2045] = {.lex_state = 40},
  [2046] = {.lex_state = 1},
  [2047] = {.lex_state = 40},
  [2048] = {.lex_state = 40},
  [2049] = {.lex_state = 40},
  [2050] = {.lex_state = 40},
  [2051] = {.lex_state = 40},
  [2052] = {.lex_state = 40},
  [2053] = {.lex_state = 40},
  [2054] = {.lex_state = 40},
  [2055] = {.lex_state = 40},
  [2056] = {.lex_state = 40},
  [2057] = {.lex_state = 40},
  [2058] = {.lex_state = 1},
  [2059] = {.lex_state = 1},
  [2060] = {.lex_state = 1},
  [2061] = {.lex_state = 1},
  [2062] = {.lex_state = 40},
  [2063] = {.lex_state = 40},
  [2064] = {.lex_state = 1},
  [2065] = {.lex_state = 40},
  [2066] = {.lex_state = 6},
  [2067] = {.lex_state = 40},
  [2068] = {.lex_state = 40},
  [2069] = {.lex_state = 40},
  [2070] = {.lex_state = 40},
  [2071] = {.lex_state = 1},
  [2072] = {.lex_state = 40},
  [2073] = {.lex_state = 40},
  [2074] = {.lex_state = 40},
  [2075] = {.lex_state = 40},
  [2076] = {.lex_state = 40},
  [2077] = {.lex_state = 40},
  [2078] = {.lex_state = 40},
  [2079] = {.lex_state = 40},
  [2080] = {.lex_state = 40},
  [2081] = {.lex_state = 40},
  [2082] = {.lex_state = 40},
  [2083] = {.lex_state = 1},
  [2084] = {.lex_state = 40},
  [2085] = {.lex_state = 40},
  [2086] = {.lex_state = 40},
  [2087] = {.lex_state = 6},
  [2088] = {.lex_state = 40},
  [2089] = {.lex_state = 6},
  [2090] = {.lex_state = 40},
  [2091] = {.lex_state = 40},
  [2092] = {.lex_state = 40},
  [2093] = {.lex_state = 40},
  [2094] = {.lex_state = 6},
  [2095] = {.lex_state = 1},
  [2096] = {.lex_state = 1},
  [2097] = {.lex_state = 6},
  [2098] = {.lex_state = 40},
  [2099] = {.lex_state = 40},
  [2100] = {.lex_state = 40},
  [2101] = {.lex_state = 40},
  [2102] = {.lex_state = 40},
  [2103] = {.lex_state = 40},
  [2104] = {.lex_state = 1},
  [2105] = {.lex_state = 40},
  [2106] = {.lex_state = 40},
  [2107] = {.lex_state = 40},
  [2108] = {.lex_state = 40},
  [2109] = {.lex_state = 40},
  [2110] = {.lex_state = 40},
  [2111] = {.lex_state = 40},
  [2112] = {.lex_state = 40},
  [2113] = {.lex_state = 40},
  [2114] = {.lex_state = 40},
  [2115] = {.lex_state = 40},
  [2116] = {.lex_state = 1},
  [2117] = {.lex_state = 40},
  [2118] = {.lex_state = 40},
  [2119] = {.lex_state = 40},
  [2120] = {.lex_state = 40},
  [2121] = {.lex_state = 40},
  [2122] = {.lex_state = 40},
  [2123] = {.lex_state = 40},
  [2124] = {.lex_state = 1},
  [2125] = {.lex_state = 1},
  [2126] = {.lex_state = 1},
  [2127] = {.lex_state = 40},
  [2128] = {.lex_state = 40},
  [2129] = {.lex_state = 40},
  [2130] = {.lex_state = 40},
  [2131] = {.lex_state = 40},
  [2132] = {.lex_state = 40},
  [2133] = {.lex_state = 40},
  [2134] = {.lex_state = 40},
  [2135] = {.lex_state = 40},
  [2136] = {.lex_state = 40},
  [2137] = {.lex_state = 40},
  [2138] = {.lex_state = 40},
  [2139] = {.lex_state = 40},
  [2140] = {.lex_state = 6},
  [2141] = {.lex_state = 40},
  [2142] = {.lex_state = 40},
  [2143] = {.lex_state = 40},
  [2144] = {.lex_state = 6},
  [2145] = {.lex_state = 40},
  [2146] = {.lex_state = 40},
  [2147] = {.lex_state = 40},
  [2148] = {.lex_state = 40},
  [2149] = {.lex_state = 40},
  [2150] = {.lex_state = 40},
  [2151] = {.lex_state = 40},
  [2152] = {.lex_state = 40},
  [2153] = {.lex_state = 40},
  [2154] = {.lex_state = 40},
  [2155] = {.lex_state = 40},
  [2156] = {.lex_state = 6},
  [2157] = {.lex_state = 1},
  [2158] = {.lex_state = 1},
  [2159] = {.lex_state = 40},
  [2160] = {.lex_state = 1},
  [2161] = {.lex_state = 40},
  [2162] = {.lex_state = 1},
  [2163] = {.lex_state = 1},
  [2164] = {.lex_state = 40},
  [2165] = {.lex_state = 1},
  [2166] = {.lex_state = 1},
  [2167] = {.lex_state = 1},
  [2168] = {.lex_state = 40},
  [2169] = {.lex_state = 40},
  [2170] = {.lex_state = 1},
  [2171] = {.lex_state = 1},
  [2172] = {.lex_state = 40},
  [2173] = {.lex_state = 40},
  [2174] = {.lex_state = 1},
  [2175] = {.lex_state = 1},
  [2176] = {.lex_state = 1},
  [2177] = {.lex_state = 1},
  [2178] = {.lex_state = 1},
  [2179] = {.lex_state = 40},
  [2180] = {.lex_state = 40},
  [2181] = {.lex_state = 40},
  [2182] = {.lex_state = 40},
  [2183] = {.lex_state = 40},
  [2184] = {.lex_state = 40},
  [2185] = {.lex_state = 40},
  [2186] = {.lex_state = 40},
  [2187] = {.lex_state = 40},
  [2188] = {.lex_state = 40},
  [2189] = {.lex_state = 1},
  [2190] = {.lex_state = 40},
  [2191] = {.lex_state = 40},
  [2192] = {.lex_state = 40},
  [2193] = {.lex_state = 40},
  [2194] = {.lex_state = 40},
  [2195] = {.lex_state = 40},
  [2196] = {.lex_state = 6},
  [2197] = {.lex_state = 40},
  [2198] = {.lex_state = 40},
  [2199] = {.lex_state = 40},
  [2200] = {.lex_state = 40},
  [2201] = {.lex_state = 40},
  [2202] = {.lex_state = 1},
  [2203] = {.lex_state = 41},
  [2204] = {.lex_state = 40},
  [2205] = {.lex_state = 40},
  [2206] = {.lex_state = 40},
  [2207] = {.lex_state = 40},
  [2208] = {.lex_state = 40},
  [2209] = {.lex_state = 40},
  [2210] = {.lex_state = 40},
  [2211] = {.lex_state = 40},
  [2212] = {.lex_state = 40},
  [2213] = {.lex_state = 40},
  [2214] = {.lex_state = 40},
  [2215] = {.lex_state = 40},
  [2216] = {.lex_state = 40},
  [2217] = {.lex_state = 40},
  [2218] = {.lex_state = 40},
  [2219] = {.lex_state = 1},
  [2220] = {.lex_state = 40},
  [2221] = {.lex_state = 40},
  [2222] = {.lex_state = 40},
  [2223] = {.lex_state = 40},
  [2224] = {.lex_state = 40},
  [2225] = {.lex_state = 41},
  [2226] = {.lex_state = 40},
  [2227] = {.lex_state = 40},
  [2228] = {.lex_state = 40},
  [2229] = {.lex_state = 40},
  [2230] = {.lex_state = 40},
  [2231] = {.lex_state = 40},
  [2232] = {.lex_state = 40},
  [2233] = {.lex_state = 40},
  [2234] = {.lex_state = 40},
  [2235] = {.lex_state = 6},
  [2236] = {.lex_state = 40},
  [2237] = {.lex_state = 1},
  [2238] = {.lex_state = 40},
  [2239] = {.lex_state = 40},
  [2240] = {.lex_state = 1},
  [2241] = {.lex_state = 6},
  [2242] = {.lex_state = 40},
  [2243] = {.lex_state = 6},
  [2244] = {.lex_state = 40},
  [2245] = {.lex_state = 40},
  [2246] = {.lex_state = 40},
  [2247] = {.lex_state = 40},
  [2248] = {.lex_state = 40},
  [2249] = {.lex_state = 40},
  [2250] = {.lex_state = 40},
  [2251] = {.lex_state = 40},
  [2252] = {.lex_state = 40},
  [2253] = {.lex_state = 40},
  [2254] = {.lex_state = 40},
  [2255] = {.lex_state = 40},
  [2256] = {.lex_state = 40},
  [2257] = {.lex_state = 40},
  [2258] = {.lex_state = 40},
  [2259] = {.lex_state = 40},
  [2260] = {.lex_state = 40},
  [2261] = {.lex_state = 40},
  [2262] = {.lex_state = 40},
  [2263] = {.lex_state = 40},
  [2264] = {.lex_state = 40},
  [2265] = {.lex_state = 40},
  [2266] = {.lex_state = 40},
  [2267] = {.lex_state = 40},
  [2268] = {.lex_state = 40},
  [2269] = {.lex_state = 40},
  [2270] = {.lex_state = 40},
  [2271] = {.lex_state = 40},
  [2272] = {.lex_state = 40},
  [2273] = {.lex_state = 40},
  [2274] = {.lex_state = 40},
  [2275] = {.lex_state = 40},
  [2276] = {.lex_state = 40},
  [2277] = {.lex_state = 40},
  [2278] = {.lex_state = 40},
  [2279] = {.lex_state = 40},
  [2280] = {.lex_state = 40},
  [2281] = {.lex_state = 40},
  [2282] = {.lex_state = 1},
  [2283] = {.lex_state = 40},
  [2284] = {.lex_state = 40},
  [2285] = {.lex_state = 1},
  [2286] = {.lex_state = 1},
  [2287] = {.lex_state = 40},
  [2288] = {.lex_state = 40},
  [2289] = {.lex_state = 1},
  [2290] = {.lex_state = 1},
  [2291] = {.lex_state = 41},
  [2292] = {.lex_state = 40},
  [2293] = {.lex_state = 40},
  [2294] = {.lex_state = 40},
  [2295] = {.lex_state = 40},
  [2296] = {.lex_state = 40},
  [2297] = {.lex_state = 41},
  [2298] = {.lex_state = 40},
  [2299] = {.lex_state = 40},
  [2300] = {.lex_state = 40},
  [2301] = {.lex_state = 40},
  [2302] = {.lex_state = 40},
  [2303] = {.lex_state = 40},
  [2304] = {.lex_state = 40},
  [2305] = {.lex_state = 40},
  [2306] = {.lex_state = 40},
  [2307] = {.lex_state = 40},
  [2308] = {.lex_state = 40},
  [2309] = {.lex_state = 40},
  [2310] = {.lex_state = 40},
  [2311] = {.lex_state = 40},
  [2312] = {.lex_state = 40},
  [2313] = {.lex_state = 40},
  [2314] = {.lex_state = 40},
  [2315] = {.lex_state = 40},
  [2316] = {.lex_state = 40},
  [2317] = {.lex_state = 40},
  [2318] = {.lex_state = 40},
  [2319] = {.lex_state = 40},
  [2320] = {.lex_state = 40},
  [2321] = {.lex_state = 40},
  [2322] = {.lex_state = 1},
  [2323] = {.lex_state = 40},
  [2324] = {.lex_state = 40},
  [2325] = {.lex_state = 40},
  [2326] = {.lex_state = 1},
  [2327] = {.lex_state = 40},
  [2328] = {.lex_state = 40},
  [2329] = {.lex_state = 40},
  [2330] = {.lex_state = 41},
  [2331] = {.lex_state = 1},
  [2332] = {.lex_state = 6},
  [2333] = {.lex_state = 6},
  [2334] = {.lex_state = 40},
  [2335] = {.lex_state = 40},
  [2336] = {.lex_state = 40},
  [2337] = {.lex_state = 40},
  [2338] = {.lex_state = 40},
  [2339] = {.lex_state = 40},
  [2340] = {.lex_state = 40},
  [2341] = {.lex_state = 40},
  [2342] = {.lex_state = 40},
  [2343] = {.lex_state = 40},
  [2344] = {.lex_state = 40},
  [2345] = {.lex_state = 40},
  [2346] = {.lex_state = 40},
  [2347] = {.lex_state = 40},
  [2348] = {.lex_state = 40},
  [2349] = {.lex_state = 40},
  [2350] = {.lex_state = 40},
  [2351] = {.lex_state = 40},
  [2352] = {.lex_state = 40},
  [2353] = {.lex_state = 40},
  [2354] = {.lex_state = 40},
  [2355] = {.lex_state = 40},
  [2356] = {.lex_state = 40},
  [2357] = {.lex_state = 40},
  [2358] = {.lex_state = 40},
  [2359] = {.lex_state = 40},
  [2360] = {.lex_state = 40},
  [2361] = {.lex_state = 40},
  [2362] = {.lex_state = 40},
  [2363] = {.lex_state = 40},
  [2364] = {.lex_state = 40},
  [2365] = {.lex_state = 40},
  [2366] = {.lex_state = 40},
  [2367] = {.lex_state = 40},
  [2368] = {.lex_state = 40},
  [2369] = {.lex_state = 40},
  [2370] = {.lex_state = 40},
  [2371] = {.lex_state = 40},
  [2372] = {.lex_state = 40},
  [2373] = {.lex_state = 40},
  [2374] = {.lex_state = 40},
  [2375] = {.lex_state = 40},
  [2376] = {.lex_state = 40},
  [2377] = {.lex_state = 40},
  [2378] = {.lex_state = 40},
  [2379] = {.lex_state = 40},
  [2380] = {.lex_state = 40},
  [2381] = {.lex_state = 40},
  [2382] = {.lex_state = 40},
  [2383] = {.lex_state = 40},
  [2384] = {.lex_state = 40},
  [2385] = {.lex_state = 40},
  [2386] = {.lex_state = 40},
  [2387] = {.lex_state = 40},
  [2388] = {.lex_state = 40},
  [2389] = {.lex_state = 40},
  [2390] = {.lex_state = 40},
  [2391] = {.lex_state = 40},
  [2392] = {.lex_state = 40},
  [2393] = {.lex_state = 40},
  [2394] = {.lex_state = 40},
  [2395] = {.lex_state = 40},
  [2396] = {.lex_state = 40},
  [2397] = {.lex_state = 40},
  [2398] = {.lex_state = 40},
  [2399] = {.lex_state = 40},
  [2400] = {.lex_state = 40},
  [2401] = {.lex_state = 40},
  [2402] = {.lex_state = 40},
  [2403] = {.lex_state = 40},
  [2404] = {.lex_state = 40},
  [2405] = {.lex_state = 40},
  [2406] = {.lex_state = 40},
  [2407] = {.lex_state = 40},
  [2408] = {.lex_state = 40},
  [2409] = {.lex_state = 40},
  [2410] = {.lex_state = 40},
  [2411] = {.lex_state = 40},
  [2412] = {.lex_state = 40},
  [2413] = {.lex_state = 40},
  [2414] = {.lex_state = 40},
  [2415] = {.lex_state = 40},
  [2416] = {.lex_state = 40},
  [2417] = {.lex_state = 40},
  [2418] = {.lex_state = 40},
  [2419] = {.lex_state = 40},
  [2420] = {.lex_state = 40},
  [2421] = {.lex_state = 40},
  [2422] = {.lex_state = 40},
  [2423] = {.lex_state = 40},
  [2424] = {.lex_state = 40},
  [2425] = {.lex_state = 40},
  [2426] = {.lex_state = 40},
  [2427] = {.lex_state = 40},
  [2428] = {.lex_state = 40},
  [2429] = {.lex_state = 40},
  [2430] = {.lex_state = 40},
  [2431] = {.lex_state = 40},
  [2432] = {.lex_state = 40},
  [2433] = {.lex_state = 40},
  [2434] = {.lex_state = 40},
  [2435] = {.lex_state = 40},
  [2436] = {.lex_state = 40},
  [2437] = {.lex_state = 40},
  [2438] = {.lex_state = 40},
  [2439] = {.lex_state = 40},
  [2440] = {.lex_state = 40},
  [2441] = {.lex_state = 40},
  [2442] = {.lex_state = 40},
  [2443] = {.lex_state = 40},
  [2444] = {.lex_state = 40},
  [2445] = {.lex_state = 40},
  [2446] = {.lex_state = 40},
  [2447] = {.lex_state = 40},
  [2448] = {.lex_state = 40},
  [2449] = {.lex_state = 40},
  [2450] = {.lex_state = 40},
  [2451] = {.lex_state = 40},
  [2452] = {.lex_state = 40},
  [2453] = {.lex_state = 40},
  [2454] = {.lex_state = 40},
  [2455] = {.lex_state = 40},
  [2456] = {.lex_state = 40},
  [2457] = {.lex_state = 40},
  [2458] = {.lex_state = 40},
  [2459] = {.lex_state = 40},
  [2460] = {.lex_state = 40},
  [2461] = {.lex_state = 40},
  [2462] = {.lex_state = 40},
  [2463] = {.lex_state = 40},
  [2464] = {.lex_state = 40},
  [2465] = {.lex_state = 40},
  [2466] = {.lex_state = 40},
  [2467] = {.lex_state = 40},
  [2468] = {.lex_state = 40},
  [2469] = {.lex_state = 40},
  [2470] = {.lex_state = 40},
  [2471] = {.lex_state = 40},
  [2472] = {.lex_state = 40},
  [2473] = {.lex_state = 40},
  [2474] = {.lex_state = 40},
  [2475] = {.lex_state = 40},
  [2476] = {.lex_state = 40},
  [2477] = {.lex_state = 40},
  [2478] = {.lex_state = 40},
  [2479] = {.lex_state = 40},
  [2480] = {.lex_state = 40},
  [2481] = {.lex_state = 40},
  [2482] = {.lex_state = 40},
  [2483] = {.lex_state = 40},
  [2484] = {.lex_state = 40},
  [2485] = {.lex_state = 40},
  [2486] = {.lex_state = 40},
  [2487] = {.lex_state = 40},
  [2488] = {.lex_state = 40},
  [2489] = {.lex_state = 40},
  [2490] = {.lex_state = 40},
  [2491] = {.lex_state = 40},
  [2492] = {.lex_state = 40},
  [2493] = {.lex_state = 40},
  [2494] = {.lex_state = 40},
  [2495] = {.lex_state = 40},
  [2496] = {.lex_state = 40},
  [2497] = {.lex_state = 40},
  [2498] = {.lex_state = 40},
  [2499] = {.lex_state = 40},
  [2500] = {.lex_state = 40},
  [2501] = {.lex_state = 40},
  [2502] = {.lex_state = 40},
  [2503] = {.lex_state = 40},
  [2504] = {.lex_state = 40},
  [2505] = {.lex_state = 40},
  [2506] = {.lex_state = 40},
  [2507] = {.lex_state = 40},
  [2508] = {.lex_state = 40},
  [2509] = {.lex_state = 40},
  [2510] = {.lex_state = 40},
  [2511] = {.lex_state = 40},
  [2512] = {.lex_state = 40},
  [2513] = {.lex_state = 40},
  [2514] = {.lex_state = 40},
  [2515] = {.lex_state = 40},
  [2516] = {.lex_state = 40},
  [2517] = {.lex_state = 40},
  [2518] = {.lex_state = 40},
  [2519] = {.lex_state = 40},
  [2520] = {.lex_state = 40},
  [2521] = {.lex_state = 40},
  [2522] = {.lex_state = 40},
  [2523] = {.lex_state = 40},
  [2524] = {.lex_state = 40},
  [2525] = {.lex_state = 40},
  [2526] = {.lex_state = 40},
  [2527] = {.lex_state = 40},
  [2528] = {.lex_state = 40},
  [2529] = {.lex_state = 40},
  [2530] = {.lex_state = 40},
  [2531] = {.lex_state = 40},
  [2532] = {.lex_state = 40},
  [2533] = {.lex_state = 40},
  [2534] = {.lex_state = 40},
  [2535] = {.lex_state = 40},
  [2536] = {.lex_state = 40},
  [2537] = {.lex_state = 40},
  [2538] = {.lex_state = 40},
  [2539] = {.lex_state = 6},
  [2540] = {.lex_state = 40},
  [2541] = {.lex_state = 40},
  [2542] = {.lex_state = 40},
  [2543] = {.lex_state = 40},
  [2544] = {.lex_state = 40},
  [2545] = {.lex_state = 40},
  [2546] = {.lex_state = 40},
  [2547] = {.lex_state = 40},
  [2548] = {.lex_state = 40},
  [2549] = {.lex_state = 40},
  [2550] = {.lex_state = 40},
  [2551] = {.lex_state = 40},
  [2552] = {.lex_state = 40},
  [2553] = {.lex_state = 40},
  [2554] = {.lex_state = 40},
  [2555] = {.lex_state = 40},
  [2556] = {.lex_state = 40},
  [2557] = {.lex_state = 40},
  [2558] = {.lex_state = 40},
  [2559] = {.lex_state = 40},
  [2560] = {.lex_state = 40},
  [2561] = {.lex_state = 40},
  [2562] = {.lex_state = 40},
  [2563] = {.lex_state = 40},
  [2564] = {.lex_state = 40},
  [2565] = {.lex_state = 40},
  [2566] = {.lex_state = 40},
  [2567] = {.lex_state = 40},
  [2568] = {.lex_state = 40},
  [2569] = {.lex_state = 40},
  [2570] = {.lex_state = 40},
  [2571] = {.lex_state = 40},
  [2572] = {.lex_state = 40},
  [2573] = {.lex_state = 40},
  [2574] = {.lex_state = 40},
  [2575] = {.lex_state = 40},
  [2576] = {.lex_state = 40},
  [2577] = {.lex_state = 40},
  [2578] = {.lex_state = 40},
  [2579] = {.lex_state = 40},
  [2580] = {.lex_state = 40},
  [2581] = {.lex_state = 40},
  [2582] = {.lex_state = 40},
  [2583] = {.lex_state = 40},
  [2584] = {.lex_state = 40},
  [2585] = {.lex_state = 40},
  [2586] = {.lex_state = 40},
  [2587] = {.lex_state = 40},
  [2588] = {.lex_state = 40},
  [2589] = {.lex_state = 40},
  [2590] = {.lex_state = 40},
  [2591] = {.lex_state = 40},
  [2592] = {.lex_state = 40},
  [2593] = {.lex_state = 40},
  [2594] = {.lex_state = 40},
  [2595] = {.lex_state = 40},
  [2596] = {.lex_state = 40},
  [2597] = {.lex_state = 40},
  [2598] = {.lex_state = 40},
  [2599] = {.lex_state = 40},
  [2600] = {.lex_state = 40},
  [2601] = {.lex_state = 40},
  [2602] = {.lex_state = 40},
  [2603] = {.lex_state = 40},
  [2604] = {.lex_state = 40},
  [2605] = {.lex_state = 40},
  [2606] = {.lex_state = 40},
  [2607] = {.lex_state = 40},
  [2608] = {.lex_state = 40},
  [2609] = {.lex_state = 40},
  [2610] = {.lex_state = 40},
  [2611] = {.lex_state = 40},
  [2612] = {.lex_state = 40},
  [2613] = {.lex_state = 40},
  [2614] = {.lex_state = 40},
  [2615] = {.lex_state = 40},
  [2616] = {.lex_state = 40},
  [2617] = {.lex_state = 40},
  [2618] = {.lex_state = 40},
  [2619] = {.lex_state = 40},
  [2620] = {.lex_state = 40},
  [2621] = {.lex_state = 40},
  [2622] = {.lex_state = 40},
  [2623] = {.lex_state = 40},
  [2624] = {.lex_state = 40},
  [2625] = {.lex_state = 40},
  [2626] = {.lex_state = 40},
  [2627] = {.lex_state = 40},
  [2628] = {.lex_state = 40},
  [2629] = {.lex_state = 40},
  [2630] = {.lex_state = 40},
  [2631] = {.lex_state = 40},
  [2632] = {.lex_state = 40},
  [2633] = {.lex_state = 40},
  [2634] = {.lex_state = 40},
  [2635] = {.lex_state = 40},
  [2636] = {.lex_state = 40},
  [2637] = {.lex_state = 40},
  [2638] = {.lex_state = 40},
  [2639] = {.lex_state = 40},
  [2640] = {.lex_state = 40},
  [2641] = {.lex_state = 40},
  [2642] = {.lex_state = 40},
  [2643] = {.lex_state = 40},
  [2644] = {.lex_state = 40},
  [2645] = {.lex_state = 40},
  [2646] = {.lex_state = 40},
  [2647] = {.lex_state = 40},
  [2648] = {.lex_state = 40},
  [2649] = {.lex_state = 40},
  [2650] = {.lex_state = 40},
  [2651] = {.lex_state = 40},
  [2652] = {.lex_state = 40},
  [2653] = {.lex_state = 40},
  [2654] = {.lex_state = 40},
  [2655] = {.lex_state = 40},
  [2656] = {.lex_state = 40},
  [2657] = {.lex_state = 40},
  [2658] = {.lex_state = 40},
  [2659] = {.lex_state = 40},
  [2660] = {.lex_state = 40},
  [2661] = {.lex_state = 40},
  [2662] = {.lex_state = 40},
  [2663] = {.lex_state = 40},
  [2664] = {.lex_state = 40},
  [2665] = {.lex_state = 40},
  [2666] = {.lex_state = 40},
  [2667] = {.lex_state = 40},
  [2668] = {.lex_state = 40},
  [2669] = {.lex_state = 40},
  [2670] = {.lex_state = 40},
  [2671] = {.lex_state = 40},
  [2672] = {.lex_state = 40},
  [2673] = {.lex_state = 40},
  [2674] = {.lex_state = 40},
  [2675] = {.lex_state = 40},
  [2676] = {.lex_state = 40},
  [2677] = {.lex_state = 40},
  [2678] = {.lex_state = 40},
  [2679] = {.lex_state = 40},
  [2680] = {.lex_state = 40},
  [2681] = {.lex_state = 40},
  [2682] = {.lex_state = 40},
  [2683] = {.lex_state = 40},
  [2684] = {.lex_state = 40},
  [2685] = {.lex_state = 40},
  [2686] = {.lex_state = 40},
  [2687] = {.lex_state = 40},
  [2688] = {.lex_state = 40},
  [2689] = {.lex_state = 40},
  [2690] = {.lex_state = 40},
  [2691] = {.lex_state = 40},
  [2692] = {.lex_state = 40},
  [2693] = {.lex_state = 40},
  [2694] = {.lex_state = 40},
  [2695] = {.lex_state = 40},
  [2696] = {.lex_state = 40},
  [2697] = {.lex_state = 40},
  [2698] = {.lex_state = 40},
  [2699] = {.lex_state = 40},
  [2700] = {.lex_state = 40},
  [2701] = {.lex_state = 40},
  [2702] = {.lex_state = 40},
  [2703] = {.lex_state = 40},
  [2704] = {.lex_state = 40},
  [2705] = {.lex_state = 40},
  [2706] = {.lex_state = 40},
  [2707] = {.lex_state = 40},
  [2708] = {.lex_state = 40},
  [2709] = {.lex_state = 40},
  [2710] = {.lex_state = 40},
  [2711] = {.lex_state = 40},
  [2712] = {.lex_state = 40},
  [2713] = {.lex_state = 40},
  [2714] = {.lex_state = 40},
};





#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pascal_from_file(const char *path) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,

    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  _Static_assert(sizeof(TSParseActionEntry) == 8, "Grammar table ABI changed");
  if (!path) return NULL;
  int fd = open(path, O_RDONLY | O_CLOEXEC | O_NONBLOCK);
  if (fd < 0) return NULL;
  struct stat status;
  if (fstat(fd, &status) != 0 || !S_ISREG(status.st_mode) || status.st_size != 652936) {
    close(fd);
    return NULL;
  }
  const uint8_t *tables = mmap(NULL, 652936, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);
  if (tables == MAP_FAILED) return NULL;
  static const uint8_t expected_header[] = { 84, 83, 77, 65, 80, 48, 48, 49, 215, 165, 245, 192, 72, 128, 250, 199, 158, 14, 177, 132, 28, 187, 192, 13, 126, 48, 88, 99, 239, 229, 109, 131, 201, 117, 79, 186, 112, 56, 83, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if (memcmp(tables, expected_header, sizeof(expected_header)) != 0) {
    munmap((void *)tables, 652936);
    return NULL;
  }
  TSLanguage *language_copy = malloc(sizeof(*language_copy));
  if (!language_copy) {
    munmap((void *)tables, 652936);
    return NULL;
  }
  *language_copy = language;
  language_copy->parse_table = (const uint16_t *)(tables + 64);
  language_copy->small_parse_table = (const uint16_t *)(tables + 415584);
  language_copy->small_parse_table_map = (const uint32_t *)(tables + 583544);
  language_copy->parse_actions = (const TSParseActionEntry *)(tables + 592168);
  return language_copy;
}
#ifdef __cplusplus
}
#endif
