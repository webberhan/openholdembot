//
// Limits
//

BEGIN_TESTCASE
    TESTCASE_ID ("0015")
    REASONING ("Range check for symbol bblind")
    PRECONDITION (gws("nplayersdealt") > 0)
    POSTCONDITION (gws("bblind") >= 0.02)
    SYMBOLS_POSSIBLY_AFFECTED ("bblind, nplayersdealt")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0016")
    REASONING ("Range check for symbol sblind")
    PRECONDITION (gws("nplayersdealt") > 0)
    POSTCONDITION (gws("sblind") >= 0.01)
    SYMBOLS_POSSIBLY_AFFECTED ("sblind, nplayersdealt")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0017")
    REASONING ("Range check for symbol ante")
    PRECONDITION (true)
    POSTCONDITION (gws("ante") >= 0)
    SYMBOLS_POSSIBLY_AFFECTED ("ante")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0018")
    REASONING ("Range check for symbol lim")
    PRECONDITION (true)
    POSTCONDITION ((gws("lim") == 0) || (gws("lim") == 1) || (gws("lim") == 2) || (gws("lim") == UNDEFINED_NEGATIVE_ONE))
    SYMBOLS_POSSIBLY_AFFECTED ("lim")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0019")
    REASONING ("Range check for symbol isnl")
    PRECONDITION (true)
    POSTCONDITION ((gws("isnl") == true) || (gws("isnl") == false))
    SYMBOLS_POSSIBLY_AFFECTED ("isnl")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0020")
    REASONING ("Range check for symbol ispl")
    PRECONDITION (true)
    POSTCONDITION ((gws("ispl") == true) || (gws("ispl") == false))
    SYMBOLS_POSSIBLY_AFFECTED ("ispl")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0021")
    REASONING ("Range check for symbol isfl")
    PRECONDITION (true)
    POSTCONDITION ((gws("isfl") == true) || (gws("isfl") == false))
    SYMBOLS_POSSIBLY_AFFECTED ("isfl")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0022")
    REASONING ("Range check for symbol sraiprev")
    PRECONDITION (true)
    POSTCONDITION ((gws("sraiprev") > 0) || (gws("sraiprev") == UNDEFINED_ZERO))
    SYMBOLS_POSSIBLY_AFFECTED ("sraiprev")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0023")
    REASONING ("Range check for symbol sraimin")
    PRECONDITION (true)
    POSTCONDITION ((gws("sraimin") > 0) || (gws("sraimin") == UNDEFINED_ZERO))
    SYMBOLS_POSSIBLY_AFFECTED ("sraimin")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0024")
    REASONING ("Range check for symbol sraimax")
    PRECONDITION (true)
    POSTCONDITION (gws("sraimax") >= 0)
    SYMBOLS_POSSIBLY_AFFECTED ("sraimax")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0025")
    REASONING ("Range check for symbol istournament")
    PRECONDITION (true)
    POSTCONDITION ((gws("istournament") == true) || (gws("istournament") == false))
    SYMBOLS_POSSIBLY_AFFECTED ("istournament")
END_TESTCASE