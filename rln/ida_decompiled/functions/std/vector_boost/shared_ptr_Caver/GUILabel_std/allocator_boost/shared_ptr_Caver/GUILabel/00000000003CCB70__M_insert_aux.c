/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CCB70
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver8GUILabelEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *
 * Callers: 2
 *   0x00000000001F36B0  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *   0x00000000003CC348  Caver::DebugInfoOverlay::FormatByteSize(int)
 *
 * Callees: 17
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9E10  Caver::GUIRoundedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200A70  Caver::GUIRoundedRect::GUIRoundedRect(void)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003CD43C  Caver::DraggableOverlayItem::SetColor(Caver::Color)
 *   0x0000000000565294  sub_565294
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 248
 *   insn=0x00000000003CCB94 string=0x00000000003CCB98 "?"
 *   insn=0x00000000003CCBA0 string=0x00000000003CCBA4 "_"
 *   insn=0x00000000003CCBA4 string=0x00000000003CCBA8 "*"
 *   insn=0x00000000003CCBA8 string=0x00000000003CCBAC "+)"
 *   insn=0x00000000003CCBB0 string=0x00000000003CCBB4 "K"
 *   insn=0x00000000003CCBB0 string=0x00000000003CCBC0 ")A"
 *   insn=0x00000000003CCBB4 string=0x00000000003CCBB8 "k"
 *   insn=0x00000000003CCBB8 string=0x00000000003CCBBC "K"
 *   insn=0x00000000003CCBCC string=0x00000000003CCBDC "\t"
 *   insn=0x00000000003CCBD0 string=0x00000000003CCBD4 ")"
 *   insn=0x00000000003CCBDC string=0x00000000003CCBE0 "?"
 *   insn=0x00000000003CCBE0 string=0x00000000003CCBE4 "+"
 *   insn=0x00000000003CCBE4 string=0x00000000003CCBE8 ")"
 *   insn=0x00000000003CCBE8 string=0x00000000003CCBEC "7"
 *   insn=0x00000000003CCBF0 string=0x00000000003CCBF4 "\t"
 *   insn=0x00000000003CCBF4 string=0x00000000003CCBF8 "\n@"
 *   insn=0x00000000003CCBFC string=0x00000000003CCC00 "K"
 *   insn=0x00000000003CCC00 string=0x00000000003CCC04 "k"
 *   insn=0x00000000003CCC04 string=0x00000000003CCC08 "K"
 *   insn=0x00000000003CCC0C string=0x00000000003CCC10 "\t)"
 *   insn=0x00000000003CCC10 string=0x00000000003CCC14 "5"
 *   insn=0x00000000003CCC18 string=0x00000000003CCC1C ""
 *   insn=0x00000000003CCC28 string=0x00000000003CCC2C "\t@"
 *   insn=0x00000000003CCC38 string=0x00000000003CCC3C ""
 *   insn=0x00000000003CCC48 string=0x00000000003CCC4C "@"
 *   insn=0x00000000003CCC68 string=0x00000000003CCC78 "u"
 *   insn=0x00000000003CCC6C string=0x00000000003CCC70 ""
 *   insn=0x00000000003CCC78 string=0x00000000003CCC7C "vR"
 *   insn=0x00000000003CCC7C string=0x00000000003CCC80 "5"
 *   insn=0x00000000003CCC80 string=0x00000000003CCCC4 "t"
 *   insn=0x00000000003CCC84 string=0x00000000003CCC88 ""
 *   insn=0x00000000003CCC94 string=0x00000000003CCC98 "\t@"
 *   insn=0x00000000003CCCA4 string=0x00000000003CCCA8 ""
 *   insn=0x00000000003CCCB4 string=0x00000000003CCCB8 "@"
 *   insn=0x00000000003CCCC8 string=0x00000000003CCCCC ""
 *   insn=0x00000000003CCCDC string=0x00000000003CCCE0 "\t@"
 *   insn=0x00000000003CCCE8 string=0x00000000003CCCEC ""
 *   insn=0x00000000003CCD14 string=0x00000000003CCD18 " "
 *   insn=0x00000000003CCD1C string=0x00000000003CCD20 "("
 *   insn=0x00000000003CCD20 string=0x00000000003CCD24 ""
 *   insn=0x00000000003CCD24 string=0x00000000003CCD28 "\t"
 *   insn=0x00000000003CCD28 string=0x00000000003CCD2C "("
 *   insn=0x00000000003CCD2C string=0x00000000003CCD30 "\n"
 *   insn=0x00000000003CCD34 string=0x00000000003CCD38 "_"
 *   insn=0x00000000003CCD3C string=0x00000000003CCD40 ")"
 *   insn=0x00000000003CCD40 string=0x00000000003CCD44 "?"
 *   insn=0x00000000003CCD48 string=0x00000000003CCD4C "7"
 *   insn=0x00000000003CCD5C string=0x00000000003CCD60 " "
 *   insn=0x00000000003CCD60 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003CCD70 string=0x00000000003CCD74 "i"
 *   insn=0x00000000003CCD74 string=0x00000000003CCD78 ")"
 *   insn=0x00000000003CCD7C string=0x00000000003CCD80 "("
 *   insn=0x00000000003CCD84 string=0x00000000003CCD88 "("
 *   insn=0x00000000003CCD8C string=0x00000000003CCD90 "\t"
 *   insn=0x00000000003CCD90 string=0x00000000003CCD94 ")"
 *   insn=0x00000000003CCD94 string=0x00000000003CCD98 "\t"
 *   insn=0x00000000003CCDAC string=0x00000000003CCDB0 "hB"
 *   insn=0x00000000003CCDB4 string=0x00000000003CCDB8 "K"
 *   insn=0x00000000003CCDC0 string=0x00000000003CCDC4 "K"
 *   insn=0x00000000003CCDCC string=0x00000000003CCDD0 "l"
 *   insn=0x00000000003CCDCC string=0x00000000003CCDDC "JA"
 *   insn=0x00000000003CCDD4 string=0x00000000003CCDD8 "l"
 *   insn=0x00000000003CCDDC string=0x00000000003CCDE0 "_"
 *   insn=0x00000000003CCDE0 string=0x00000000003CCDE4 ")A"
 *   insn=0x00000000003CCDE4 string=0x00000000003CCDE8 "a"
 *   insn=0x00000000003CCDE8 string=0x00000000003CCDEC ""
 *   insn=0x00000000003CCDEC string=0x00000000003CCDF0 ""
 *   insn=0x00000000003CCDF4 string=0x00000000003CCDF8 "A"
 *   insn=0x00000000003CCE00 string=0x00000000003CCE04 "?"
 *   insn=0x00000000003CCE08 string=0x00000000003CCE0C "(C"
 *   insn=0x00000000003CCE14 string=0x00000000003CCE18 "K"
 *   insn=0x00000000003CCE18 string=0x00000000003CCE1C "+"
 *   insn=0x00000000003CCE1C string=0x00000000003CCE20 "K"
 *   insn=0x00000000003CCE20 string=0x00000000003CCE24 "+"
 *   insn=0x00000000003CCE28 string=0x00000000003CCE2C "l"
 *   insn=0x00000000003CCE28 string=0x00000000003CCE38 "JA"
 *   insn=0x00000000003CCE30 string=0x00000000003CCE34 "l"
 *   insn=0x00000000003CCE38 string=0x00000000003CCE3C "_"
 *   insn=0x00000000003CCE3C string=0x00000000003CCE40 ")A"
 *   insn=0x00000000003CCE44 string=0x00000000003CCE48 ""
 *   insn=0x00000000003CCE48 string=0x00000000003CCE4C ""
 *   insn=0x00000000003CCE4C string=0x00000000003CCE50 ""
 *   insn=0x00000000003CCE5C string=0x00000000003CCEB8 "v"
 *   insn=0x00000000003CCE60 string=0x00000000003CCE64 "3"
 *   insn=0x00000000003CCE64 string=0x00000000003CCE68 "h"
 *   insn=0x00000000003CCE68 string=0x00000000003CCE6C ""
 *   insn=0x00000000003CCE6C string=0x00000000003CCE70 "h"
 *   insn=0x00000000003CCE74 string=0x00000000003CCE78 "h"
 *   insn=0x00000000003CCE7C string=0x00000000003CCE80 "\t@"
 *   insn=0x00000000003CCE84 string=0x00000000003CCE88 "h\n@"
 *   insn=0x00000000003CCE88 string=0x00000000003CCE8C ""
 *   insn=0x00000000003CCE8C string=0x00000000003CCE90 "h\n"
 *   insn=0x00000000003CCE94 string=0x00000000003CCE98 "h"
 *   insn=0x00000000003CCE9C string=0x00000000003CCEA0 "@"
 *   insn=0x00000000003CCEA8 string=0x00000000003CCEAC "?"
 *   insn=0x00000000003CCEC0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003CCEF8 string=0x00000000003CCEFC "4"
 *   insn=0x00000000003CCF00 string=0x00000000003CCF04 ""
 *   insn=0x00000000003CCF10 string=0x00000000003CCF14 "\t@"
 *   insn=0x00000000003CCF20 string=0x00000000003CCF24 ""
 *   insn=0x00000000003CCF30 string=0x00000000003CCF34 "@"
 *   insn=0x00000000003CCF40 string=0x00000000003CCF44 "`"
 *   insn=0x00000000003CCF60 string=0x00000000003CCF64 "X"
 *   insn=0x00000000003CCF64 string=0x00000000003CCF68 ""
 *   insn=0x00000000003CCF78 string=0x00000000003CCF7C "\tD"
 *   insn=0x00000000003CCF7C string=0x00000000003CCF80 "t""
 *   insn=0x00000000003CCF88 string=0x00000000003CCF8C "A"
 *   insn=0x00000000003CCF8C string=0x00000000003CCF90 "h"
 *   insn=0x00000000003CCF98 string=0x00000000003CCF9C "u"
 *   insn=0x00000000003CCFB4 string=0x00000000003CCFB8 "h."
 *   insn=0x00000000003CCFBC string=0x00000000001FA350 "0'"
 *   insn=0x00000000003CCFC4 string=0x000000000058E29B "ui_controls_button_pressed"
 *   insn=0x00000000003CCFE4 string=0x00000000003CCFE8 "r"
 *   insn=0x00000000003CCFF4 string=0x00000000001F9E10 "0'"
 *   insn=0x00000000003CCFFC string=0x00000000003CD000 "@"
 *   insn=0x00000000003CD000 string=0x00000000003CD004 ""
 *   insn=0x00000000003CD004 string=0x00000000003CD008 ""
 *   insn=0x00000000003CD00C string=0x00000000003CD010 ""
 *   insn=0x00000000003CD010 string=0x00000000003CD014 ""
 *   insn=0x00000000003CD054 string=0x00000000003CD058 "V"
 *   insn=0x00000000003CD060 string=0x00000000003CD064 "k"
 *   insn=0x00000000003CD06C string=0x00000000003CD070 "@"
 *   insn=0x00000000003CD070 string=0x00000000003CD074 ""
 *   insn=0x00000000003CD074 string=0x00000000003CD078 ""
 *   insn=0x00000000003CD07C string=0x00000000003CD080 ""
 *   insn=0x00000000003CD080 string=0x00000000003CD084 ""
 *   insn=0x00000000003CD098 string=0x00000000003CD09C ""
 *   insn=0x00000000003CD0A4 string=0x00000000003CD0A8 "!"
 *   insn=0x00000000003CD0A8 string=0x00000000003CD14C "a"
 *   insn=0x00000000003CD0C4 string=0x00000000003CD0C8 ")=G"
 *   insn=0x00000000003CD0C8 string=0x00000000003CD0CC "!"
 *   insn=0x00000000003CD0D0 string=0x00000000003CD0D4 "\t"
 *   insn=0x00000000003CD0D0 string=0x00000000003CD10C "\t"
 *   insn=0x00000000003CD0D4 string=0x00000000003CD0D8 "*"
 *   insn=0x00000000003CD0D8 string=0x00000000003CD0DC "\n"
 *   insn=0x00000000003CD0E0 string=0x00000000003CD0E4 ""
 *   insn=0x00000000003CD0E4 string=0x00000000003CD118 "?"
 *   insn=0x00000000003CD0E8 string=0x00000000003CD0EC ")=G"
 *   insn=0x00000000003CD0EC string=0x00000000003CD0F0 "!"
 *   insn=0x00000000003CD0F4 string=0x00000000003CD0F8 "\t"
 *   insn=0x00000000003CD0F4 string=0x00000000003CD12C "\t"
 *   insn=0x00000000003CD0F8 string=0x00000000003CD0FC "*"
 *   insn=0x00000000003CD0FC string=0x00000000003CD100 "\n"
 *   insn=0x00000000003CD108 string=0x00000000003CD138 "?"
 *   insn=0x00000000003CD10C string=0x00000000003CD110 "*"
 *   insn=0x00000000003CD110 string=0x00000000003CD114 "\n"
 *   insn=0x00000000003CD12C string=0x00000000003CD130 "*"
 *   insn=0x00000000003CD130 string=0x00000000003CD134 "\n"
 *   insn=0x00000000003CD14C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003CD158 string=0x00000000003CD15C "\t\t@"
 *   insn=0x00000000003CD15C string=0x00000000003CD160 ")"
 *   insn=0x00000000003CD160 string=0x00000000003CD164 "\t\t"
 *   insn=0x00000000003CD164 string=0x00000000003CD168 "!"
 *   insn=0x00000000003CD168 string=0x00000000003CD16C "\t"
 *   insn=0x00000000003CD16C string=0x00000000003CD170 ")"
 *   insn=0x00000000003CD174 string=0x00000000003CD178 " "
 *   insn=0x00000000003CD180 string=0x00000000003CD184 ","
 *   insn=0x00000000003CD184 string=0x00000000003CD234 "h.A"
 *   insn=0x00000000003CD188 string=0x00000000003CD18C "*"
 *   insn=0x00000000003CD194 string=0x00000000003CD198 "h"
 *   insn=0x00000000003CD198 string=0x00000000003CD19C "\t\t@"
 *   insn=0x00000000003CD19C string=0x00000000003CD1A0 ")"
 *   insn=0x00000000003CD1A0 string=0x00000000003CD1A4 "\t\t"
 *   insn=0x00000000003CD1A8 string=0x00000000003CD1AC "\t"
 *   insn=0x00000000003CD1AC string=0x00000000003CD1B0 ")"
 *   insn=0x00000000003CD1B4 string=0x00000000003CD1B8 " "
 *   insn=0x00000000003CD1D0 string=0x00000000003CD1D4 "`"
 *   insn=0x00000000003CD1D8 string=0x00000000003CD1DC "J"
 *   insn=0x00000000003CD1D8 string=0x00000000003CD2F0 "`"
 *   insn=0x00000000003CD1E0 string=0x00000000003CD1E4 "^"
 *   insn=0x00000000003CD1FC string=0x00000000003CD200 ")=G"
 *   insn=0x00000000003CD200 string=0x00000000003CD204 "!"
 *   insn=0x00000000003CD204 string=0x00000000003CD208 "I"
 *   insn=0x00000000003CD208 string=0x00000000003CD20C "\t"
 *   insn=0x00000000003CD208 string=0x00000000003CD390 "\t"
 *   insn=0x00000000003CD20C string=0x00000000003CD210 "*"
 *   insn=0x00000000003CD210 string=0x00000000003CD214 "\n"
 *   insn=0x00000000003CD218 string=0x00000000003CD21C "`"
 *   insn=0x00000000003CD21C string=0x00000000003CD39C "?"
 *   insn=0x00000000003CD240 string=0x00000000003CD274 "`"
 *   insn=0x00000000003CD244 string=0x00000000003CD248 ")=G"
 *   insn=0x00000000003CD248 string=0x00000000003CD24C "!"
 *   insn=0x00000000003CD24C string=0x00000000003CD250 "\t"
 *   insn=0x00000000003CD250 string=0x00000000003CD254 "\t"
 *   insn=0x00000000003CD250 string=0x00000000003CD3B0 "\t"
 *   insn=0x00000000003CD254 string=0x00000000003CD258 "*"
 *   insn=0x00000000003CD258 string=0x00000000003CD25C "\n"
 *   insn=0x00000000003CD260 string=0x00000000003CD264 "?"
 *   insn=0x00000000003CD264 string=0x00000000003CD268 "l"
 *   insn=0x00000000003CD26C string=0x00000000003CD270 "Mt"
 *   insn=0x00000000003CD278 string=0x00000000003CD27C "`"
 *   insn=0x00000000003CD278 string=0x00000000003CD290 "4"
 *   insn=0x00000000003CD280 string=0x00000000003CD284 "`"
 *   insn=0x00000000003CD280 string=0x00000000003CD29C "1"
 *   insn=0x00000000003CD288 string=0x00000000003CD2A8 "@"
 *   insn=0x00000000003CD290 string=0x00000000003CD294 "`"
 *   insn=0x00000000003CD290 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003CD294 string=0x00000000003CD298 "`"
 *   insn=0x00000000003CD29C string=0x00000000003CD2A0 "`"
 *   insn=0x00000000003CD2A8 string=0x00000000003CD2AC ""
 *   insn=0x00000000003CD2AC string=0x00000000003CD2B0 ""
 *   insn=0x00000000003CD2B4 string=0x00000000003CD2B8 ""
 *   insn=0x00000000003CD2B8 string=0x00000000003CD2BC ""
 *   insn=0x00000000003CD2C8 string=0x00000000003CD2CC "@"
 *   insn=0x00000000003CD2C8 string=0x00000000003CD2E8 "`"
 *   insn=0x00000000003CD2CC string=0x00000000003CD2D0 ""
 *   insn=0x00000000003CD2D0 string=0x00000000003CD2D4 ""
 *   insn=0x00000000003CD2D8 string=0x00000000003CD2DC ""
 *   insn=0x00000000003CD2DC string=0x00000000003CD2E0 ""
 *   insn=0x00000000003CD2F4 string=0x00000000003CD2F8 "`"
 *   insn=0x00000000003CD2FC string=0x00000000003CD31C "@"
 *   insn=0x00000000003CD304 string=0x00000000003CD308 "`"
 *   insn=0x00000000003CD308 string=0x00000000003CD30C "`"
 *   insn=0x00000000003CD310 string=0x00000000003CD314 "`"
 *   insn=0x00000000003CD31C string=0x00000000003CD320 ""
 *   insn=0x00000000003CD320 string=0x00000000003CD324 ""
 *   insn=0x00000000003CD328 string=0x00000000003CD32C ""
 *   insn=0x00000000003CD32C string=0x00000000003CD330 ""
 *   insn=0x00000000003CD33C string=0x00000000003CD340 "@"
 *   insn=0x00000000003CD340 string=0x00000000003CD344 ""
 *   insn=0x00000000003CD344 string=0x00000000003CD348 ""
 *   insn=0x00000000003CD34C string=0x00000000003CD350 ""
 *   insn=0x00000000003CD350 string=0x00000000003CD354 ""
 *   insn=0x00000000003CD364 string=0x00000000003CD368 "W"
 *   insn=0x00000000003CD36C string=0x00000000003CD370 ")=G"
 *   insn=0x00000000003CD370 string=0x00000000003CD374 "!"
 *   insn=0x00000000003CD378 string=0x00000000003CD37C "\t"
 *   insn=0x00000000003CD37C string=0x00000000003CD380 "*"
 *   insn=0x00000000003CD380 string=0x00000000003CD384 "\n"
 *   insn=0x00000000003CD390 string=0x00000000003CD394 "*"
 *   insn=0x00000000003CD394 string=0x00000000003CD398 "\n"
 *   insn=0x00000000003CD3B0 string=0x00000000003CD3B4 "*"
 *   insn=0x00000000003CD3B4 string=0x00000000003CD3B8 "\n"
 *   insn=0x00000000003CD3B8 string=0x00000000003CD3BC "?"
 *   insn=0x00000000003CD3BC string=0x00000000003CD3C0 "m"
 *   insn=0x00000000003CD3CC string=0x00000000003CD3D0 "("
 *   insn=0x00000000003CD3D0 string=0x00000000003CD3D4 "\t\t@"
 *   insn=0x00000000003CD3D4 string=0x00000000003CD3D8 ")"
 *   insn=0x00000000003CD3D8 string=0x00000000003CD3DC "\t\t"
 *   insn=0x00000000003CD3E0 string=0x00000000003CD3E4 "\t"
 *   insn=0x00000000003CD3E4 string=0x00000000003CD3E8 ")"
 *   insn=0x00000000003CD3EC string=0x00000000003CD3F0 " "
 *   insn=0x00000000003CD404 string=0x00000000003CD408 "\t\t@"
 *   insn=0x00000000003CD408 string=0x00000000003CD40C ")"
 *   insn=0x00000000003CD40C string=0x00000000003CD410 "\t\t"
 *   insn=0x00000000003CD414 string=0x00000000003CD418 "\t"
 *   insn=0x00000000003CD418 string=0x00000000003CD41C ")"
 *   insn=0x00000000003CD420 string=0x00000000003CD424 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::GUILabel>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
{
  _QWORD *v4; // x9
  char *v7; // x8
  __int64 v8; // x10
  _QWORD *v9; // x20
  __int64 v10; // x22
  __int64 v11; // x23
  char *v12; // x24
  __int64 v13; // x9
  __int64 v14; // t1
  __int64 v15; // x10
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  char *v24; // x24
  __int64 v25; // x8
  __int64 v26; // x9
  bool v27; // cf
  unsigned __int64 v28; // x8
  int v29; // w9
  unsigned __int64 v30; // x23
  __int64 v31; // x21
  _QWORD *v32; // x9
  __int64 v33; // x8
  char *v34; // x22
  unsigned __int64 v35; // x8
  __int64 v36; // x9
  _QWORD *v37; // x12
  __int64 v38; // x11
  __int64 v39; // x10
  char *v40; // x25
  unsigned __int64 v41; // x24
  _QWORD *v42; // x9
  char *v43; // x10
  __int64 v44; // x11
  _QWORD *v45; // x19
  __int64 v46; // x8
  __int64 v47; // x8

  v4 = (_QWORD *)a1[1];
  if ( v4 == (_QWORD *)a1[2] )
  {
    v24 = (char *)*a1;
    v25 = ((__int64)v4 - *a1) >> 4;
    if ( v4 == (_QWORD *)*a1 )
      v26 = 1;
    else
      v26 = ((__int64)v4 - *a1) >> 4;
    v27 = __CFADD__(v26, v25);
    v28 = v26 + v25;
    v29 = v27;
    if ( v29 | (v28 >> 60 != 0) )
      v30 = 0xFFFFFFFFFFFFFFFLL;
    else
      v30 = v28;
    if ( v30 )
    {
      if ( v30 >> 60 )
        sub_565294();
      v31 = operator new(16 * v30);
    }
    else
    {
      v31 = 0;
    }
    v32 = (_QWORD *)(v31 + 16 * ((a2 - v24) >> 4));
    *v32 = *a3;
    v33 = a3[1];
    v32[1] = v33;
    if ( v33 )
      ++*(_QWORD *)(v33 + 8);
    v34 = (char *)*a1;
    v35 = v31;
    if ( (char *)*a1 != a2 )
    {
      v36 = 0;
      do
      {
        v37 = (_QWORD *)(v31 + v36);
        *v37 = *(_QWORD *)&v34[v36];
        v38 = *(_QWORD *)&v34[v36 + 8];
        v37[1] = v38;
        if ( v38 )
          ++*(_QWORD *)(v38 + 8);
        v39 = (__int64)&v34[v36 + 16];
        v36 += 16;
      }
      while ( (char *)v39 != a2 );
      v35 = v31 + ((a2 - 16 - v34) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v40 = (char *)a1[1];
    v41 = v35 + 16;
    if ( v40 != a2 )
    {
      v42 = (_QWORD *)(v35 + 16);
      v43 = a2;
      do
      {
        *v42 = *(_QWORD *)v43;
        v44 = *((_QWORD *)v43 + 1);
        v42[1] = v44;
        if ( v44 )
          ++*(_QWORD *)(v44 + 8);
        v43 += 16;
        v42 += 2;
      }
      while ( v43 != v40 );
      v41 += ((v40 - 16 - a2) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    if ( v34 != v40 )
    {
      do
      {
        v45 = (_QWORD *)*((_QWORD *)v34 + 1);
        if ( v45 )
        {
          v46 = v45[1] - 1LL;
          v45[1] = v46;
          if ( !v46 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
            v47 = v45[2] - 1LL;
            v45[2] = v47;
            if ( !v47 )
              (*(void (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
          }
        }
        v34 += 16;
      }
      while ( v40 != v34 );
      v34 = (char *)*a1;
    }
    if ( v34 )
      operator delete(v34);
    *a1 = v31;
    a1[1] = v41;
    a1[2] = v31 + 16 * v30;
  }
  else
  {
    v7 = (char *)(v4 - 2);
    v8 = *(v4 - 1);
    *v4 = *(v4 - 2);
    v4[1] = v8;
    if ( v8 )
      ++*(_QWORD *)(v8 + 8);
    a1[1] = (__int64)(v4 + 2);
    v10 = *a3;
    v9 = (_QWORD *)a3[1];
    if ( v9 )
      ++v9[1];
    if ( v7 - a2 >= 1 )
    {
      v11 = ((unsigned __int64)(v7 - a2) >> 4) + 1;
      v12 = (char *)(v4 - 2);
      do
      {
        v14 = *((_QWORD *)v12 - 2);
        v12 -= 16;
        v13 = v14;
        v15 = *((_QWORD *)v12 + 1);
        if ( v15 )
          ++*(_QWORD *)(v15 + 8);
        v16 = (_QWORD *)*((_QWORD *)v7 + 1);
        *(_QWORD *)v7 = v13;
        *((_QWORD *)v7 + 1) = v15;
        if ( v16 )
        {
          v17 = v16[1] - 1LL;
          v16[1] = v17;
          if ( !v17 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
            v18 = v16[2] - 1LL;
            v16[2] = v18;
            if ( !v18 )
              (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
          }
        }
        --v11;
        v7 = v12;
      }
      while ( v11 > 1 );
    }
    if ( v9 )
      ++v9[1];
    v19 = (_QWORD *)*((_QWORD *)a2 + 1);
    *(_QWORD *)a2 = v10;
    *((_QWORD *)a2 + 1) = v9;
    if ( v19 )
    {
      v20 = v19[1] - 1LL;
      v19[1] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    if ( v9 )
    {
      v22 = v9[1] - 1LL;
      v9[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v23 = v9[2] - 1LL;
        v9[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
  }
}

