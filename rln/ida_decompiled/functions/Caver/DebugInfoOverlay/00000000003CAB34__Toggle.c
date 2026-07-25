/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CAB34
 * Mangled: _ZN5Caver16DebugInfoOverlay6ToggleEv
 * Demangled: Caver::DebugInfoOverlay::Toggle(void)
 *
 * Callers: 1
 *   0x00000000001FFDD0  Caver::DebugInfoOverlay::Toggle(void)
 *
 * Callees: 28
 *   0x00000000001F36B0  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F9930  Caver::Font::SmallSystemFont(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FAF70  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *   0x00000000001FB4E0  Caver::GUIView::RemoveAllSubviews(void)
 *   0x00000000001FC330  Caver::DebugInfoOverlay::SetTextureMemoryUsage(int)
 *   0x00000000001FE360  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *   0x00000000001FF170  Caver::DebugInfoOverlay::FormatByteSize(int)
 *   0x0000000000200250  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel *)
 *   0x0000000000203A80  Caver::DebugInfoOverlay::SetFPS(float)
 *   0x0000000000203AE0  Caver::DebugInfoOverlay::SetNumTriangles(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000541620  sub_541620
 *   0x00000000005459D8  sub_5459D8
 *   0x0000000000546A98  sub_546A98
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 335
 *   insn=0x00000000003CAB54 string=0x00000000003CAB58 "V"
 *   insn=0x00000000003CAB64 string=0x00000000003CAB68 "^"
 *   insn=0x00000000003CAB68 string=0x00000000003CAB6C "wbS"
 *   insn=0x00000000003CAB68 string=0x00000000001FB4E0 "0'"
 *   insn=0x00000000003CAB6C string=0x00000000003CAB70 "t"
 *   insn=0x00000000003CAB78 string=0x00000000003CABD4 "hfA"
 *   insn=0x00000000003CAB7C string=0x00000000003CAB80 "5@"
 *   insn=0x00000000003CAB80 string=0x00000000003CAB84 "5"
 *   insn=0x00000000003CAB84 string=0x00000000003CABC8 "9C"
 *   insn=0x00000000003CAB88 string=0x00000000003CAB8C ""
 *   insn=0x00000000003CAB9C string=0x00000000003CABA0 "\t@"
 *   insn=0x00000000003CABA8 string=0x00000000003CABAC ""
 *   insn=0x00000000003CABBC string=0x00000000003CABC0 "@"
 *   insn=0x00000000003CABD4 string=0x00000000003CABD8 "w"
 *   insn=0x00000000003CABE4 string=0x00000000003CABE8 "hf"
 *   insn=0x00000000003CABF0 string=0x00000000003CAF2C "wbS"
 *   insn=0x00000000003CABF4 string=0x00000000003CABF8 "z"
 *   insn=0x00000000003CABF8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003CAC00 string=0x00000000001F53C0 "P'"
 *   insn=0x00000000003CAC0C string=0x00000000003CAC10 "hVO"
 *   insn=0x00000000003CAC1C string=0x00000000003CAC20 "i""
 *   insn=0x00000000003CAC24 string=0x00000000003CAC28 "5"
 *   insn=0x00000000003CAC28 string=0x00000000003CAC6C "a"
 *   insn=0x00000000003CAC2C string=0x00000000003CAC30 ""
 *   insn=0x00000000003CAC40 string=0x00000000003CAC44 "\t@"
 *   insn=0x00000000003CAC4C string=0x00000000003CAC50 ""
 *   insn=0x00000000003CAC60 string=0x00000000003CAC64 "@"
 *   insn=0x00000000003CAC6C string=0x00000000003CAC70 "?"
 *   insn=0x00000000003CAC74 string=0x00000000003CAC78 "hz@"
 *   insn=0x00000000003CAC74 string=0x00000000003CAD54 "b"
 *   insn=0x00000000003CAC78 string=0x00000000003CAC7C "("
 *   insn=0x00000000003CAC7C string=0x00000000003CAC80 "h~@"
 *   insn=0x00000000003CAC80 string=0x00000000003CAC84 "("
 *   insn=0x00000000003CAC88 string=0x00000000003CAC8C "\t"
 *   insn=0x00000000003CAC88 string=0x00000000003CAC98 "(@"
 *   insn=0x00000000003CAC8C string=0x00000000003CAC90 ")"
 *   insn=0x00000000003CAC90 string=0x00000000003CAC94 "\t"
 *   insn=0x00000000003CAC98 string=0x00000000003CAC9C "h"
 *   insn=0x00000000003CAC9C string=0x00000000003CACA0 "0"
 *   insn=0x00000000003CACA0 string=0x00000000003CAD60 "h2"
 *   insn=0x00000000003CACA4 string=0x00000000003CACA8 "N"
 *   insn=0x00000000003CACB8 string=0x00000000003CACBC "e"
 *   insn=0x00000000003CACBC string=0x00000000003CACC0 "hVP"
 *   insn=0x00000000003CACCC string=0x00000000003CACD0 "i""
 *   insn=0x00000000003CACD4 string=0x00000000003CACD8 "5"
 *   insn=0x00000000003CACD8 string=0x00000000003CAD1C "a"
 *   insn=0x00000000003CACDC string=0x00000000003CACE0 ""
 *   insn=0x00000000003CACF0 string=0x00000000003CACF4 "\t@"
 *   insn=0x00000000003CACFC string=0x00000000003CAD00 ""
 *   insn=0x00000000003CAD10 string=0x00000000003CAD14 "@"
 *   insn=0x00000000003CAD1C string=0x00000000003CAD20 "?"
 *   insn=0x00000000003CAD24 string=0x00000000003CAD28 "h"
 *   insn=0x00000000003CAD24 string=0x00000000003CAD78 "b"
 *   insn=0x00000000003CAD28 string=0x00000000003CAD2C "("
 *   insn=0x00000000003CAD2C string=0x00000000003CAD30 "h"
 *   insn=0x00000000003CAD30 string=0x00000000003CAD34 "("
 *   insn=0x00000000003CAD38 string=0x00000000003CAD3C "\t"
 *   insn=0x00000000003CAD38 string=0x00000000003CAD48 "(@"
 *   insn=0x00000000003CAD3C string=0x00000000003CAD40 ")"
 *   insn=0x00000000003CAD40 string=0x00000000003CAD44 "\t"
 *   insn=0x00000000003CAD48 string=0x00000000003CAD4C "h"
 *   insn=0x00000000003CAD4C string=0x00000000003CAD50 ""
 *   insn=0x00000000003CAD58 string=0x00000000003CAD5C "U"
 *   insn=0x00000000003CAD5C string=0x00000000001F36B0 "P'"
 *   insn=0x00000000003CAD6C string=0x00000000003CAD70 "D"
 *   insn=0x00000000003CAD70 string=0x00000000003CAD74 "n"
 *   insn=0x00000000003CAD7C string=0x00000000003CAD80 "L"
 *   insn=0x00000000003CAD98 string=0x00000000003CAD9C "-"
 *   insn=0x00000000003CAD9C string=0x00000000003CADA0 "hVQ"
 *   insn=0x00000000003CADAC string=0x00000000003CADB0 "i""
 *   insn=0x00000000003CADB4 string=0x00000000003CADB8 "5"
 *   insn=0x00000000003CADB8 string=0x00000000003CADFC "a"
 *   insn=0x00000000003CADBC string=0x00000000003CADC0 ""
 *   insn=0x00000000003CADD0 string=0x00000000003CADD4 "\t@"
 *   insn=0x00000000003CADDC string=0x00000000003CADE0 ""
 *   insn=0x00000000003CADF0 string=0x00000000003CADF4 "@"
 *   insn=0x00000000003CADFC string=0x00000000003CAE00 "?"
 *   insn=0x00000000003CAE04 string=0x00000000003CAE08 "h"
 *   insn=0x00000000003CAE04 string=0x00000000003CAE34 "bB"
 *   insn=0x00000000003CAE08 string=0x00000000003CAE0C "("
 *   insn=0x00000000003CAE0C string=0x00000000003CAE10 "h"
 *   insn=0x00000000003CAE10 string=0x00000000003CAE14 "("
 *   insn=0x00000000003CAE18 string=0x00000000003CAE1C "\t"
 *   insn=0x00000000003CAE18 string=0x00000000003CAE28 "(@"
 *   insn=0x00000000003CAE1C string=0x00000000003CAE20 ")"
 *   insn=0x00000000003CAE20 string=0x00000000003CAE24 "\t"
 *   insn=0x00000000003CAE28 string=0x00000000003CAE2C "h"
 *   insn=0x00000000003CAE48 string=0x00000000003CAE4C "]"
 *   insn=0x00000000003CAE58 string=0x00000000003CAE5C "hVR"
 *   insn=0x00000000003CAE68 string=0x00000000003CAE6C "i""
 *   insn=0x00000000003CAE70 string=0x00000000003CAE74 "5"
 *   insn=0x00000000003CAE74 string=0x00000000003CAEB8 "a"
 *   insn=0x00000000003CAE78 string=0x00000000003CAE7C ""
 *   insn=0x00000000003CAE8C string=0x00000000003CAE90 "\t@"
 *   insn=0x00000000003CAE98 string=0x00000000003CAE9C ""
 *   insn=0x00000000003CAEAC string=0x00000000003CAEB0 "@"
 *   insn=0x00000000003CAEB8 string=0x00000000003CAEBC "?"
 *   insn=0x00000000003CAEC0 string=0x00000000003CAEC4 "h"
 *   insn=0x00000000003CAEC0 string=0x00000000003CAEF0 "b"
 *   insn=0x00000000003CAEC4 string=0x00000000003CAEC8 "("
 *   insn=0x00000000003CAEC8 string=0x00000000003CAECC "h"
 *   insn=0x00000000003CAECC string=0x00000000003CAED0 "("
 *   insn=0x00000000003CAED4 string=0x00000000003CAED8 "\t"
 *   insn=0x00000000003CAED4 string=0x00000000003CAEE4 "(@"
 *   insn=0x00000000003CAED8 string=0x00000000003CAEDC ")"
 *   insn=0x00000000003CAEDC string=0x00000000003CAEE0 "\t"
 *   insn=0x00000000003CAEE4 string=0x00000000003CAEE8 "h"
 *   insn=0x00000000003CAF00 string=0x00000000003CAF04 ""
 *   insn=0x00000000003CAF04 string=0x00000000001FC330 "0'"
 *   insn=0x00000000003CAF14 string=0x00000000001FAF70 "0'"
 *   insn=0x00000000003CAF20 string=0x00000000003CAF24 ""
 *   insn=0x00000000003CAF24 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003CAF34 string=0x00000000003CB148 "h"
 *   insn=0x00000000003CAF38 string=0x00000000003CAF3C ""
 *   insn=0x00000000003CAF44 string=0x00000000003CAF48 ""
 *   insn=0x00000000003CAF54 string=0x00000000003CAF58 "A"
 *   insn=0x00000000003CAF88 string=0x00000000003CAF8C "5"
 *   insn=0x00000000003CAF90 string=0x00000000003CAF94 ""
 *   insn=0x00000000003CAFA4 string=0x00000000003CAFA8 "\t@"
 *   insn=0x00000000003CAFB0 string=0x00000000003CAFB4 ""
 *   insn=0x00000000003CAFC4 string=0x00000000003CAFC8 "@"
 *   insn=0x00000000003CAFD0 string=0x00000000003CAFD4 "O"
 *   insn=0x00000000003CAFD4 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003CAFEC string=0x00000000003CAFF0 "H"
 *   insn=0x00000000003CAFF8 string=0x00000000003CAFFC "M"
 *   insn=0x00000000003CAFFC string=0x00000000001F9930 "0'"
 *   insn=0x00000000003CB008 string=0x00000000003CB00C "`"
 *   insn=0x00000000003CB014 string=0x00000000003CB018 "*"
 *   insn=0x00000000003CB018 string=0x00000000003CB01C "J"
 *   insn=0x00000000003CB01C string=0x00000000003CB020 "*"
 *   insn=0x00000000003CB028 string=0x00000000003CB02C "5"
 *   insn=0x00000000003CB030 string=0x00000000003CB034 ""
 *   insn=0x00000000003CB040 string=0x00000000003CB044 "\t@"
 *   insn=0x00000000003CB050 string=0x00000000003CB054 ""
 *   insn=0x00000000003CB060 string=0x00000000003CB064 "@"
 *   insn=0x00000000003CB070 string=0x00000000003CB074 "'"
 *   insn=0x00000000003CB078 string=0x00000000003CB07C "4"
 *   insn=0x00000000003CB07C string=0x00000000003CB0C0 "h"
 *   insn=0x00000000003CB080 string=0x00000000003CB084 ""
 *   insn=0x00000000003CB094 string=0x00000000003CB098 "\t@"
 *   insn=0x00000000003CB0A0 string=0x00000000003CB0A4 ""
 *   insn=0x00000000003CB0B4 string=0x00000000003CB0B8 "@"
 *   insn=0x00000000003CB0C4 string=0x00000000003CB0C8 "1@"
 *   insn=0x00000000003CB0D8 string=0x00000000003CB0DC "*"
 *   insn=0x00000000003CB0DC string=0x00000000003CB0E0 "J"
 *   insn=0x00000000003CB0E0 string=0x00000000003CB0E4 "*"
 *   insn=0x00000000003CB0F4 string=0x00000000003CB0F8 "4"
 *   insn=0x00000000003CB0FC string=0x00000000003CB100 ""
 *   insn=0x00000000003CB110 string=0x00000000003CB114 "\t@"
 *   insn=0x00000000003CB11C string=0x00000000003CB120 ""
 *   insn=0x00000000003CB130 string=0x00000000003CB134 "@"
 *   insn=0x00000000003CB140 string=0x00000000003CB144 "A"
 *   insn=0x00000000003CB14C string=0x00000000003CB150 "-@"
 *   insn=0x00000000003CB160 string=0x00000000003CB164 "A"
 *   insn=0x00000000003CB164 string=0x00000000003CB18C "Q"
 *   insn=0x00000000003CB18C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003CB1A0 string=0x00000000003CB1A4 "C"
 *   insn=0x00000000003CB1A4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003CB1BC string=0x00000000003CB1C0 ""
 *   insn=0x00000000003CB1C4 string=0x00000000003CB1C8 "!"
 *   insn=0x00000000003CB1CC string=0x00000000003CB1D0 "\t@"
 *   insn=0x00000000003CB1DC string=0x00000000003CB1E0 ""
 *   insn=0x00000000003CB1E4 string=0x00000000003CB1E8 "!"
 *   insn=0x00000000003CB1EC string=0x00000000003CB1F0 "@"
 *   insn=0x00000000003CB204 string=0x00000000003CB208 "4"
 *   insn=0x00000000003CB20C string=0x00000000003CB210 ""
 *   insn=0x00000000003CB21C string=0x00000000003CB220 "\t@"
 *   insn=0x00000000003CB22C string=0x00000000003CB230 ""
 *   insn=0x00000000003CB23C string=0x00000000003CB240 "@"
 *   insn=0x00000000003CB250 string=0x00000000003CB254 ">"
 *   insn=0x00000000003CB26C string=0x00000000003CB270 "V"
 *   insn=0x00000000003CB27C string=0x00000000003CB280 "aVA"
 *   insn=0x00000000003CB28C string=0x00000000003CB290 "!"
 *   insn=0x00000000003CB290 string=0x00000000003CB294 "  ""
 *   insn=0x00000000003CB2A0 string=0x00000000003CB2A4 "`V"
 *   insn=0x00000000003CB2B0 string=0x00000000003CB2B4 "\t"
 *   insn=0x00000000003CB2B8 string=0x00000000003CB2BC "*"
 *   insn=0x00000000003CB2BC string=0x00000000003CB2C0 "J"
 *   insn=0x00000000003CB2C0 string=0x00000000003CB2C4 "*"
 *   insn=0x00000000003CB2C4 string=0x00000000003CB2C8 ""
 *   insn=0x00000000003CB2D0 string=0x00000000003CB2D4 "\t"
 *   insn=0x00000000003CB2D4 string=0x00000000003CB2D8 "`VA"
 *   insn=0x00000000003CB2E4 string=0x00000000003CB2E8 "tz@"
 *   insn=0x00000000003CB2F4 string=0x00000000003CB2F8 " "
 *   insn=0x00000000003CB2F8 string=0x00000000005922E4 "FPS: "
 *   insn=0x00000000003CB304 string=0x00000000003CB308 "J;"
 *   insn=0x00000000003CB310 string=0x00000000003CB314 "b"
 *   insn=0x00000000003CB318 string=0x00000000003CB31C "("
 *   insn=0x00000000003CB31C string=0x00000000003CB320 "_"
 *   insn=0x00000000003CB32C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003CB340 string=0x00000000003CB344 "s"
 *   insn=0x00000000003CB370 string=0x00000000003CB374 ""
 *   insn=0x00000000003CB37C string=0x00000000003CB380 "\t"
 *   insn=0x00000000003CB380 string=0x00000000003CB384 "@"
 *   insn=0x00000000003CB388 string=0x00000000003CB38C ")"
 *   insn=0x00000000003CB38C string=0x00000000003CB390 "J"
 *   insn=0x00000000003CB38C string=0x00000000006B7280 "X"
 *   insn=0x00000000003CB390 string=0x00000000003CB394 "hj)"
 *   insn=0x00000000003CB398 string=0x00000000003CB39C "JA"
 *   insn=0x00000000003CB3B0 string=0x00000000003CB3B4 "%E"
 *   insn=0x00000000003CB3B4 string=0x00000000003CB3B8 "`"
 *   insn=0x00000000003CB3B8 string=0x00000000003CB3BC "A"
 *   insn=0x00000000003CB3C0 string=0x00000000003CB3C4 "A"
 *   insn=0x00000000003CB3C4 string=0x00000000003CB3C8 "`b"
 *   insn=0x00000000003CB3D8 string=0x00000000003CB3DC "a"
 *   insn=0x00000000003CB3F8 string=0x00000000003CB3FC ")=G"
 *   insn=0x00000000003CB400 string=0x00000000003CB404 "\t"
 *   insn=0x00000000003CB404 string=0x00000000003CB408 "\t"
 *   insn=0x00000000003CB404 string=0x00000000003CB464 "\t"
 *   insn=0x00000000003CB408 string=0x00000000003CB40C "*"
 *   insn=0x00000000003CB40C string=0x00000000003CB410 "\n"
 *   insn=0x00000000003CB418 string=0x00000000003CB470 "?"
 *   insn=0x00000000003CB41C string=0x00000000003CB420 ")=G"
 *   insn=0x00000000003CB420 string=0x00000000003CB424 "!"
 *   insn=0x00000000003CB424 string=0x00000000003CB428 "\t"
 *   insn=0x00000000003CB428 string=0x00000000003CB42C "\t"
 *   insn=0x00000000003CB428 string=0x00000000003CB488 "\t"
 *   insn=0x00000000003CB42C string=0x00000000003CB430 "*"
 *   insn=0x00000000003CB430 string=0x00000000003CB434 "\n"
 *   insn=0x00000000003CB43C string=0x00000000003CB494 "?"
 *   insn=0x00000000003CB440 string=0x00000000003CB444 ")=G"
 *   insn=0x00000000003CB444 string=0x00000000003CB448 "!"
 *   insn=0x00000000003CB44C string=0x00000000003CB450 "\t"
 *   insn=0x00000000003CB44C string=0x00000000003CB4A8 "\t"
 *   insn=0x00000000003CB450 string=0x00000000003CB454 "*"
 *   insn=0x00000000003CB454 string=0x00000000003CB458 "\n"
 *   insn=0x00000000003CB460 string=0x00000000003CB4B4 "?"
 *   insn=0x00000000003CB464 string=0x00000000003CB468 "*"
 *   insn=0x00000000003CB468 string=0x00000000003CB46C "\n"
 *   insn=0x00000000003CB470 string=0x00000000003CB474 "l"
 *   insn=0x00000000003CB488 string=0x00000000003CB48C "*"
 *   insn=0x00000000003CB48C string=0x00000000003CB490 "\n"
 *   insn=0x00000000003CB4A8 string=0x00000000003CB4AC "*"
 *   insn=0x00000000003CB4AC string=0x00000000003CB4B0 "\n"
 *   insn=0x00000000003CB4E8 string=0x00000000003CB4EC "J"
 *   insn=0x00000000003CB4F0 string=0x00000000003CB4F4 "(a"
 *   insn=0x00000000003CB504 string=0x00000000003CB508 ")"
 *   insn=0x00000000003CB510 string=0x00000000003CB514 "!"
 *   insn=0x00000000003CB518 string=0x00000000003CB51C ""
 *   insn=0x00000000003CB524 string=0x00000000003CB528 "\t"
 *   insn=0x00000000003CB528 string=0x00000000003CB52C "@"
 *   insn=0x00000000003CB530 string=0x00000000003CB534 ")"
 *   insn=0x00000000003CB534 string=0x00000000003CB538 "J"
 *   insn=0x00000000003CB53C string=0x00000000003CB540 "JA"
 *   insn=0x00000000003CB54C string=0x00000000003CB550 ")"
 *   insn=0x00000000003CB560 string=0x00000000003CB564 ")=G"
 *   insn=0x00000000003CB564 string=0x00000000003CB568 "!"
 *   insn=0x00000000003CB56C string=0x00000000003CB570 "\t"
 *   insn=0x00000000003CB56C string=0x00000000003CB644 "\t"
 *   insn=0x00000000003CB570 string=0x00000000003CB574 "*"
 *   insn=0x00000000003CB574 string=0x00000000003CB578 "\n"
 *   insn=0x00000000003CB57C string=0x00000000003CB580 "?"
 *   insn=0x00000000003CB580 string=0x00000000003CB584 "l"
 *   insn=0x00000000003CB590 string=0x00000000003CB594 "%E"
 *   insn=0x00000000003CB598 string=0x00000000003CB59C "A"
 *   insn=0x00000000003CB5B8 string=0x00000000003CB5BC ")=G"
 *   insn=0x00000000003CB5BC string=0x00000000003CB5C0 "!"
 *   insn=0x00000000003CB5C4 string=0x00000000003CB5C8 "\t"
 *   insn=0x00000000003CB5C4 string=0x00000000003CB600 "\t"
 *   insn=0x00000000003CB5C8 string=0x00000000003CB5CC "*"
 *   insn=0x00000000003CB5CC string=0x00000000003CB5D0 "\n"
 *   insn=0x00000000003CB5D4 string=0x00000000003CB5D8 ""
 *   insn=0x00000000003CB5D8 string=0x00000000003CB60C "?"
 *   insn=0x00000000003CB5DC string=0x00000000003CB5E0 "J=G"
 *   insn=0x00000000003CB5E0 string=0x00000000003CB5E4 ")!"
 *   insn=0x00000000003CB5E8 string=0x00000000003CB5EC "*"
 *   insn=0x00000000003CB5E8 string=0x00000000003CB620 "*"
 *   insn=0x00000000003CB5EC string=0x00000000003CB5F0 "K"
 *   insn=0x00000000003CB5F0 string=0x00000000003CB5F4 "+"
 *   insn=0x00000000003CB5FC string=0x00000000003CB62C "_"
 *   insn=0x00000000003CB600 string=0x00000000003CB604 "*"
 *   insn=0x00000000003CB604 string=0x00000000003CB608 "\n"
 *   insn=0x00000000003CB60C string=0x00000000003CB610 "L"
 *   insn=0x00000000003CB614 string=0x00000000003CB618 "c{"
 *   insn=0x00000000003CB620 string=0x00000000003CB624 "K"
 *   insn=0x00000000003CB624 string=0x00000000003CB628 "+"
 *   insn=0x00000000003CB638 string=0x00000000003CB63C "Z{"
 *   insn=0x00000000003CB644 string=0x00000000003CB648 "*"
 *   insn=0x00000000003CB648 string=0x00000000003CB64C "\n"
 *   insn=0x00000000003CB64C string=0x00000000003CB650 "?"
 *   insn=0x00000000003CB670 string=0x00000000003CB674 "V"
 *   insn=0x00000000003CB67C string=0x00000000003CB680 "HA"
 *   insn=0x00000000003CB684 string=0x00000000003CB688 "`"
 *   insn=0x00000000003CB698 string=0x00000000003CB69C " "
 *   insn=0x00000000003CB69C string=0x00000000005922EA "Texture memory usage: "
 *   insn=0x00000000003CB6A8 string=0x00000000003CB6AC "a:"
 *   insn=0x00000000003CB6B4 string=0x00000000003CB6B8 "b"
 *   insn=0x00000000003CB6BC string=0x00000000003CB6C0 "("
 *   insn=0x00000000003CB6C0 string=0x00000000003CB6C4 "_"
 *   insn=0x00000000003CB70C string=0x00000000003CB710 "a"
 *   insn=0x00000000003CB71C string=0x00000000003CB720 "!"
 *   insn=0x00000000003CB738 string=0x00000000003CB73C ")=G"
 *   insn=0x00000000003CB744 string=0x00000000003CB748 "\t"
 *   insn=0x00000000003CB744 string=0x00000000003CB780 "\t"
 *   insn=0x00000000003CB748 string=0x00000000003CB74C "*"
 *   insn=0x00000000003CB74C string=0x00000000003CB750 "\n"
 *   insn=0x00000000003CB754 string=0x00000000003CB758 ""
 *   insn=0x00000000003CB758 string=0x00000000003CB78C "?"
 *   insn=0x00000000003CB75C string=0x00000000003CB760 ")=G"
 *   insn=0x00000000003CB760 string=0x00000000003CB764 "!"
 *   insn=0x00000000003CB768 string=0x00000000003CB76C "\t"
 *   insn=0x00000000003CB768 string=0x00000000003CB7A4 "\t"
 *   insn=0x00000000003CB76C string=0x00000000003CB770 "*"
 *   insn=0x00000000003CB770 string=0x00000000003CB774 "\n"
 *   insn=0x00000000003CB778 string=0x00000000003CB77C ""
 *   insn=0x00000000003CB77C string=0x00000000003CB7B0 "?"
 *   insn=0x00000000003CB780 string=0x00000000003CB784 "*"
 *   insn=0x00000000003CB784 string=0x00000000003CB788 "\n"
 *   insn=0x00000000003CB7A4 string=0x00000000003CB7A8 "*"
 *   insn=0x00000000003CB7A8 string=0x00000000003CB7AC "\n"
 *   insn=0x00000000003CB7C8 string=0x00000000003CB7CC ""
 *   insn=0x00000000003CB7D4 string=0x00000000003CB7D8 "J"
 *   insn=0x00000000003CB7DC string=0x00000000003CB7E0 "(a"
 *   insn=0x00000000003CB7F0 string=0x00000000003CB7F4 ")"
 *   insn=0x00000000003CB804 string=0x00000000003CB808 ")=G"
 *   insn=0x00000000003CB808 string=0x00000000003CB80C "!"
 *   insn=0x00000000003CB810 string=0x00000000003CB814 "\t"
 *   insn=0x00000000003CB810 string=0x00000000003CB884 "\t"
 *   insn=0x00000000003CB814 string=0x00000000003CB818 "*"
 *   insn=0x00000000003CB818 string=0x00000000003CB81C "\n"
 *   insn=0x00000000003CB820 string=0x00000000003CB824 "?"
 *   insn=0x00000000003CB824 string=0x00000000003CB828 "l"
 *   insn=0x00000000003CB834 string=0x00000000003CB838 "#"
 *   insn=0x00000000003CB83C string=0x00000000003CB840 "J=G"
 *   insn=0x00000000003CB840 string=0x00000000003CB844 ")!"
 *   insn=0x00000000003CB848 string=0x00000000003CB84C "*"
 *   insn=0x00000000003CB848 string=0x00000000003CB860 "*"
 *   insn=0x00000000003CB84C string=0x00000000003CB850 "K"
 *   insn=0x00000000003CB850 string=0x00000000003CB854 "+"
 *   insn=0x00000000003CB85C string=0x00000000003CB86C "_"
 *   insn=0x00000000003CB860 string=0x00000000003CB864 "K"
 *   insn=0x00000000003CB864 string=0x00000000003CB868 "+"
 *   insn=0x00000000003CB884 string=0x00000000003CB888 "*"
 *   insn=0x00000000003CB888 string=0x00000000003CB88C "\n"
 *   insn=0x00000000003CB88C string=0x00000000003CB890 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DebugInfoOverlay::Toggle(Caver::DebugInfoOverlay *this)
{
  __int64 v2; // x23
  __int64 v3; // x24
  __int64 v4; // x25
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x8
  int v8; // w8
  int v9; // w8
  Caver::GUILabel *v10; // x0
  Caver::GUILabel *v11; // x21
  __int64 v12; // x9
  Caver::GUILabel *v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x1
  __int64 v17; // x8
  Caver::GUILabel *v18; // x0
  Caver::GUILabel *v19; // x21
  __int64 v20; // x9
  Caver::GUILabel *v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x1
  __int64 v25; // x8
  Caver::GUILabel *v26; // x0
  Caver::GUILabel *v27; // x21
  __int64 v28; // x9
  Caver::GUILabel *v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  _QWORD *v32; // x1
  __int64 v33; // x8
  Caver::GUILabel *v34; // x0
  Caver::GUILabel *v35; // x21
  __int64 v36; // x9
  Caver::GUILabel *v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  _QWORD *v40; // x1
  __int64 v41; // x8
  Caver::TextureLibrary *v42; // x0
  Caver::TextureLibrary *v43; // x0
  Caver::GUILabel **v44; // x23
  Caver::GUILabel **i; // x24
  Caver::GUILabel *v46; // x20
  _QWORD *v47; // x21
  __int64 v48; // x8
  __int64 v49; // x8
  Caver::Font *updated; // x0
  Caver::GUILabel *v51; // x20
  __int64 v52; // x8
  Caver::GUILabel *v53; // x9
  _QWORD *v54; // x21
  __int64 v55; // x8
  __int64 v56; // x8
  Caver::GUILabel *v57; // x20
  __int64 v58; // x8
  __int64 v59; // x8
  void (__fastcall *v60)(Caver::DebugInfoOverlay *, Caver::GUILabel **); // x8
  Caver::GUILabel *v61; // x9
  Caver::GUILabel *v62; // x20
  __int64 v63; // x8
  __int64 v64; // x8
  Caver::GUILabel *v66; // [xsp+218h] [xbp-68h] BYREF
  Caver::GUILabel *v67; // [xsp+220h] [xbp-60h]
  __int64 v68; // [xsp+228h] [xbp-58h]

  v68 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::RemoveAllSubviews(this);
  v2 = *((_QWORD *)this + 38);
  v3 = *((_QWORD *)this + 39);
  if ( v3 != v2 )
  {
    v4 = *((_QWORD *)this + 38);
    do
    {
      v5 = *(_QWORD **)(v4 + 8);
      if ( v5 )
      {
        v6 = v5[1] - 1LL;
        v5[1] = v6;
        if ( !v6 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
          v7 = v5[2] - 1LL;
          v5[2] = v7;
          if ( !v7 )
            (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
        }
      }
      v4 += 16;
    }
    while ( v3 != v4 );
  }
  v8 = *((_DWORD *)this + 89);
  *((_QWORD *)this + 39) = v2;
  if ( v8 <= 1 )
    v9 = v8 + 1;
  else
    v9 = 0;
  *((_DWORD *)this + 89) = v9;
  if ( v9 == 1 )
  {
    v18 = (Caver::GUILabel *)operator new(0x150u);
    Caver::GUILabel::GUILabel(v18);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
    v19 = (Caver::GUILabel *)*((_QWORD *)this + 33);
    v20 = (__int64)v66;
    v66 = (Caver::GUILabel *)*((_QWORD *)this + 32);
    v21 = v67;
    *((_QWORD *)this + 32) = v20;
    *((_QWORD *)this + 33) = v21;
    v67 = v19;
    if ( v19 )
    {
      v22 = *((_QWORD *)v19 + 1) - 1LL;
      *((_QWORD *)v19 + 1) = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v19 + 16LL))(v19);
        v23 = *((_QWORD *)v19 + 2) - 1LL;
        *((_QWORD *)v19 + 2) = v23;
        if ( !v23 )
          (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v19 + 24LL))(v19);
      }
    }
    v24 = (_QWORD *)*((_QWORD *)this + 39);
    if ( v24 == *((_QWORD **)this + 40) )
    {
      std::vector<boost::shared_ptr<Caver::GUILabel>>::_M_insert_aux();
    }
    else
    {
      *v24 = *((_QWORD *)this + 32);
      v25 = *((_QWORD *)this + 33);
      v24[1] = v25;
      if ( v25 )
        ++*(_QWORD *)(v25 + 8);
      *((_QWORD *)this + 39) = v24 + 2;
    }
    v26 = (Caver::GUILabel *)operator new(0x150u);
    Caver::GUILabel::GUILabel(v26);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
    v27 = (Caver::GUILabel *)*((_QWORD *)this + 35);
    v28 = (__int64)v66;
    v66 = (Caver::GUILabel *)*((_QWORD *)this + 34);
    v29 = v67;
    *((_QWORD *)this + 34) = v28;
    *((_QWORD *)this + 35) = v29;
    v67 = v27;
    if ( v27 )
    {
      v30 = *((_QWORD *)v27 + 1) - 1LL;
      *((_QWORD *)v27 + 1) = v30;
      if ( !v30 )
      {
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v27 + 16LL))(v27);
        v31 = *((_QWORD *)v27 + 2) - 1LL;
        *((_QWORD *)v27 + 2) = v31;
        if ( !v31 )
          (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v27 + 24LL))(v27);
      }
    }
    v32 = (_QWORD *)*((_QWORD *)this + 39);
    if ( v32 == *((_QWORD **)this + 40) )
    {
      std::vector<boost::shared_ptr<Caver::GUILabel>>::_M_insert_aux();
    }
    else
    {
      *v32 = *((_QWORD *)this + 34);
      v33 = *((_QWORD *)this + 35);
      v32[1] = v33;
      if ( v33 )
        ++*(_QWORD *)(v33 + 8);
      *((_QWORD *)this + 39) = v32 + 2;
    }
    v34 = (Caver::GUILabel *)operator new(0x150u);
    Caver::GUILabel::GUILabel(v34);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
    v35 = (Caver::GUILabel *)*((_QWORD *)this + 37);
    v36 = (__int64)v66;
    v66 = (Caver::GUILabel *)*((_QWORD *)this + 36);
    v37 = v67;
    *((_QWORD *)this + 36) = v36;
    *((_QWORD *)this + 37) = v37;
    v67 = v35;
    if ( v35 )
    {
      v38 = *((_QWORD *)v35 + 1) - 1LL;
      *((_QWORD *)v35 + 1) = v38;
      if ( !v38 )
      {
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v35 + 16LL))(v35);
        v39 = *((_QWORD *)v35 + 2) - 1LL;
        *((_QWORD *)v35 + 2) = v39;
        if ( !v39 )
          (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v35 + 24LL))(v35);
      }
    }
    v40 = (_QWORD *)*((_QWORD *)this + 39);
    if ( v40 == *((_QWORD **)this + 40) )
    {
      std::vector<boost::shared_ptr<Caver::GUILabel>>::_M_insert_aux();
    }
    else
    {
      *v40 = *((_QWORD *)this + 36);
      v41 = *((_QWORD *)this + 37);
      v40[1] = v41;
      if ( v41 )
        ++*(_QWORD *)(v41 + 8);
      *((_QWORD *)this + 39) = v40 + 2;
    }
    Caver::DebugInfoOverlay::SetTextureMemoryUsage(this);
    Caver::DebugInfoOverlay::SetNumVertices(this, 0, 0);
    v42 = (Caver::TextureLibrary *)Caver::DebugInfoOverlay::SetNumTriangles(this, 0);
    v43 = (Caver::TextureLibrary *)Caver::TextureLibrary::sharedLibrary(v42);
    Caver::TextureLibrary::PrintMemoryUsageStats(v43);
  }
  else if ( !v9 )
  {
    v10 = (Caver::GUILabel *)operator new(0x150u);
    Caver::GUILabel::GUILabel(v10);
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
    v11 = (Caver::GUILabel *)*((_QWORD *)this + 31);
    v12 = (__int64)v66;
    v66 = (Caver::GUILabel *)*((_QWORD *)this + 30);
    v13 = v67;
    *((_QWORD *)this + 30) = v12;
    *((_QWORD *)this + 31) = v13;
    v67 = v11;
    if ( v11 )
    {
      v14 = *((_QWORD *)v11 + 1) - 1LL;
      *((_QWORD *)v11 + 1) = v14;
      if ( !v14 )
      {
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v11 + 16LL))(v11);
        v15 = *((_QWORD *)v11 + 2) - 1LL;
        *((_QWORD *)v11 + 2) = v15;
        if ( !v15 )
          (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v11 + 24LL))(v11);
      }
    }
    v16 = (_QWORD *)*((_QWORD *)this + 39);
    if ( v16 == *((_QWORD **)this + 40) )
    {
      std::vector<boost::shared_ptr<Caver::GUILabel>>::_M_insert_aux();
    }
    else
    {
      *v16 = *((_QWORD *)this + 30);
      v17 = *((_QWORD *)this + 31);
      v16[1] = v17;
      if ( v17 )
        ++*(_QWORD *)(v17 + 8);
      *((_QWORD *)this + 39) = v16 + 2;
    }
    *(_QWORD *)((char *)this + 332) = 0;
    Caver::DebugInfoOverlay::SetFPS(this, 0.0);
  }
  v44 = (Caver::GUILabel **)*((_QWORD *)this + 38);
  for ( i = (Caver::GUILabel **)*((_QWORD *)this + 39); i != v44; v44 += 2 )
  {
    v46 = *v44;
    if ( *((unsigned __int8 *)*v44 + 264) != 255
      || *((unsigned __int8 *)v46 + 265) != 255
      || *((unsigned __int8 *)v46 + 266) != 255
      || *((unsigned __int8 *)v46 + 267) != 255 )
    {
      v47 = (_QWORD *)*((_QWORD *)v46 + 35);
      *((_DWORD *)v46 + 66) = -1;
      *((_QWORD *)v46 + 34) = 0;
      *((_QWORD *)v46 + 35) = 0;
      if ( v47 )
      {
        v48 = v47[1] - 1LL;
        v47[1] = v48;
        if ( !v48 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v47 + 16LL))(v47);
          v49 = v47[2] - 1LL;
          v47[2] = v49;
          if ( !v49 )
            (*(void (__fastcall **)(_QWORD *))(*v47 + 24LL))(v47);
        }
      }
      Caver::GUILabel::UpdateText(v46);
      v46 = *v44;
    }
    *((_BYTE *)v46 + 320) = 1;
    *(_DWORD *)((char *)v46 + 321) = -16777216;
    *((_QWORD *)v46 + 41) = 0xBF8000003F800000LL;
    updated = (Caver::Font *)Caver::GUILabel::UpdateText(v46);
    v51 = *v44;
    Caver::Font::SmallSystemFont((__int64 *)&v66, updated);
    v52 = (__int64)v66;
    if ( v66 != *((Caver::GUILabel **)v51 + 30) )
    {
      v53 = v67;
      if ( v67 )
        ++*((_QWORD *)v67 + 1);
      v54 = (_QWORD *)*((_QWORD *)v51 + 31);
      *((_QWORD *)v51 + 30) = v52;
      *((_QWORD *)v51 + 31) = v53;
      if ( v54 )
      {
        v55 = v54[1] - 1LL;
        v54[1] = v55;
        if ( !v55 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v54 + 16LL))(v54);
          v56 = v54[2] - 1LL;
          v54[2] = v56;
          if ( !v56 )
            (*(void (__fastcall **)(_QWORD *))(*v54 + 24LL))(v54);
        }
      }
      Caver::GUILabel::UpdateText(v51);
    }
    v57 = v67;
    if ( v67 )
    {
      v58 = *((_QWORD *)v67 + 1) - 1LL;
      *((_QWORD *)v67 + 1) = v58;
      if ( !v58 )
      {
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v57 + 16LL))(v57);
        v59 = *((_QWORD *)v57 + 2) - 1LL;
        *((_QWORD *)v57 + 2) = v59;
        if ( !v59 )
          (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v57 + 24LL))(v57);
      }
    }
    v60 = *(void (__fastcall **)(Caver::DebugInfoOverlay *, Caver::GUILabel **))(*(_QWORD *)this + 96LL);
    v66 = *v44;
    v61 = v44[1];
    v67 = v61;
    if ( v61 )
      ++*((_QWORD *)v61 + 1);
    v60(this, &v66);
    v62 = v67;
    if ( v67 )
    {
      v63 = *((_QWORD *)v67 + 1) - 1LL;
      *((_QWORD *)v67 + 1) = v63;
      if ( !v63 )
      {
        (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v62 + 16LL))(v62);
        v64 = *((_QWORD *)v62 + 2) - 1LL;
        *((_QWORD *)v62 + 2) = v64;
        if ( !v64 )
          (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v62 + 24LL))(v62);
      }
    }
  }
  return (*(__int64 (__fastcall **)(Caver::DebugInfoOverlay *))(*(_QWORD *)this + 88LL))(this);
}

