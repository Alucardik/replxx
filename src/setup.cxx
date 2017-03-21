#include "setup.hxx"

namespace {

#define REPLXX_MAX_LINE 4096
#define REPLXX_DEFAULT_HISTORY_MAX_LEN 1000
char const defaultBreakChars[] = " =+-/\\*?\"'`&<>;|@{([])}";

}

namespace replxx {

Setup::Setup()
	: maxLineLength( REPLXX_MAX_LINE )
	, historyMaxLen( REPLXX_DEFAULT_HISTORY_MAX_LEN )
	, breakChars( defaultBreakChars )
	, completionCountCutoff( 100 )
	, doubleTabCompletion( false )
	, completeOnEmpty( true )
	, beepOnAmbiguousCompletion( false )
	, completionCallback( nullptr )
	, highlighterCallback( nullptr ) {
}

Setup setup;

}
