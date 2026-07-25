/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050CEBC
 * Mangled: _Z29PVRTModelPODToggleInterleavedR8SPODMeshj
 * Demangled: PVRTModelPODToggleInterleaved(SPODMesh &,uint)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6770  .calloc
 *   0x00000000001F89E0  .free
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 429
 *   insn=0x000000000050CEDC string=0x000000000050CEE0 "w"
 *   insn=0x000000000050CEE0 string=0x000000000050CEE4 "w"
 *   insn=0x000000000050CEE4 string=0x000000000050CEE8 "xv@"
 *   insn=0x000000000050CEE8 string=0x000000000050CEEC "x"
 *   insn=0x000000000050CEEC string=0x000000000050CEF0 "h:@"
 *   insn=0x000000000050CEEC string=0x000000000050CF18 "t:@"
 *   insn=0x000000000050CEF0 string=0x000000000050CEF4 "yB@"
 *   insn=0x000000000050CEF4 string=0x000000000050CEF8 ""
 *   insn=0x000000000050CF00 string=0x000000000050CF04 "i"
 *   insn=0x000000000050CF04 string=0x000000000050CF0C "("
 *   insn=0x000000000050CF10 string=0x000000000050CF14 "z"
 *   insn=0x000000000050CF10 string=0x000000000050CF40 "i>@"
 *   insn=0x000000000050CF14 string=0x000000000050D8FC "hR@"
 *   insn=0x000000000050CF20 string=0x000000000050CF24 "h"
 *   insn=0x000000000050CF24 string=0x000000000050CF28 "i"
 *   insn=0x000000000050CF28 string=0x000000000050CF30 "("
 *   insn=0x000000000050CF34 string=0x000000000050CF74 "iR@"
 *   insn=0x000000000050CF40 string=0x000000000050CF44 "t&@"
 *   insn=0x000000000050CF50 string=0x000000000050CF54 "I"
 *   insn=0x000000000050CF60 string=0x00000000001F6770 "0'"
 *   insn=0x000000000050CF64 string=0x000000000050CF68 "v&"
 *   insn=0x000000000050CF68 string=0x000000000050CF6C "C"
 *   insn=0x000000000050CF74 string=0x000000000050CF78 "j>@"
 *   insn=0x000000000050CF78 string=0x000000000050CF7C ")"
 *   insn=0x000000000050CF7C string=0x000000000050CF80 "?5"
 *   insn=0x000000000050CF80 string=0x000000000050CF84 "}\n"
 *   insn=0x000000000050CF88 string=0x000000000050CF8C "j"
 *   insn=0x000000000050CF8C string=0x000000000050CF94 "I"
 *   insn=0x000000000050CF98 string=0x000000000050CFA0 "jj@"
 *   insn=0x000000000050CFA0 string=0x000000000050CFA4 "kV@"
 *   insn=0x000000000050CFA4 string=0x000000000050CFA8 "J"
 *   insn=0x000000000050CFA8 string=0x000000000050CFAC "_5"
 *   insn=0x000000000050CFAC string=0x000000000050CFB0 "(!"
 *   insn=0x000000000050CFB4 string=0x000000000050CFB8 "i"
 *   insn=0x000000000050CFB8 string=0x000000000050CFC0 ")"
 *   insn=0x000000000050CFC4 string=0x000000000050CFCC "j"
 *   insn=0x000000000050CFCC string=0x000000000050CFD0 "kn@"
 *   insn=0x000000000050CFD0 string=0x000000000050CFD4 "J"
 *   insn=0x000000000050CFD4 string=0x000000000050CFD8 "_5"
 *   insn=0x000000000050CFD8 string=0x000000000050CFDC "(!"
 *   insn=0x000000000050CFE0 string=0x000000000050CFE4 "i"
 *   insn=0x000000000050CFE4 string=0x000000000050CFEC "*"
 *   insn=0x000000000050CFF0 string=0x000000000050CFF8 "k"
 *   insn=0x000000000050CFF8 string=0x000000000050CFFC "i\n@"
 *   insn=0x000000000050D000 string=0x000000000050D004 "H!"
 *   insn=0x000000000050D004 string=0x000000000050D008 "I"
 *   insn=0x000000000050D008 string=0x000000000050D00C "kN@"
 *   insn=0x000000000050D008 string=0x000000000050D050 "i"
 *   insn=0x000000000050D00C string=0x000000000050D010 "l"
 *   insn=0x000000000050D018 string=0x000000000050D01C "k"
 *   insn=0x000000000050D01C string=0x000000000050D020 "m"
 *   insn=0x000000000050D028 string=0x000000000050D02C "h"
 *   insn=0x000000000050D034 string=0x000000000050D03C "n"
 *   insn=0x000000000050D03C string=0x000000000050D040 "J"
 *   insn=0x000000000050D040 string=0x000000000050D044 "_"
 *   insn=0x000000000050D050 string=0x000000000050D054 ")"
 *   insn=0x000000000050D054 string=0x000000000050D058 "?5"
 *   insn=0x000000000050D05C string=0x000000000050D060 "j"
 *   insn=0x000000000050D060 string=0x000000000050D068 "I"
 *   insn=0x000000000050D06C string=0x000000000050D074 "j"
 *   insn=0x000000000050D074 string=0x000000000050D078 "k"
 *   insn=0x000000000050D078 string=0x000000000050D07C "J"
 *   insn=0x000000000050D07C string=0x000000000050D080 "_5"
 *   insn=0x000000000050D080 string=0x000000000050D084 "(!"
 *   insn=0x000000000050D088 string=0x000000000050D08C "i"
 *   insn=0x000000000050D08C string=0x000000000050D094 ")"
 *   insn=0x000000000050D098 string=0x000000000050D0A0 "j"
 *   insn=0x000000000050D0A0 string=0x000000000050D0A4 "k"
 *   insn=0x000000000050D0A4 string=0x000000000050D0A8 "J"
 *   insn=0x000000000050D0A8 string=0x000000000050D0AC "_5"
 *   insn=0x000000000050D0AC string=0x000000000050D0B0 "(!"
 *   insn=0x000000000050D0B4 string=0x000000000050D0B8 "i"
 *   insn=0x000000000050D0B8 string=0x000000000050D0C0 ")"
 *   insn=0x000000000050D0C4 string=0x000000000050D0CC "j"
 *   insn=0x000000000050D0CC string=0x000000000050D0D0 "?"
 *   insn=0x000000000050D0D0 string=0x000000000050D0D4 "5!\n"
 *   insn=0x000000000050D0E0 string=0x000000000050D0E4 ")"
 *   insn=0x000000000050D0E4 string=0x000000000050D0E8 "\t"
 *   insn=0x000000000050D0E8 string=0x000000000050D0EC "*\t"
 *   insn=0x000000000050D0EC string=0x000000000050D0F0 "H"
 *   insn=0x000000000050D104 string=0x000000000050D108 "`v"
 *   insn=0x000000000050D12C string=0x000000000050D130 "i"
 *   insn=0x000000000050D130 string=0x000000000050D138 "("
 *   insn=0x000000000050D140 string=0x000000000050D144 "bB@"
 *   insn=0x000000000050D140 string=0x000000000050D1FC "hR@"
 *   insn=0x000000000050D148 string=0x000000000050D14C "v"
 *   insn=0x000000000050D154 string=0x000000000050D158 "tv@"
 *   insn=0x000000000050D154 string=0x000000000050D1A4 "`&@"
 *   insn=0x000000000050D158 string=0x000000000050D15C "a&@"
 *   insn=0x000000000050D178 string=0x000000000050D17C "bB@"
 *   insn=0x000000000050D17C string=0x000000000050D180 "h&@"
 *   insn=0x000000000050D184 string=0x000000000050D188 "I|"
 *   insn=0x000000000050D18C string=0x000000000050D190 "t"
 *   insn=0x000000000050D1A4 string=0x000000000050D1A8 "`"
 *   insn=0x000000000050D1A8 string=0x000000000050D1AC ""
 *   insn=0x000000000050D1A8 string=0x000000000050D1B4 "h:@"
 *   insn=0x000000000050D1AC string=0x00000000001F89E0 "0'"
 *   insn=0x000000000050D1B4 string=0x000000000050D1B8 "uB"
 *   insn=0x000000000050D1B8 string=0x000000000050D1BC "z&"
 *   insn=0x000000000050D1BC string=0x000000000050D1C0 ""
 *   insn=0x000000000050D1C4 string=0x000000000050D1C8 "("
 *   insn=0x000000000050D1C8 string=0x000000000050D1CC "i"
 *   insn=0x000000000050D1CC string=0x000000000050D1D4 "("
 *   insn=0x000000000050D1D8 string=0x000000000050D1F0 "i>@"
 *   insn=0x000000000050D1F0 string=0x000000000050D1F4 "}\t"
 *   insn=0x000000000050D1F4 string=0x000000000050D1F8 "Z"
 *   insn=0x000000000050D1FC string=0x000000000050D200 ""
 *   insn=0x000000000050D208 string=0x000000000050D20C "i"
 *   insn=0x000000000050D20C string=0x000000000050D214 "("
 *   insn=0x000000000050D21C string=0x000000000050D220 "bZ@"
 *   insn=0x000000000050D21C string=0x000000000050D2D8 "hj@"
 *   insn=0x000000000050D224 string=0x000000000050D228 "v"
 *   insn=0x000000000050D230 string=0x000000000050D234 "tv@"
 *   insn=0x000000000050D230 string=0x000000000050D280 "`2@"
 *   insn=0x000000000050D234 string=0x000000000050D238 "a2@"
 *   insn=0x000000000050D23C string=0x000000000050D240 "H"
 *   insn=0x000000000050D254 string=0x000000000050D258 "bZ@"
 *   insn=0x000000000050D258 string=0x000000000050D25C "h2@"
 *   insn=0x000000000050D260 string=0x000000000050D264 "I|"
 *   insn=0x000000000050D268 string=0x000000000050D26C "="
 *   insn=0x000000000050D280 string=0x000000000050D284 "`"
 *   insn=0x000000000050D284 string=0x000000000050D290 "hR@"
 *   insn=0x000000000050D290 string=0x000000000050D294 "uZ"
 *   insn=0x000000000050D294 string=0x000000000050D298 "z2"
 *   insn=0x000000000050D298 string=0x000000000050D29C ""
 *   insn=0x000000000050D2A0 string=0x000000000050D2A4 "("
 *   insn=0x000000000050D2A4 string=0x000000000050D2A8 "i"
 *   insn=0x000000000050D2A8 string=0x000000000050D2B0 "("
 *   insn=0x000000000050D2B4 string=0x000000000050D2CC "iV@"
 *   insn=0x000000000050D2CC string=0x000000000050D2D0 "}\t"
 *   insn=0x000000000050D2D0 string=0x000000000050D2D4 "Z"
 *   insn=0x000000000050D2D8 string=0x000000000050D2DC ""
 *   insn=0x000000000050D2E4 string=0x000000000050D2E8 "i"
 *   insn=0x000000000050D2E8 string=0x000000000050D2F0 "("
 *   insn=0x000000000050D2F8 string=0x000000000050D2FC "br@"
 *   insn=0x000000000050D2F8 string=0x000000000050D3B4 "h"
 *   insn=0x000000000050D300 string=0x000000000050D304 "v"
 *   insn=0x000000000050D30C string=0x000000000050D310 "tv@"
 *   insn=0x000000000050D30C string=0x000000000050D35C "`>@"
 *   insn=0x000000000050D310 string=0x000000000050D314 "a>@"
 *   insn=0x000000000050D330 string=0x000000000050D334 "br@"
 *   insn=0x000000000050D334 string=0x000000000050D338 "h>@"
 *   insn=0x000000000050D33C string=0x000000000050D340 "I|"
 *   insn=0x000000000050D35C string=0x000000000050D360 "`"
 *   insn=0x000000000050D360 string=0x000000000050D36C "hj@"
 *   insn=0x000000000050D36C string=0x000000000050D370 "ur"
 *   insn=0x000000000050D370 string=0x000000000050D374 "z>"
 *   insn=0x000000000050D374 string=0x000000000050D378 ""
 *   insn=0x000000000050D37C string=0x000000000050D380 "("
 *   insn=0x000000000050D380 string=0x000000000050D384 "i"
 *   insn=0x000000000050D384 string=0x000000000050D38C "("
 *   insn=0x000000000050D390 string=0x000000000050D3A8 "in@"
 *   insn=0x000000000050D3A8 string=0x000000000050D3AC "}\t"
 *   insn=0x000000000050D3AC string=0x000000000050D3B0 "Z"
 *   insn=0x000000000050D3B4 string=0x000000000050D3B8 ""
 *   insn=0x000000000050D3C0 string=0x000000000050D3C4 "i"
 *   insn=0x000000000050D3C4 string=0x000000000050D3CC "("
 *   insn=0x000000000050D3D4 string=0x000000000050D3D8 "b"
 *   insn=0x000000000050D3D4 string=0x000000000050D490 "h"
 *   insn=0x000000000050D3DC string=0x000000000050D3E0 "v"
 *   insn=0x000000000050D3E8 string=0x000000000050D3EC "tv@"
 *   insn=0x000000000050D3E8 string=0x000000000050D438 "`J@"
 *   insn=0x000000000050D3EC string=0x000000000050D3F0 "aJ@"
 *   insn=0x000000000050D40C string=0x000000000050D410 "b"
 *   insn=0x000000000050D410 string=0x000000000050D414 "hJ@"
 *   insn=0x000000000050D418 string=0x000000000050D41C "I|"
 *   insn=0x000000000050D438 string=0x000000000050D43C "`"
 *   insn=0x000000000050D43C string=0x000000000050D440 "h"
 *   insn=0x000000000050D43C string=0x000000000050D448 "h"
 *   insn=0x000000000050D448 string=0x000000000050D44C "u"
 *   insn=0x000000000050D44C string=0x000000000050D450 "zJ"
 *   insn=0x000000000050D450 string=0x000000000050D454 ""
 *   insn=0x000000000050D458 string=0x000000000050D45C "("
 *   insn=0x000000000050D45C string=0x000000000050D460 "i"
 *   insn=0x000000000050D460 string=0x000000000050D468 "("
 *   insn=0x000000000050D46C string=0x000000000050D484 "i"
 *   insn=0x000000000050D484 string=0x000000000050D488 "}\t"
 *   insn=0x000000000050D488 string=0x000000000050D48C "Z"
 *   insn=0x000000000050D490 string=0x000000000050D494 ""
 *   insn=0x000000000050D49C string=0x000000000050D4A0 "i"
 *   insn=0x000000000050D4A0 string=0x000000000050D4A8 "("
 *   insn=0x000000000050D4B0 string=0x000000000050D4B4 "b"
 *   insn=0x000000000050D4B0 string=0x000000000050D56C "h\n@"
 *   insn=0x000000000050D4B8 string=0x000000000050D4BC "v"
 *   insn=0x000000000050D4C4 string=0x000000000050D4C8 "tv@"
 *   insn=0x000000000050D4C4 string=0x000000000050D514 "`Z@"
 *   insn=0x000000000050D4C8 string=0x000000000050D4CC "aZ@"
 *   insn=0x000000000050D4E8 string=0x000000000050D4EC "b"
 *   insn=0x000000000050D4EC string=0x000000000050D4F0 "hZ@"
 *   insn=0x000000000050D4F4 string=0x000000000050D4F8 "I|"
 *   insn=0x000000000050D514 string=0x000000000050D518 "`"
 *   insn=0x000000000050D518 string=0x000000000050D51C "1"
 *   insn=0x000000000050D518 string=0x000000000050D524 "h"
 *   insn=0x000000000050D524 string=0x000000000050D528 "u"
 *   insn=0x000000000050D528 string=0x000000000050D52C "zZ"
 *   insn=0x000000000050D52C string=0x000000000050D530 ""
 *   insn=0x000000000050D534 string=0x000000000050D538 "("
 *   insn=0x000000000050D538 string=0x000000000050D53C "i"
 *   insn=0x000000000050D53C string=0x000000000050D544 "("
 *   insn=0x000000000050D548 string=0x000000000050D560 "i"
 *   insn=0x000000000050D560 string=0x000000000050D564 "}\t"
 *   insn=0x000000000050D564 string=0x000000000050D568 "Z"
 *   insn=0x000000000050D574 string=0x000000000050D6A8 "h"
 *   insn=0x000000000050D57C string=0x000000000050D580 "|N@"
 *   insn=0x000000000050D584 string=0x000000000050D588 "ys"
 *   insn=0x000000000050D588 string=0x000000000050D58C ")"
 *   insn=0x000000000050D58C string=0x000000000050D590 ")"
 *   insn=0x000000000050D590 string=0x000000000050D594 "?5"
 *   insn=0x000000000050D598 string=0x000000000050D59C "j"
 *   insn=0x000000000050D59C string=0x000000000050D5A4 "I"
 *   insn=0x000000000050D5A4 string=0x000000000050D5A8 "?"
 *   insn=0x000000000050D5AC string=0x000000000050D5B0 ";"
 *   insn=0x000000000050D5AC string=0x000000000050D5C0 "xs"
 *   insn=0x000000000050D5B0 string=0x000000000050D69C "{"
 *   insn=0x000000000050D5B4 string=0x000000000050D5B8 "?"
 *   insn=0x000000000050D5C0 string=0x000000000050D5C4 "tv@"
 *   insn=0x000000000050D5C4 string=0x000000000050D5C8 "v"
 *   insn=0x000000000050D5CC string=0x000000000050D5D0 "b"
 *   insn=0x000000000050D5D8 string=0x000000000050D5DC "hs"
 *   insn=0x000000000050D5E8 string=0x000000000050D5EC "k"
 *   insn=0x000000000050D5EC string=0x000000000050D5F0 "A"
 *   insn=0x000000000050D5EC string=0x000000000050D638 "@"
 *   insn=0x000000000050D5F4 string=0x000000000050D5F8 "Z"
 *   insn=0x000000000050D610 string=0x000000000050D614 "H"
 *   insn=0x000000000050D618 string=0x000000000050D61C "I|"
 *   insn=0x000000000050D620 string=0x000000000050D624 "O"
 *   insn=0x000000000050D638 string=0x000000000050D63C "`"
 *   insn=0x000000000050D640 string=0x000000000050D644 "_"
 *   insn=0x000000000050D64C string=0x000000000050D650 ""
 *   insn=0x000000000050D650 string=0x000000000050D654 "S"
 *   insn=0x000000000050D654 string=0x000000000050D658 "("
 *   insn=0x000000000050D65C string=0x000000000050D660 ""
 *   insn=0x000000000050D668 string=0x000000000050D66C "i"
 *   insn=0x000000000050D66C string=0x000000000050D674 ")"
 *   insn=0x000000000050D684 string=0x000000000050D688 "hs"
 *   insn=0x000000000050D688 string=0x000000000050D68C "\n"
 *   insn=0x000000000050D68C string=0x000000000050D690 "h\n@"
 *   insn=0x000000000050D690 string=0x000000000050D694 ")}\n"
 *   insn=0x000000000050D694 string=0x000000000050D698 "Z"
 *   insn=0x000000000050D6A8 string=0x000000000050D6AC ""
 *   insn=0x000000000050D6B4 string=0x000000000050D6B8 "i"
 *   insn=0x000000000050D6B8 string=0x000000000050D6C0 "("
 *   insn=0x000000000050D6D4 string=0x000000000050D6D8 "b"
 *   insn=0x000000000050D6D4 string=0x000000000050D784 "h"
 *   insn=0x000000000050D6D8 string=0x000000000050D6DC "B"
 *   insn=0x000000000050D6DC string=0x000000000050D6E0 "v"
 *   insn=0x000000000050D6E8 string=0x000000000050D6EC "tv@"
 *   insn=0x000000000050D6E8 string=0x000000000050D738 "`f@"
 *   insn=0x000000000050D6EC string=0x000000000050D6F0 "af@"
 *   insn=0x000000000050D70C string=0x000000000050D710 "b"
 *   insn=0x000000000050D710 string=0x000000000050D714 "hf@"
 *   insn=0x000000000050D718 string=0x000000000050D71C "I|"
 *   insn=0x000000000050D738 string=0x000000000050D73C "`"
 *   insn=0x000000000050D73C string=0x000000000050D748 "h"
 *   insn=0x000000000050D748 string=0x000000000050D74C "u"
 *   insn=0x000000000050D74C string=0x000000000050D750 "zf"
 *   insn=0x000000000050D750 string=0x000000000050D754 ""
 *   insn=0x000000000050D75C string=0x000000000050D760 "i"
 *   insn=0x000000000050D760 string=0x000000000050D768 "("
 *   insn=0x000000000050D76C string=0x000000000050D774 "i"
 *   insn=0x000000000050D778 string=0x000000000050D77C "}\t"
 *   insn=0x000000000050D77C string=0x000000000050D780 "Z"
 *   insn=0x000000000050D784 string=0x000000000050D788 ""
 *   insn=0x000000000050D790 string=0x000000000050D794 "i"
 *   insn=0x000000000050D794 string=0x000000000050D79C "("
 *   insn=0x000000000050D7A0 string=0x000000000050D7A4 "A"
 *   insn=0x000000000050D7A4 string=0x000000000050D7A8 "b"
 *   insn=0x000000000050D7AC string=0x000000000050D7B0 "v"
 *   insn=0x000000000050D7B4 string=0x000000000050D7B8 "k"
 *   insn=0x000000000050D7B8 string=0x000000000050D7BC "aRN"
 *   insn=0x000000000050D7B8 string=0x000000000050D804 "`r@"
 *   insn=0x000000000050D7D8 string=0x000000000050D7DC "b"
 *   insn=0x000000000050D7DC string=0x000000000050D7E0 "hr@"
 *   insn=0x000000000050D7E4 string=0x000000000050D7E8 "I|"
 *   insn=0x000000000050D804 string=0x000000000050D808 "`"
 *   insn=0x000000000050D808 string=0x000000000050D80C "u"
 *   insn=0x000000000050D808 string=0x000000000050D814 "h"
 *   insn=0x000000000050D818 string=0x000000000050D81C "u"
 *   insn=0x000000000050D81C string=0x000000000050D820 "zr"
 *   insn=0x000000000050D820 string=0x000000000050D824 ""
 *   insn=0x000000000050D828 string=0x000000000050D82C "h"
 *   insn=0x000000000050D82C string=0x000000000050D830 "i"
 *   insn=0x000000000050D830 string=0x000000000050D838 "("
 *   insn=0x000000000050D838 string=0x000000000050D83C ""
 *   insn=0x000000000050D83C string=0x000000000050D85C "i"
 *   insn=0x000000000050D850 string=0x000000000050D120 "t:@"
 *   insn=0x000000000050D85C string=0x000000000050D860 "}\t"
 *   insn=0x000000000050D860 string=0x000000000050D864 "Z"
 *   insn=0x000000000050D878 string=0x000000000050D87C "zB"
 *   insn=0x000000000050D884 string=0x000000000050D888 "U"
 *   insn=0x000000000050D89C string=0x000000000050D8A0 "a"
 *   insn=0x000000000050D8C0 string=0x000000000050D8C4 "V"
 *   insn=0x000000000050D8C0 string=0x000000000050D8F4 "xv@"
 *   insn=0x000000000050D8C8 string=0x000000000050D8CC "8{"
 *   insn=0x000000000050D8CC string=0x000000000050D8D0 "h&@"
 *   insn=0x000000000050D8F4 string=0x000000000050D8F8 "w"
 *   insn=0x000000000050D8FC string=0x000000000050D900 "yZ@"
 *   insn=0x000000000050D900 string=0x000000000050D904 ""
 *   insn=0x000000000050D90C string=0x000000000050D910 "i"
 *   insn=0x000000000050D910 string=0x000000000050D918 "("
 *   insn=0x000000000050D91C string=0x000000000050D920 "2"
 *   insn=0x000000000050D91C string=0x000000000050D92C "iV@"
 *   insn=0x000000000050D920 string=0x000000000050D9E8 "hj@"
 *   insn=0x000000000050D92C string=0x000000000050D930 "t2@"
 *   insn=0x000000000050D950 string=0x000000000050D954 "v2"
 *   insn=0x000000000050D960 string=0x000000000050D964 "zZ"
 *   insn=0x000000000050D964 string=0x000000000050D968 ""
 *   insn=0x000000000050D96C string=0x000000000050D970 "U"
 *   insn=0x000000000050D97C string=0x000000000050D980 "x"
 *   insn=0x000000000050D984 string=0x000000000050D988 "a"
 *   insn=0x000000000050D99C string=0x000000000050D9A0 "p"
 *   insn=0x000000000050D9A8 string=0x000000000050D9E0 "xv@"
 *   insn=0x000000000050D9AC string=0x000000000050D9B0 "V"
 *   insn=0x000000000050D9B4 string=0x000000000050D9B8 "8{"
 *   insn=0x000000000050D9B8 string=0x000000000050D9BC "h2@"
 *   insn=0x000000000050D9C8 string=0x000000000050D9CC "e"
 *   insn=0x000000000050D9E0 string=0x000000000050D9E4 "w"
 *   insn=0x000000000050D9E8 string=0x000000000050D9EC "yr@"
 *   insn=0x000000000050D9EC string=0x000000000050D9F0 ""
 *   insn=0x000000000050D9F8 string=0x000000000050D9FC "i"
 *   insn=0x000000000050D9FC string=0x000000000050DA04 "("
 *   insn=0x000000000050DA08 string=0x000000000050DA0C "2"
 *   insn=0x000000000050DA08 string=0x000000000050DA18 "in@"
 *   insn=0x000000000050DA0C string=0x000000000050DAD4 "h"
 *   insn=0x000000000050DA18 string=0x000000000050DA1C "t>@"
 *   insn=0x000000000050DA34 string=0x000000000050DA38 "N"
 *   insn=0x000000000050DA3C string=0x000000000050DA40 "v>"
 *   insn=0x000000000050DA4C string=0x000000000050DA50 "zr"
 *   insn=0x000000000050DA50 string=0x000000000050DA54 ""
 *   insn=0x000000000050DA58 string=0x000000000050DA5C "U"
 *   insn=0x000000000050DA68 string=0x000000000050DA6C "="
 *   insn=0x000000000050DA70 string=0x000000000050DA74 "a"
 *   insn=0x000000000050DA88 string=0x000000000050DA8C "5"
 *   insn=0x000000000050DA94 string=0x000000000050DACC "xv@"
 *   insn=0x000000000050DA98 string=0x000000000050DA9C "V"
 *   insn=0x000000000050DAA0 string=0x000000000050DAA4 "8{"
 *   insn=0x000000000050DAA4 string=0x000000000050DAA8 "h>@"
 *   insn=0x000000000050DAB4 string=0x000000000050DAB8 "*"
 *   insn=0x000000000050DACC string=0x000000000050DAD0 "w"
 *   insn=0x000000000050DAD4 string=0x000000000050DAD8 "y"
 *   insn=0x000000000050DAD8 string=0x000000000050DADC ""
 *   insn=0x000000000050DAE4 string=0x000000000050DAE8 "i"
 *   insn=0x000000000050DAE8 string=0x000000000050DAF0 "("
 *   insn=0x000000000050DAF4 string=0x000000000050DAF8 "."
 *   insn=0x000000000050DAF4 string=0x000000000050DB04 "i"
 *   insn=0x000000000050DAF8 string=0x000000000050DBB0 "y\n@"
 *   insn=0x000000000050DB04 string=0x000000000050DB08 "tJ@"
 *   insn=0x000000000050DB28 string=0x000000000050DB2C "vJ"
 *   insn=0x000000000050DB38 string=0x000000000050DB3C "z"
 *   insn=0x000000000050DB44 string=0x000000000050DB48 "U"
 *   insn=0x000000000050DB7C string=0x000000000050DB80 "V"
 *   insn=0x000000000050DB84 string=0x000000000050DB88 "8{"
 *   insn=0x000000000050DB88 string=0x000000000050DB8C "hJ@"
 *   insn=0x000000000050DBB4 string=0x000000000050DCA4 "h"
 *   insn=0x000000000050DBBC string=0x000000000050DBC0 "hN@"
 *   insn=0x000000000050DBC4 string=0x000000000050DBC8 "tv@"
 *   insn=0x000000000050DBC8 string=0x000000000050DBCC "|"
 *   insn=0x000000000050DBD4 string=0x000000000050DBD8 "\tii"
 *   insn=0x000000000050DBD8 string=0x000000000050DBDC ")"
 *   insn=0x000000000050DBDC string=0x000000000050DBE0 "?5"
 *   insn=0x000000000050DBE4 string=0x000000000050DBE8 "k"
 *   insn=0x000000000050DBE8 string=0x000000000050DBF0 "i"
 *   insn=0x000000000050DBFC string=0x000000000050DC00 "w"
 *   insn=0x000000000050DC04 string=0x000000000050DC08 "hC_"
 *   insn=0x000000000050DC0C string=0x000000000050DC10 "8}"
 *   insn=0x000000000050DC24 string=0x000000000050DC28 "`"
 *   insn=0x000000000050DC68 string=0x000000000050DC6C "h"
 *   insn=0x000000000050DC84 string=0x000000000050DC88 "9"
 *   insn=0x000000000050DC8C string=0x000000000050DC90 "y\n@"
 *   insn=0x000000000050DCA4 string=0x000000000050DCA8 "tv@"
 *   insn=0x000000000050DCA8 string=0x000000000050DCAC "x"
 *   insn=0x000000000050DCAC string=0x000000000050DCB0 "y"
 *   insn=0x000000000050DCB0 string=0x000000000050DCB4 ""
 *   insn=0x000000000050DCBC string=0x000000000050DCC0 "i"
 *   insn=0x000000000050DCC0 string=0x000000000050DCC8 "("
 *   insn=0x000000000050DCCC string=0x000000000050DCD0 "1"
 *   insn=0x000000000050DCCC string=0x000000000050DCDC "i"
 *   insn=0x000000000050DCD0 string=0x000000000050DD94 "h"
 *   insn=0x000000000050DCDC string=0x000000000050DCE0 "uZ@"
 *   insn=0x000000000050DCE8 string=0x000000000050DCEC ""
 *   insn=0x000000000050DD00 string=0x000000000050DD04 "wZ"
 *   insn=0x000000000050DD10 string=0x000000000050DD14 "z"
 *   insn=0x000000000050DD1C string=0x000000000050DD20 "V"
 *   insn=0x000000000050DD34 string=0x000000000050DD38 "a"
 *   insn=0x000000000050DD58 string=0x000000000050DD5C "T"
 *   insn=0x000000000050DD58 string=0x000000000050DD8C "tv@"
 *   insn=0x000000000050DD60 string=0x000000000050DD64 "8{"
 *   insn=0x000000000050DD64 string=0x000000000050DD68 "hZ@"
 *   insn=0x000000000050DD74 string=0x000000000050DD78 "z"
 *   insn=0x000000000050DD8C string=0x000000000050DD90 "x"
 *   insn=0x000000000050DD94 string=0x000000000050DD98 "y"
 *   insn=0x000000000050DD98 string=0x000000000050DD9C ""
 *   insn=0x000000000050DDA4 string=0x000000000050DDA8 "i"
 *   insn=0x000000000050DDA8 string=0x000000000050DDB0 "("
 *   insn=0x000000000050DDB4 string=0x000000000050DDB8 "2"
 *   insn=0x000000000050DDB4 string=0x000000000050DDC4 "i"
 *   insn=0x000000000050DDB8 string=0x000000000050DE80 "h"
 *   insn=0x000000000050DDC4 string=0x000000000050DDC8 "uf@"
 *   insn=0x000000000050DDD0 string=0x000000000050DDD4 ""
 *   insn=0x000000000050DDE0 string=0x000000000050DDE4 "c"
 *   insn=0x000000000050DDE8 string=0x000000000050DDEC "wf"
 *   insn=0x000000000050DDF8 string=0x000000000050DDFC "z"
 *   insn=0x000000000050DDFC string=0x000000000050DE00 ""
 *   insn=0x000000000050DE04 string=0x000000000050DE08 "V"
 *   insn=0x000000000050DE14 string=0x000000000050DE18 "R"
 *   insn=0x000000000050DE1C string=0x000000000050DE20 "a"
 *   insn=0x000000000050DE34 string=0x000000000050DE38 "J"
 *   insn=0x000000000050DE40 string=0x000000000050DE78 "tv@"
 *   insn=0x000000000050DE44 string=0x000000000050DE48 "T"
 *   insn=0x000000000050DE4C string=0x000000000050DE50 "8{"
 *   insn=0x000000000050DE50 string=0x000000000050DE54 "hf@"
 *   insn=0x000000000050DE60 string=0x000000000050DE64 "?"
 *   insn=0x000000000050DE78 string=0x000000000050DE7C "x"
 *   insn=0x000000000050DE80 string=0x000000000050DE84 "y"
 *   insn=0x000000000050DE84 string=0x000000000050DE88 ""
 *   insn=0x000000000050DE90 string=0x000000000050DE94 "i"
 *   insn=0x000000000050DE94 string=0x000000000050DE9C "("
 *   insn=0x000000000050DEA0 string=0x000000000050DEA4 "/"
 *   insn=0x000000000050DEA0 string=0x000000000050DEB0 "i"
 *   insn=0x000000000050DEB0 string=0x000000000050DEB4 "ur@"
 *   insn=0x000000000050DEBC string=0x000000000050DEC0 ""
 *   insn=0x000000000050DECC string=0x000000000050DED0 "("
 *   insn=0x000000000050DED4 string=0x000000000050DED8 "wr"
 *   insn=0x000000000050DEE4 string=0x000000000050DEE8 "z"
 *   insn=0x000000000050DEF0 string=0x000000000050DEF4 "V"
 *   insn=0x000000000050DF24 string=0x000000000050DF5C "tv@"
 *   insn=0x000000000050DF28 string=0x000000000050DF2C "T"
 *   insn=0x000000000050DF30 string=0x000000000050DF34 "8{"
 *   insn=0x000000000050DF34 string=0x000000000050DF38 "hr@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTModelPODToggleInterleaved(unsigned int *a1, unsigned int a2)
{
  unsigned int *v2; // x19
  __int64 v3; // x23
  __int64 v4; // x24
  __int64 v5; // x25
  unsigned int v6; // w8
  __int64 v7; // x8
  unsigned int v8; // w20
  __int64 v9; // x8
  unsigned int v10; // w9
  __int64 v11; // x20
  unsigned int v12; // w26
  unsigned int v13; // w8
  char *v14; // x22
  unsigned int v15; // w9
  __int64 v16; // x8
  __int64 v17; // x9
  unsigned int v18; // w10
  __int64 v19; // x8
  __int64 v20; // x9
  unsigned int v21; // w10
  __int64 v22; // x8
  __int64 v23; // x10
  unsigned __int64 v24; // x9
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  unsigned int *v27; // x11
  unsigned int v28; // w13
  __int64 v29; // x13
  unsigned int v30; // t1
  unsigned int v31; // w9
  __int64 v32; // x9
  unsigned int v33; // w10
  __int64 v34; // x8
  __int64 v35; // x9
  unsigned int v36; // w10
  __int64 v37; // x8
  __int64 v38; // x9
  unsigned __int64 v39; // x21
  char *v40; // x26
  unsigned __int64 v41; // x23
  size_t v42; // x2
  __int64 v43; // x22
  __int64 v44; // x20
  char *v45; // x20
  __int64 i; // x24
  void *v47; // x0
  unsigned int v48; // w8
  unsigned int v49; // w8
  __int64 v50; // x8
  unsigned int v51; // w8
  size_t v52; // x2
  __int64 v53; // x22
  __int64 v54; // x20
  char *v55; // x20
  __int64 j; // x24
  void *v57; // x0
  unsigned int v58; // w8
  unsigned int v59; // w8
  __int64 v60; // x8
  unsigned int v61; // w8
  size_t v62; // x2
  __int64 v63; // x22
  __int64 v64; // x20
  char *v65; // x20
  __int64 k; // x24
  void *v67; // x0
  unsigned int v68; // w8
  unsigned int v69; // w8
  __int64 v70; // x8
  unsigned int v71; // w8
  size_t v72; // x2
  __int64 v73; // x22
  __int64 v74; // x20
  char *v75; // x20
  __int64 m; // x24
  void *v77; // x0
  unsigned int v78; // w8
  unsigned int v79; // w8
  __int64 v80; // x8
  unsigned int v81; // w8
  size_t v82; // x2
  __int64 v83; // x22
  __int64 v84; // x20
  char *v85; // x20
  __int64 n; // x24
  void *v87; // x0
  unsigned int v88; // w8
  unsigned int v89; // w8
  __int64 v90; // x8
  unsigned int v91; // w8
  unsigned __int64 ii; // x27
  __int64 v93; // x28
  _DWORD *v94; // x25
  unsigned int v95; // w9
  __int64 v96; // x24
  __int64 v97; // x20
  __int64 v98; // x22
  size_t v99; // x2
  _DWORD *v100; // x24
  unsigned int v101; // t1
  char *v102; // x19
  const void **v103; // x26
  char *v104; // x20
  __int64 jj; // x23
  char *v106; // x26
  int v107; // w8
  __int64 v108; // x9
  unsigned int v109; // w8
  __int64 v110; // x8
  size_t v111; // x2
  __int64 v112; // x22
  __int64 v113; // x20
  char *v114; // x20
  __int64 kk; // x23
  void *v116; // x0
  unsigned int v117; // w8
  unsigned int v118; // w8
  __int64 v119; // x8
  unsigned int v120; // w8
  size_t v121; // x2
  __int64 v122; // x22
  __int64 v123; // x20
  char *v124; // x20
  __int64 mm; // x23
  void *v126; // x0
  unsigned int v127; // w8
  unsigned int v128; // w8
  __int64 v129; // x8
  char *v130; // x20
  unsigned int v131; // w22
  __int64 v132; // x23
  int v133; // w24
  __int64 v134; // x25
  unsigned int v135; // w8
  __int64 v136; // x8
  unsigned int v137; // w9
  __int64 v138; // x20
  unsigned int v139; // w26
  unsigned int v140; // w8
  char *v141; // x22
  char *v142; // x20
  unsigned int v143; // w22
  __int64 v144; // x23
  int v145; // w24
  __int64 v146; // x25
  unsigned int v147; // w8
  __int64 v148; // x8
  unsigned int v149; // w9
  __int64 v150; // x20
  unsigned int v151; // w26
  unsigned int v152; // w8
  char *v153; // x22
  char *v154; // x20
  unsigned int v155; // w22
  __int64 v156; // x23
  int v157; // w24
  __int64 v158; // x25
  unsigned int v159; // w8
  __int64 v160; // x8
  unsigned int v161; // w9
  __int64 v162; // x20
  unsigned int v163; // w26
  unsigned int v164; // w8
  char *v165; // x22
  char *v166; // x20
  unsigned int v167; // w22
  __int64 v168; // x23
  int v169; // w24
  unsigned int v170; // w25
  unsigned __int64 nn; // x22
  __int64 v172; // x8
  __int64 v173; // x20
  __int64 v174; // x28
  __int64 v175; // x21
  unsigned int *v176; // x21
  int v177; // w26
  int v178; // t1
  unsigned int v179; // w9
  __int64 v180; // x9
  __int64 v181; // x27
  __int64 v182; // x23
  _QWORD *v183; // x27
  __int64 v184; // t1
  int v185; // w8
  unsigned int v186; // w24
  unsigned int v187; // w8
  void *v188; // x0
  char *v189; // x20
  __int64 v190; // x23
  unsigned int v191; // w25
  int v192; // w28
  char *v193; // x20
  __int64 v194; // x24
  __int64 v195; // x25
  unsigned int v196; // w8
  __int64 v197; // x8
  unsigned int v198; // w9
  __int64 v199; // x21
  unsigned int v200; // w26
  unsigned int v201; // w8
  char *v202; // x23
  char *v203; // x21
  unsigned int v204; // w20
  __int64 v205; // x23
  int v206; // w24
  __int64 v207; // x25
  unsigned int v208; // w8
  __int64 v209; // x8
  unsigned int v210; // w9
  __int64 v211; // x21
  unsigned int v212; // w26
  unsigned int v213; // w8
  char *v214; // x23
  char *v215; // x21
  unsigned int v216; // w20
  __int64 v217; // x23
  int v218; // w24
  __int64 v219; // x25
  unsigned int v220; // w8
  __int64 v221; // x8
  unsigned int v222; // w9
  __int64 v223; // x21
  unsigned int v224; // w26
  unsigned int v225; // w8
  char *v226; // x23
  char *v227; // x21
  unsigned int v228; // w20
  __int64 v229; // x23
  int v230; // w24
  unsigned int *v231; // [xsp+8h] [xbp-68h]
  unsigned __int64 v232; // [xsp+10h] [xbp-60h]
  unsigned __int64 v233; // [xsp+18h] [xbp-58h]

  v2 = a1;
  v3 = *a1;
  if ( (_DWORD)v3 )
  {
    v4 = *((_QWORD *)a1 + 29);
    if ( !v4 )
    {
      v8 = a1[14];
      if ( v8 - 1 > 0xD )
        v9 = 0;
      else
        v9 = qword_59B8A0[v8 - 1];
      v15 = a1[20] - 1;
      v16 = v9 * a1[15];
      if ( v15 > 0xD )
        v17 = 0;
      else
        v17 = qword_59B8A0[v15];
      v18 = a1[26] - 1;
      v19 = v16 + v17 * a1[21];
      if ( v18 > 0xD )
        v20 = 0;
      else
        v20 = qword_59B8A0[v18];
      v21 = a1[32] - 1;
      v22 = v19 + v20 * a1[27];
      if ( v21 > 0xD )
        v23 = 0;
      else
        v23 = qword_59B8A0[v21];
      v24 = a1[2];
      v25 = v22 + v23 * a1[33];
      if ( (_DWORD)v24 )
      {
        v26 = 0;
        v27 = (unsigned int *)(*((_QWORD *)a1 + 19) + 4LL);
        do
        {
          v28 = *(v27 - 1) - 1;
          if ( v28 > 0xD )
            v29 = 0;
          else
            v29 = qword_59B8A0[v28];
          v30 = *v27;
          v27 += 6;
          ++v26;
          v25 += v29 * v30;
        }
        while ( v26 < v24 );
      }
      v31 = a1[40] - 1;
      if ( v31 > 0xD )
        v32 = 0;
      else
        v32 = qword_59B8A0[v31];
      v33 = a1[46] - 1;
      v34 = v25 + v32 * a1[41];
      if ( v33 > 0xD )
        v35 = 0;
      else
        v35 = qword_59B8A0[v33];
      v36 = a1[52] - 1;
      v37 = v34 + v35 * a1[47];
      if ( v36 > 0xD )
        v38 = 0;
      else
        v38 = qword_59B8A0[v36];
      v39 = v37 + v38 * a1[53];
      if ( a2 >= 2 )
        v39 += (a2 - v39 % a2) % a2;
      if ( v39 * v3 )
        *((_QWORD *)a1 + 29) = calloc(v39 * v3, 1u);
      v40 = 0;
      v41 = 4;
      v233 = v39;
      v231 = v2;
      while ( 1 )
      {
        if ( v8 - 1 <= 0xD && qword_59B8A0[v8 - 1] == v41 )
        {
          v42 = v2[16];
          if ( (_DWORD)v42 )
          {
            v43 = *v2;
            if ( (int)v43 >= 1 )
            {
              v44 = *((_QWORD *)v2 + 29);
              memcpy(&v40[v44], *((const void **)v2 + 9), v42);
              if ( (_DWORD)v43 != 1 )
              {
                v45 = &v40[v44 + v39];
                for ( i = 1; i != v43; ++i )
                {
                  memcpy(v45, (const void *)(*((_QWORD *)v2 + 9) + v2[16] * (unsigned int)i), v2[16]);
                  v45 += v39;
                }
              }
            }
            v47 = (void *)*((_QWORD *)v2 + 9);
            if ( v47 )
            {
              free(v47);
              *((_QWORD *)v2 + 9) = 0;
            }
            v48 = v2[14];
            v2[16] = v39;
            *((_QWORD *)v2 + 9) = v40;
            v49 = v48 - 1;
            if ( v49 > 0xD )
              v50 = 0;
            else
              v50 = qword_59B830[v49];
            v40 += (v50 * v2[15]) >> 32;
          }
        }
        v51 = v2[20] - 1;
        if ( v51 <= 0xD && qword_59B8A0[v51] == v41 )
        {
          v52 = v2[22];
          if ( (_DWORD)v52 )
          {
            v53 = *v2;
            if ( (int)v53 >= 1 )
            {
              v54 = *((_QWORD *)v2 + 29);
              memcpy(&v40[v54], *((const void **)v2 + 12), v52);
              if ( (_DWORD)v53 != 1 )
              {
                v55 = &v40[v54 + v39];
                for ( j = 1; j != v53; ++j )
                {
                  memcpy(v55, (const void *)(*((_QWORD *)v2 + 12) + v2[22] * (unsigned int)j), v2[22]);
                  v55 += v39;
                }
              }
            }
            v57 = (void *)*((_QWORD *)v2 + 12);
            if ( v57 )
            {
              free(v57);
              *((_QWORD *)v2 + 12) = 0;
            }
            v58 = v2[20];
            v2[22] = v39;
            *((_QWORD *)v2 + 12) = v40;
            v59 = v58 - 1;
            if ( v59 > 0xD )
              v60 = 0;
            else
              v60 = qword_59B830[v59];
            v40 += (v60 * v2[21]) >> 32;
          }
        }
        v61 = v2[26] - 1;
        if ( v61 <= 0xD && qword_59B8A0[v61] == v41 )
        {
          v62 = v2[28];
          if ( (_DWORD)v62 )
          {
            v63 = *v2;
            if ( (int)v63 >= 1 )
            {
              v64 = *((_QWORD *)v2 + 29);
              memcpy(&v40[v64], *((const void **)v2 + 15), v62);
              if ( (_DWORD)v63 != 1 )
              {
                v65 = &v40[v64 + v39];
                for ( k = 1; k != v63; ++k )
                {
                  memcpy(v65, (const void *)(*((_QWORD *)v2 + 15) + v2[28] * (unsigned int)k), v2[28]);
                  v65 += v39;
                }
              }
            }
            v67 = (void *)*((_QWORD *)v2 + 15);
            if ( v67 )
            {
              free(v67);
              *((_QWORD *)v2 + 15) = 0;
            }
            v68 = v2[26];
            v2[28] = v39;
            *((_QWORD *)v2 + 15) = v40;
            v69 = v68 - 1;
            if ( v69 > 0xD )
              v70 = 0;
            else
              v70 = qword_59B830[v69];
            v40 += (v70 * v2[27]) >> 32;
          }
        }
        v71 = v2[32] - 1;
        if ( v71 <= 0xD && qword_59B8A0[v71] == v41 )
        {
          v72 = v2[34];
          if ( (_DWORD)v72 )
          {
            v73 = *v2;
            if ( (int)v73 >= 1 )
            {
              v74 = *((_QWORD *)v2 + 29);
              memcpy(&v40[v74], *((const void **)v2 + 18), v72);
              if ( (_DWORD)v73 != 1 )
              {
                v75 = &v40[v74 + v39];
                for ( m = 1; m != v73; ++m )
                {
                  memcpy(v75, (const void *)(*((_QWORD *)v2 + 18) + v2[34] * (unsigned int)m), v2[34]);
                  v75 += v39;
                }
              }
            }
            v77 = (void *)*((_QWORD *)v2 + 18);
            if ( v77 )
            {
              free(v77);
              *((_QWORD *)v2 + 18) = 0;
            }
            v78 = v2[32];
            v2[34] = v39;
            *((_QWORD *)v2 + 18) = v40;
            v79 = v78 - 1;
            if ( v79 > 0xD )
              v80 = 0;
            else
              v80 = qword_59B830[v79];
            v40 += (v80 * v2[33]) >> 32;
          }
        }
        v81 = v2[40] - 1;
        if ( v81 <= 0xD && qword_59B8A0[v81] == v41 )
        {
          v82 = v2[42];
          if ( (_DWORD)v82 )
          {
            v83 = *v2;
            if ( (int)v83 >= 1 )
            {
              v84 = *((_QWORD *)v2 + 29);
              memcpy(&v40[v84], *((const void **)v2 + 22), v82);
              if ( (_DWORD)v83 != 1 )
              {
                v85 = &v40[v84 + v39];
                for ( n = 1; n != v83; ++n )
                {
                  memcpy(v85, (const void *)(*((_QWORD *)v2 + 22) + v2[42] * (unsigned int)n), v2[42]);
                  v85 += v39;
                }
              }
            }
            v87 = (void *)*((_QWORD *)v2 + 22);
            if ( v87 )
            {
              free(v87);
              *((_QWORD *)v2 + 22) = 0;
            }
            v88 = v2[40];
            v2[42] = v39;
            *((_QWORD *)v2 + 22) = v40;
            v89 = v88 - 1;
            if ( v89 > 0xD )
              v90 = 0;
            else
              v90 = qword_59B830[v89];
            v40 += (v90 * v2[41]) >> 32;
          }
        }
        v91 = v2[2];
        v232 = v41;
        if ( v91 )
        {
          for ( ii = 0; ii < v91; ++ii )
          {
            v93 = *((_QWORD *)v2 + 19);
            v94 = (_DWORD *)(v93 + 24 * ii);
            v95 = *v94 - 1;
            if ( v95 <= 0xD && qword_59B8A0[v95] == v41 )
            {
              v96 = v93 + 24 * ii;
              v97 = *((_QWORD *)v2 + 29);
              v98 = *v2;
              v101 = *(_DWORD *)(v96 + 8);
              v100 = (_DWORD *)(v96 + 8);
              v99 = v101;
              if ( v101 )
              {
                v102 = v40;
                v103 = (const void **)(v93 + 24 * ii + 16);
                if ( (int)v98 >= 1 )
                {
                  memcpy(&v102[v97], *v103, v99);
                  if ( (_DWORD)v98 != 1 )
                  {
                    v104 = &v102[v97 + v233];
                    for ( jj = 1; jj != v98; ++jj )
                    {
                      memcpy(v104, (char *)*v103 + (unsigned int)(*v100 * jj), (unsigned int)*v100);
                      v104 += v233;
                    }
                  }
                }
                if ( *v103 )
                {
                  free((void *)*v103);
                  *v103 = 0;
                }
                *v100 = v233;
                *v103 = v102;
                v106 = v102;
                v107 = *v94 - 1;
                if ( (unsigned int)v107 > 0xD )
                  v108 = 0;
                else
                  v108 = qword_59B830[v107];
                v2 = v231;
                v41 = v232;
                v91 = v231[2];
                v40 = &v106[(v108 * *(unsigned int *)(v93 + 24 * ii + 4)) >> 32];
              }
            }
          }
        }
        v109 = v2[46] - 1;
        if ( v109 > 0xD )
          v110 = 0;
        else
          v110 = qword_59B8A0[v109];
        v39 = v233;
        if ( v110 == v41 )
        {
          v111 = v2[48];
          if ( (_DWORD)v111 )
          {
            v112 = *v2;
            if ( (int)v112 >= 1 )
            {
              v113 = *((_QWORD *)v2 + 29);
              memcpy(&v40[v113], *((const void **)v2 + 25), v111);
              if ( (_DWORD)v112 != 1 )
              {
                v114 = &v40[v113 + v233];
                for ( kk = 1; kk != v112; ++kk )
                {
                  memcpy(v114, (const void *)(*((_QWORD *)v2 + 25) + v2[48] * (unsigned int)kk), v2[48]);
                  v114 += v233;
                }
              }
            }
            v116 = (void *)*((_QWORD *)v2 + 25);
            if ( v116 )
            {
              free(v116);
              *((_QWORD *)v2 + 25) = 0;
            }
            v117 = v2[46];
            v2[48] = v233;
            *((_QWORD *)v2 + 25) = v40;
            v118 = v117 - 1;
            if ( v118 > 0xD )
              v119 = 0;
            else
              v119 = qword_59B830[v118];
            v41 = v232;
            v40 += (v119 * v2[47]) >> 32;
          }
        }
        v120 = v2[52] - 1;
        if ( v120 <= 0xD && qword_59B8A0[v120] == v41 && (v121 = v2[54], (_DWORD)v121) )
        {
          v122 = *v2;
          if ( (int)v122 >= 1 )
          {
            v123 = *((_QWORD *)v2 + 29);
            memcpy(&v40[v123], *((const void **)v2 + 28), v121);
            if ( (_DWORD)v122 != 1 )
            {
              v124 = &v40[v123 + v233];
              for ( mm = 1; mm != v122; ++mm )
              {
                memcpy(v124, (const void *)(*((_QWORD *)v2 + 28) + v2[54] * (unsigned int)mm), v2[54]);
                v124 += v233;
              }
            }
          }
          v126 = (void *)*((_QWORD *)v2 + 28);
          if ( v126 )
          {
            free(v126);
            *((_QWORD *)v2 + 28) = 0;
          }
          v127 = v2[52];
          v2[54] = v233;
          *((_QWORD *)v2 + 28) = v40;
          v128 = v127 - 1;
          if ( v128 > 0xD )
            v129 = 0;
          else
            v129 = qword_59B830[v128];
          v40 += (v129 * v2[53]) >> 32;
          v41 = v232 >> 1;
          if ( !(v232 >> 1) )
            return;
        }
        else
        {
          v41 >>= 1;
          if ( !v41 )
            return;
        }
        v8 = v2[14];
      }
    }
    v5 = a1[16];
    v6 = a1[14] - 1;
    if ( v6 > 0xD )
    {
      LODWORD(v7) = 0;
      if ( !(_DWORD)v5 )
        goto LABEL_169;
    }
    else
    {
      v7 = qword_59B8A0[v6];
      if ( !(_DWORD)v5 )
        goto LABEL_169;
    }
    v10 = a1[15];
    v11 = *((_QWORD *)a1 + 9);
    *((_QWORD *)a1 + 9) = 0;
    v12 = v7 * v10;
    v13 = v3 * v7 * v10;
    if ( v13 )
    {
      v14 = (char *)calloc(v13, 1u);
      *((_QWORD *)v2 + 9) = v14;
    }
    else
    {
      v14 = 0;
    }
    v2[16] = v12;
    if ( (int)v3 >= 1 )
    {
      v130 = (char *)(v4 + v11);
      memcpy(v14, v130, v12);
      if ( (_DWORD)v3 == 1 )
      {
        LODWORD(v3) = 1;
      }
      else
      {
        memcpy(&v14[v12], &v130[v5], v12);
        if ( (_DWORD)v3 != 2 )
        {
          v131 = 2 * v12;
          v132 = v3 - 2;
          v133 = 2 * v5;
          do
          {
            memcpy((void *)(*((_QWORD *)v2 + 9) + v131), &v130[v133], v12);
            v131 += v12;
            --v132;
            v133 += v5;
          }
          while ( v132 );
        }
        v4 = *((_QWORD *)v2 + 29);
        LODWORD(v3) = *v2;
      }
    }
LABEL_169:
    v134 = v2[22];
    v135 = v2[20] - 1;
    if ( v135 > 0xD )
    {
      LODWORD(v136) = 0;
      if ( !(_DWORD)v134 )
        goto LABEL_183;
    }
    else
    {
      v136 = qword_59B8A0[v135];
      if ( !(_DWORD)v134 )
        goto LABEL_183;
    }
    v137 = v2[21];
    v138 = *((_QWORD *)v2 + 12);
    *((_QWORD *)v2 + 12) = 0;
    v139 = v136 * v137;
    v140 = v3 * v136 * v137;
    if ( v140 )
    {
      v141 = (char *)calloc(v140, 1u);
      *((_QWORD *)v2 + 12) = v141;
    }
    else
    {
      v141 = 0;
    }
    v2[22] = v139;
    if ( (int)v3 >= 1 )
    {
      v142 = (char *)(v4 + v138);
      memcpy(v141, v142, v139);
      if ( (_DWORD)v3 == 1 )
      {
        LODWORD(v3) = 1;
      }
      else
      {
        memcpy(&v141[v139], &v142[v134], v139);
        if ( (_DWORD)v3 != 2 )
        {
          v143 = 2 * v139;
          v144 = (unsigned int)v3 - 2LL;
          v145 = 2 * v134;
          do
          {
            memcpy((void *)(*((_QWORD *)v2 + 12) + v143), &v142[v145], v139);
            v143 += v139;
            --v144;
            v145 += v134;
          }
          while ( v144 );
        }
        v4 = *((_QWORD *)v2 + 29);
        LODWORD(v3) = *v2;
      }
    }
LABEL_183:
    v146 = v2[28];
    v147 = v2[26] - 1;
    if ( v147 > 0xD )
    {
      LODWORD(v148) = 0;
      if ( !(_DWORD)v146 )
        goto LABEL_197;
    }
    else
    {
      v148 = qword_59B8A0[v147];
      if ( !(_DWORD)v146 )
        goto LABEL_197;
    }
    v149 = v2[27];
    v150 = *((_QWORD *)v2 + 15);
    *((_QWORD *)v2 + 15) = 0;
    v151 = v148 * v149;
    v152 = v3 * v148 * v149;
    if ( v152 )
    {
      v153 = (char *)calloc(v152, 1u);
      *((_QWORD *)v2 + 15) = v153;
    }
    else
    {
      v153 = 0;
    }
    v2[28] = v151;
    if ( (int)v3 >= 1 )
    {
      v154 = (char *)(v4 + v150);
      memcpy(v153, v154, v151);
      if ( (_DWORD)v3 == 1 )
      {
        LODWORD(v3) = 1;
      }
      else
      {
        memcpy(&v153[v151], &v154[v146], v151);
        if ( (_DWORD)v3 != 2 )
        {
          v155 = 2 * v151;
          v156 = (unsigned int)v3 - 2LL;
          v157 = 2 * v146;
          do
          {
            memcpy((void *)(*((_QWORD *)v2 + 15) + v155), &v154[v157], v151);
            v155 += v151;
            --v156;
            v157 += v146;
          }
          while ( v156 );
        }
        v4 = *((_QWORD *)v2 + 29);
        LODWORD(v3) = *v2;
      }
    }
LABEL_197:
    v158 = v2[34];
    v159 = v2[32] - 1;
    if ( v159 > 0xD )
    {
      LODWORD(v160) = 0;
      if ( !(_DWORD)v158 )
        goto LABEL_209;
    }
    else
    {
      v160 = qword_59B8A0[v159];
      if ( !(_DWORD)v158 )
        goto LABEL_209;
    }
    v161 = v2[33];
    v162 = *((_QWORD *)v2 + 18);
    *((_QWORD *)v2 + 18) = 0;
    v163 = v160 * v161;
    v164 = v3 * v160 * v161;
    if ( v164 )
    {
      v165 = (char *)calloc(v164, 1u);
      *((_QWORD *)v2 + 18) = v165;
    }
    else
    {
      v165 = 0;
    }
    v2[34] = v163;
    if ( (int)v3 >= 1 )
    {
      v166 = (char *)(v4 + v162);
      memcpy(v165, v166, v163);
      if ( (_DWORD)v3 != 1 )
      {
        memcpy(&v165[v163], &v166[v158], v163);
        if ( (_DWORD)v3 != 2 )
        {
          v167 = 2 * v163;
          v168 = (unsigned int)v3 - 2LL;
          v169 = 2 * v158;
          do
          {
            memcpy((void *)(*((_QWORD *)v2 + 18) + v167), &v166[v169], v163);
            v167 += v163;
            --v168;
            v169 += v158;
          }
          while ( v168 );
        }
      }
    }
LABEL_209:
    v170 = v2[2];
    if ( v170 )
    {
      for ( nn = 0; nn < v170; ++nn )
      {
        v172 = *((_QWORD *)v2 + 19);
        v173 = *((_QWORD *)v2 + 29);
        v174 = *v2;
        v175 = v172 + 24 * nn;
        v178 = *(_DWORD *)(v175 + 8);
        v176 = (unsigned int *)(v175 + 8);
        v177 = v178;
        v179 = *(_DWORD *)(v172 + 24 * nn) - 1;
        if ( v179 > 0xD )
          LODWORD(v180) = 0;
        else
          v180 = qword_59B8A0[v179];
        v181 = v172 + 24 * nn;
        v184 = *(_QWORD *)(v181 + 16);
        v183 = (_QWORD *)(v181 + 16);
        v182 = v184;
        if ( v177 )
        {
          v185 = *((_DWORD *)v183 - 3);
          *v183 = 0;
          v186 = v180 * v185;
          v187 = v174 * v180 * v185;
          if ( v187 )
          {
            v188 = calloc(v187, 1u);
            *v183 = v188;
          }
          else
          {
            v188 = 0;
          }
          *v176 = v186;
          if ( (int)v174 >= 1 )
          {
            v189 = (char *)(v173 + v182);
            memcpy(v188, v189, v186);
            if ( (_DWORD)v174 != 1 )
            {
              v190 = v174 - 1;
              v191 = v186;
              v192 = v177;
              do
              {
                memcpy((void *)(*v183 + v191), &v189[v192], v186);
                v192 += v177;
                --v190;
                v191 += v186;
              }
              while ( v190 );
              v170 = v2[2];
            }
          }
        }
      }
    }
    v193 = (char *)*((_QWORD *)v2 + 29);
    v194 = *v2;
    v195 = v2[42];
    v196 = v2[40] - 1;
    if ( v196 > 0xD )
    {
      LODWORD(v197) = 0;
      if ( !(_DWORD)v195 )
        goto LABEL_238;
    }
    else
    {
      v197 = qword_59B8A0[v196];
      if ( !(_DWORD)v195 )
        goto LABEL_238;
    }
    v198 = v2[41];
    v199 = *((_QWORD *)v2 + 22);
    *((_QWORD *)v2 + 22) = 0;
    v200 = v197 * v198;
    v201 = v194 * v197 * v198;
    if ( v201 )
    {
      v202 = (char *)calloc(v201, 1u);
      *((_QWORD *)v2 + 22) = v202;
    }
    else
    {
      v202 = 0;
    }
    v2[42] = v200;
    if ( (int)v194 >= 1 )
    {
      v203 = &v193[v199];
      memcpy(v202, v203, v200);
      if ( (_DWORD)v194 == 1 )
      {
        LODWORD(v194) = 1;
      }
      else
      {
        memcpy(&v202[v200], &v203[v195], v200);
        if ( (_DWORD)v194 != 2 )
        {
          v204 = 2 * v200;
          v205 = v194 - 2;
          v206 = 2 * v195;
          do
          {
            memcpy((void *)(*((_QWORD *)v2 + 22) + v204), &v203[v206], v200);
            v204 += v200;
            --v205;
            v206 += v195;
          }
          while ( v205 );
        }
        v193 = (char *)*((_QWORD *)v2 + 29);
        LODWORD(v194) = *v2;
      }
    }
LABEL_238:
    v207 = v2[48];
    v208 = v2[46] - 1;
    if ( v208 > 0xD )
    {
      LODWORD(v209) = 0;
      if ( !(_DWORD)v207 )
        goto LABEL_252;
    }
    else
    {
      v209 = qword_59B8A0[v208];
      if ( !(_DWORD)v207 )
        goto LABEL_252;
    }
    v210 = v2[47];
    v211 = *((_QWORD *)v2 + 25);
    *((_QWORD *)v2 + 25) = 0;
    v212 = v209 * v210;
    v213 = v194 * v209 * v210;
    if ( v213 )
    {
      v214 = (char *)calloc(v213, 1u);
      *((_QWORD *)v2 + 25) = v214;
    }
    else
    {
      v214 = 0;
    }
    v2[48] = v212;
    if ( (int)v194 >= 1 )
    {
      v215 = &v193[v211];
      memcpy(v214, v215, v212);
      if ( (_DWORD)v194 == 1 )
      {
        LODWORD(v194) = 1;
      }
      else
      {
        memcpy(&v214[v212], &v215[v207], v212);
        if ( (_DWORD)v194 != 2 )
        {
          v216 = 2 * v212;
          v217 = (unsigned int)v194 - 2LL;
          v218 = 2 * v207;
          do
          {
            memcpy((void *)(*((_QWORD *)v2 + 25) + v216), &v215[v218], v212);
            v216 += v212;
            --v217;
            v218 += v207;
          }
          while ( v217 );
        }
        v193 = (char *)*((_QWORD *)v2 + 29);
        LODWORD(v194) = *v2;
      }
    }
LABEL_252:
    v219 = v2[54];
    v220 = v2[52] - 1;
    if ( v220 > 0xD )
    {
      LODWORD(v221) = 0;
      if ( !(_DWORD)v219 )
        goto LABEL_265;
    }
    else
    {
      v221 = qword_59B8A0[v220];
      if ( !(_DWORD)v219 )
      {
LABEL_265:
        if ( v193 )
        {
          free(v193);
          *((_QWORD *)v2 + 29) = 0;
        }
        return;
      }
    }
    v222 = v2[53];
    v223 = *((_QWORD *)v2 + 28);
    *((_QWORD *)v2 + 28) = 0;
    v224 = v221 * v222;
    v225 = v194 * v221 * v222;
    if ( v225 )
    {
      v226 = (char *)calloc(v225, 1u);
      *((_QWORD *)v2 + 28) = v226;
    }
    else
    {
      v226 = 0;
    }
    v2[54] = v224;
    if ( (int)v194 >= 1 )
    {
      v227 = &v193[v223];
      memcpy(v226, v227, v224);
      if ( (_DWORD)v194 != 1 )
      {
        memcpy(&v226[v224], &v227[v219], v224);
        if ( (_DWORD)v194 != 2 )
        {
          v228 = 2 * v224;
          v229 = (unsigned int)v194 - 2LL;
          v230 = 2 * v219;
          do
          {
            memcpy((void *)(*((_QWORD *)v2 + 28) + v228), &v227[v230], v224);
            v228 += v224;
            --v229;
            v230 += v219;
          }
          while ( v229 );
        }
        v193 = (char *)*((_QWORD *)v2 + 29);
      }
    }
    goto LABEL_265;
  }
}

