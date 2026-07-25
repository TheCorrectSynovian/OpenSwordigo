/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CDB58
 * Mangled: _ZN5Caver13ExperienceBarC2Ev
 * Demangled: Caver::ExperienceBar::ExperienceBar(void)
 *
 * Callers: 2
 *   0x00000000001FC600  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003CDB20  Caver::DraggableOverlayItem::~DraggableOverlayItem()
 *
 * Callees: 22
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FDE30  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000001FEA80  Caver::GUISlider::GUISlider(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *   0x0000000000200E20  Caver::GUISlider::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000201880  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>(Caver::GUISlider *)
 *   0x0000000000202CD0  Caver::GUISlider::SetBarTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 301
 *   insn=0x00000000003CDB74 string=0x00000000003CDB78 "Y"
 *   insn=0x00000000003CDB78 string=0x00000000003CDB7C "("
 *   insn=0x00000000003CDB8C string=0x00000000003CDB90 "B"
 *   insn=0x00000000003CDB98 string=0x00000000003CDB9C "iR"
 *   insn=0x00000000003CDBA0 string=0x00000000003CDBA4 "A"
 *   insn=0x00000000003CDBA4 string=0x00000000003CDBA8 "kr"
 *   insn=0x00000000003CDBA8 string=0x00000000003CDBAC "l"
 *   insn=0x00000000003CDBAC string=0x00000000003CDBB0 "m"
 *   insn=0x00000000003CDBB0 string=0x00000000003CDBB4 "h"
 *   insn=0x00000000003CDBB8 string=0x00000000003CDBBC "@"
 *   insn=0x00000000003CDBBC string=0x00000000003CDBC0 "*"
 *   insn=0x00000000003CDBC0 string=0x00000000003CDBC4 "j"
 *   insn=0x00000000003CDBC4 string=0x00000000003CDBC8 "ib"
 *   insn=0x00000000003CDBC8 string=0x00000000003CDBCC "`B"
 *   insn=0x00000000003CDBD8 string=0x00000000003CDBDC "m"
 *   insn=0x00000000003CDBE0 string=0x00000000003CDBE4 "h"
 *   insn=0x00000000003CDBE4 string=0x00000000003CDBE8 "`R"
 *   insn=0x00000000003CDBEC string=0x00000000003CDBF0 "hR"
 *   insn=0x00000000003CDBF4 string=0x00000000003CDBF8 "`"
 *   insn=0x00000000003CDBF8 string=0x00000000003CDBFC "`b"
 *   insn=0x00000000003CDBFC string=0x00000000003CDC00 "@"
 *   insn=0x00000000003CDC00 string=0x00000000003CDC04 "j"
 *   insn=0x00000000003CDC04 string=0x00000000003CDC08 "lb"
 *   insn=0x00000000003CDC08 string=0x00000000003CDC0C "k"
 *   insn=0x00000000003CDC18 string=0x00000000003CDC1C ""
 *   insn=0x00000000003CDC1C string=0x00000000003CDC20 " "
 *   insn=0x00000000003CDC20 string=0x00000000003CDC24 "ub"
 *   insn=0x00000000003CDC28 string=0x00000000003CDC2C "@"
 *   insn=0x00000000003CDC2C string=0x00000000003CDC30 "j"
 *   insn=0x00000000003CDC30 string=0x00000000003CDC34 "`"
 *   insn=0x00000000003CDC3C string=0x00000000003CDC40 "m"
 *   insn=0x00000000003CDC4C string=0x00000000003CDC50 "h"
 *   insn=0x00000000003CDC54 string=0x00000000003CDC58 "`"
 *   insn=0x00000000003CDC58 string=0x00000000003CDC5C "h"
 *   insn=0x00000000003CDC60 string=0x00000000003CDC64 "`"
 *   insn=0x00000000003CDC64 string=0x00000000003CDC68 "`"
 *   insn=0x00000000003CDC68 string=0x00000000003CDC6C "@"
 *   insn=0x00000000003CDC6C string=0x00000000003CDC70 "jb\t"
 *   insn=0x00000000003CDC70 string=0x00000000003CDC74 "i"\t"
 *   insn=0x00000000003CDC7C string=0x00000000003CDC80 "@"
 *   insn=0x00000000003CDC80 string=0x00000000003CDC84 "j"
 *   insn=0x00000000003CDC84 string=0x00000000003CDC88 "k""
 *   insn=0x00000000003CDC88 string=0x00000000003CDC8C " "
 *   insn=0x00000000003CDC8C string=0x00000000003CDC90 "ib"
 *   insn=0x00000000003CDC94 string=0x00000000003CDC98 "@"
 *   insn=0x00000000003CDC98 string=0x00000000003CDC9C "v""
 *   insn=0x00000000003CDC9C string=0x00000000003CDCA0 "jb"
 *   insn=0x00000000003CDCA0 string=0x00000000003CDCA4 " "
 *   insn=0x00000000003CDCA4 string=0x00000000003CDCA8 "i"
 *   insn=0x00000000003CDCA8 string=0x00000000003CDCAC "`"
 *   insn=0x00000000003CDCB0 string=0x00000000003CDCB4 "m"
 *   insn=0x00000000003CDCB8 string=0x00000000003CDCBC "hn"
 *   insn=0x00000000003CDCBC string=0x00000000003CDCC0 "h"
 *   insn=0x00000000003CDCCC string=0x00000000003CDCD0 "`"
 *   insn=0x00000000003CDCD4 string=0x00000000003CDCD8 "`"
 *   insn=0x00000000003CDCD8 string=0x00000000003CDCDC "`"
 *   insn=0x00000000003CDCDC string=0x00000000003CDCE0 "@"
 *   insn=0x00000000003CDCE0 string=0x00000000003CDCE4 "j""
 *   insn=0x00000000003CDCE4 string=0x00000000003CDCE8 "t"
 *   insn=0x00000000003CDCE8 string=0x00000000003CDCEC "h"
 *   insn=0x00000000003CDCF4 string=0x00000000003CDCF8 "@"
 *   insn=0x00000000003CDCF8 string=0x00000000003CDCFC "jb"
 *   insn=0x00000000003CDCFC string=0x00000000003CDD00 " "
 *   insn=0x00000000003CDD00 string=0x00000000003CDD04 "i""
 *   insn=0x00000000003CDD0C string=0x00000000003CDD10 "@"
 *   insn=0x00000000003CDD10 string=0x00000000003CDD14 " "
 *   insn=0x00000000003CDD18 string=0x00000000003CDD1C "m"
 *   insn=0x00000000003CDD20 string=0x00000000003CDD24 "`"
 *   insn=0x00000000003CDD2C string=0x00000000001FA350 "0'"
 *   insn=0x00000000003CDD30 string=0x00000000003CDD34 "!"
 *   insn=0x00000000003CDD34 string=0x0000000000592384 "ui_xp_frame"
 *   insn=0x00000000003CDD70 string=0x00000000003CDD74 "w"
 *   insn=0x00000000003CDD78 string=0x00000000003CDD7C "!"
 *   insn=0x00000000003CDD7C string=0x0000000000592390 "ui_xp_bar"
 *   insn=0x00000000003CDDB4 string=0x00000000003CDDB8 "\n"
 *   insn=0x00000000003CDDB8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003CDDC0 string=0x00000000003CDDC4 "/"
 *   insn=0x00000000003CDDD0 string=0x00000000003CDDD4 "h^O"
 *   insn=0x00000000003CDDE0 string=0x00000000003CDDE4 "i""
 *   insn=0x00000000003CDDE8 string=0x00000000003CDDEC "7"
 *   insn=0x00000000003CDDEC string=0x00000000003CDE30 "@"
 *   insn=0x00000000003CDDF0 string=0x00000000003CDDF4 ""
 *   insn=0x00000000003CDE00 string=0x00000000003CDE04 "\t@"
 *   insn=0x00000000003CDE10 string=0x00000000003CDE14 ""
 *   insn=0x00000000003CDE20 string=0x00000000003CDE24 "@"
 *   insn=0x00000000003CDE3C string=0x00000000003CDE40 "@"
 *   insn=0x00000000003CDE48 string=0x00000000003CDE4C "h"
 *   insn=0x00000000003CDE4C string=0x00000000003CDE50 "iz@"
 *   insn=0x00000000003CDE50 string=0x00000000003CDE54 "1@"
 *   insn=0x00000000003CDE58 string=0x00000000003CDE5C "i~@"
 *   insn=0x00000000003CDE64 string=0x00000000003CDE68 "*"
 *   insn=0x00000000003CDE68 string=0x00000000003CDE6C "J"
 *   insn=0x00000000003CDE6C string=0x00000000003CDE70 "*"
 *   insn=0x00000000003CDE80 string=0x00000000003CDE84 "7"
 *   insn=0x00000000003CDE84 string=0x00000000003CDEC8 "V"
 *   insn=0x00000000003CDE88 string=0x00000000003CDE8C ""
 *   insn=0x00000000003CDE98 string=0x00000000003CDE9C "\t@"
 *   insn=0x00000000003CDEA8 string=0x00000000003CDEAC ""
 *   insn=0x00000000003CDEB8 string=0x00000000003CDEBC "@"
 *   insn=0x00000000003CDED0 string=0x00000000001FD9B0 "0'"
 *   insn=0x00000000003CDED8 string=0x00000000003CDEDC "\n"
 *   insn=0x00000000003CDED8 string=0x00000000003CDEE8 "w"
 *   insn=0x00000000003CDEDC string=0x00000000003CDEE0 "J"
 *   insn=0x00000000003CDEE0 string=0x00000000003CDEE4 "\n"
 *   insn=0x00000000003CDEE8 string=0x00000000003CDEEC "i"
 *   insn=0x00000000003CDEEC string=0x00000000003CDEF0 "7"
 *   insn=0x00000000003CDEF4 string=0x00000000003CDEF8 ""
 *   insn=0x00000000003CDF04 string=0x00000000003CDF08 "\t@"
 *   insn=0x00000000003CDF14 string=0x00000000003CDF18 ""
 *   insn=0x00000000003CDF24 string=0x00000000003CDF28 "@"
 *   insn=0x00000000003CDF34 string=0x00000000003CDF38 "h"
 *   insn=0x00000000003CDF3C string=0x00000000003CDF40 "iF"
 *   insn=0x00000000003CDF44 string=0x00000000003CDF48 ""
 *   insn=0x00000000003CDF48 string=0x00000000003CDF4C "hB"
 *   insn=0x00000000003CDF4C string=0x00000000003CDF50 "*"
 *   insn=0x00000000003CDF50 string=0x00000000003CDF54 "h"
 *   insn=0x00000000003CDF6C string=0x00000000003CDF70 "\n"
 *   insn=0x00000000003CDF6C string=0x00000000003CDF7C "w"
 *   insn=0x00000000003CDF70 string=0x00000000003CDF74 "J"
 *   insn=0x00000000003CDF74 string=0x00000000003CDF78 "\n"
 *   insn=0x00000000003CDF7C string=0x00000000003CDF80 "i"
 *   insn=0x00000000003CDF80 string=0x00000000003CDF84 "h"
 *   insn=0x00000000003CDF84 string=0x00000000003CDF88 "7"
 *   insn=0x00000000003CDF8C string=0x00000000003CDF90 ""
 *   insn=0x00000000003CDF9C string=0x00000000003CDFA0 "\t@"
 *   insn=0x00000000003CDFAC string=0x00000000003CDFB0 ""
 *   insn=0x00000000003CDFBC string=0x00000000003CDFC0 "@"
 *   insn=0x00000000003CDFCC string=0x00000000003CDFD0 "i"
 *   insn=0x00000000003CDFD4 string=0x00000000003CDFD8 ""
 *   insn=0x00000000003CDFD8 string=0x00000000003CDFDC "h"
 *   insn=0x00000000003CDFDC string=0x00000000003CDFE0 "*"
 *   insn=0x00000000003CDFE0 string=0x00000000003CDFE4 "h&"
 *   insn=0x00000000003CDFF0 string=0x00000000003CDFF4 "_"
 *   insn=0x00000000003CDFFC string=0x00000000003CE000 "\n"
 *   insn=0x00000000003CDFFC string=0x00000000003CE00C "w"
 *   insn=0x00000000003CE000 string=0x00000000003CE004 "J"
 *   insn=0x00000000003CE004 string=0x00000000003CE008 "\n"
 *   insn=0x00000000003CE00C string=0x00000000003CE010 "i"
 *   insn=0x00000000003CE010 string=0x00000000003CE014 "h"
 *   insn=0x00000000003CE014 string=0x00000000003CE018 "7"
 *   insn=0x00000000003CE01C string=0x00000000003CE020 ""
 *   insn=0x00000000003CE02C string=0x00000000003CE030 "\t@"
 *   insn=0x00000000003CE03C string=0x00000000003CE040 ""
 *   insn=0x00000000003CE04C string=0x00000000003CE050 "@"
 *   insn=0x00000000003CE05C string=0x00000000003CE060 "i"
 *   insn=0x00000000003CE064 string=0x00000000003CE068 ""
 *   insn=0x00000000003CE068 string=0x00000000003CE06C "h"
 *   insn=0x00000000003CE06C string=0x00000000003CE070 "*"
 *   insn=0x00000000003CE070 string=0x00000000003CE074 "h"
 *   insn=0x00000000003CE080 string=0x00000000003CE084 ";"
 *   insn=0x00000000003CE088 string=0x00000000003CE08C ")|"
 *   insn=0x00000000003CE08C string=0x00000000003CE090 "Y@"
 *   insn=0x00000000003CE0A0 string=0x00000000003CE0A4 "3"
 *   insn=0x00000000003CE0A4 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003CE0A8 string=0x00000000003CE0AC "7"
 *   insn=0x00000000003CE0B0 string=0x00000000003CE0B4 ""
 *   insn=0x00000000003CE0C0 string=0x00000000003CE0C4 "\t@"
 *   insn=0x00000000003CE0D0 string=0x00000000003CE0D4 ""
 *   insn=0x00000000003CE0E0 string=0x00000000003CE0E4 "@"
 *   insn=0x00000000003CE0F4 string=0x00000000003CE0F8 "@"
 *   insn=0x00000000003CE0F8 string=0x00000000003CE0FC ""
 *   insn=0x00000000003CE0FC string=0x00000000003CE100 ""
 *   insn=0x00000000003CE104 string=0x00000000003CE108 ""
 *   insn=0x00000000003CE108 string=0x00000000003CE10C ""
 *   insn=0x00000000003CE118 string=0x00000000003CE11C "@"
 *   insn=0x00000000003CE118 string=0x00000000003CE138 "("
 *   insn=0x00000000003CE11C string=0x00000000003CE120 ""
 *   insn=0x00000000003CE120 string=0x00000000003CE124 ""
 *   insn=0x00000000003CE128 string=0x00000000003CE12C ""
 *   insn=0x00000000003CE12C string=0x00000000003CE130 ""
 *   insn=0x00000000003CE140 string=0x00000000003CE144 "a"
 *   insn=0x00000000003CE144 string=0x00000000003CE1F0 "8"
 *   insn=0x00000000003CE168 string=0x00000000003CE16C ")=G"
 *   insn=0x00000000003CE16C string=0x00000000003CE170 "!"
 *   insn=0x00000000003CE174 string=0x00000000003CE178 "\t"
 *   insn=0x00000000003CE174 string=0x00000000003CE1B0 "\t"
 *   insn=0x00000000003CE178 string=0x00000000003CE17C "*"
 *   insn=0x00000000003CE17C string=0x00000000003CE180 "\n"
 *   insn=0x00000000003CE184 string=0x00000000003CE188 ""
 *   insn=0x00000000003CE188 string=0x00000000003CE1BC "?"
 *   insn=0x00000000003CE18C string=0x00000000003CE190 ")=G"
 *   insn=0x00000000003CE190 string=0x00000000003CE194 "!"
 *   insn=0x00000000003CE198 string=0x00000000003CE19C "\t"
 *   insn=0x00000000003CE198 string=0x00000000003CE1D0 "\t"
 *   insn=0x00000000003CE19C string=0x00000000003CE1A0 "*"
 *   insn=0x00000000003CE1A0 string=0x00000000003CE1A4 "\n"
 *   insn=0x00000000003CE1AC string=0x00000000003CE1DC "?"
 *   insn=0x00000000003CE1B0 string=0x00000000003CE1B4 "*"
 *   insn=0x00000000003CE1B4 string=0x00000000003CE1B8 "\n"
 *   insn=0x00000000003CE1C4 string=0x00000000003CE1C8 "wp"
 *   insn=0x00000000003CE1D0 string=0x00000000003CE1D4 "*"
 *   insn=0x00000000003CE1D4 string=0x00000000003CE1D8 "\n"
 *   insn=0x00000000003CE1E4 string=0x00000000003CE1E8 "op"
 *   insn=0x00000000003CE1F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003CE20C string=0x00000000003CE210 "x"
 *   insn=0x00000000003CE210 string=0x00000000003CE214 "@"
 *   insn=0x00000000003CE214 string=0x00000000003CE218 ""
 *   insn=0x00000000003CE218 string=0x00000000003CE21C ""
 *   insn=0x00000000003CE220 string=0x00000000003CE224 ""
 *   insn=0x00000000003CE224 string=0x00000000003CE228 "\t@"
 *   insn=0x00000000003CE230 string=0x00000000003CE234 "@"
 *   insn=0x00000000003CE234 string=0x00000000003CE238 ""
 *   insn=0x00000000003CE238 string=0x00000000003CE23C ""
 *   insn=0x00000000003CE240 string=0x00000000003CE244 ""
 *   insn=0x00000000003CE244 string=0x00000000003CE248 "@"
 *   insn=0x00000000003CE250 string=0x00000000003CE254 "b"
 *   insn=0x00000000003CE260 string=0x00000000003CE264 "@"
 *   insn=0x00000000003CE264 string=0x00000000003CE268 ""
 *   insn=0x00000000003CE268 string=0x00000000003CE26C ""
 *   insn=0x00000000003CE26C string=0x00000000003CE270 "a"
 *   insn=0x00000000003CE270 string=0x00000000003CE274 ""
 *   insn=0x00000000003CE274 string=0x00000000003CE278 "\t@"
 *   insn=0x00000000003CE280 string=0x00000000003CE284 "@"
 *   insn=0x00000000003CE284 string=0x00000000003CE288 ""
 *   insn=0x00000000003CE288 string=0x00000000003CE28C ""
 *   insn=0x00000000003CE28C string=0x00000000003CE290 "a\n"
 *   insn=0x00000000003CE290 string=0x00000000003CE294 ""
 *   insn=0x00000000003CE294 string=0x00000000003CE298 "@"
 *   insn=0x00000000003CE2A0 string=0x00000000003CE2A4 "N"
 *   insn=0x00000000003CE2B0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003CE2B4 string=0x00000000003CE2B8 "`\t"
 *   insn=0x00000000003CE2B8 string=0x00000000003CE2BC "Q"
 *   insn=0x00000000003CE2B8 string=0x00000000003CE3E4 "@"
 *   insn=0x00000000003CE2C4 string=0x00000000003CE2C8 "(a"
 *   insn=0x00000000003CE2D4 string=0x00000000003CE2D8 "J=G"
 *   insn=0x00000000003CE2D8 string=0x00000000003CE2DC ")!"
 *   insn=0x00000000003CE2E0 string=0x00000000003CE2E4 "*"
 *   insn=0x00000000003CE2E0 string=0x00000000003CE314 "*"
 *   insn=0x00000000003CE2E4 string=0x00000000003CE2E8 "K"
 *   insn=0x00000000003CE2E8 string=0x00000000003CE2EC "+"
 *   insn=0x00000000003CE2F0 string=0x00000000003CE2F4 "_"
 *   insn=0x00000000003CE2F4 string=0x00000000003CE2F8 "L"
 *   insn=0x00000000003CE300 string=0x00000000003CE304 "(p"
 *   insn=0x00000000003CE30C string=0x00000000003CE310 "E"
 *   insn=0x00000000003CE30C string=0x00000000003CE408 "@"
 *   insn=0x00000000003CE310 string=0x00000000003CE424 "x"
 *   insn=0x00000000003CE314 string=0x00000000003CE318 "K"
 *   insn=0x00000000003CE318 string=0x00000000003CE31C "+"
 *   insn=0x00000000003CE31C string=0x00000000003CE320 "_"
 *   insn=0x00000000003CE324 string=0x00000000003CE328 "6"
 *   insn=0x00000000003CE334 string=0x00000000003CE338 "J"
 *   insn=0x00000000003CE33C string=0x00000000003CE340 "(a"
 *   insn=0x00000000003CE34C string=0x00000000003CE350 "J=G"
 *   insn=0x00000000003CE350 string=0x00000000003CE354 ")!"
 *   insn=0x00000000003CE358 string=0x00000000003CE35C "*"
 *   insn=0x00000000003CE358 string=0x00000000003CE38C "*"
 *   insn=0x00000000003CE35C string=0x00000000003CE360 "K"
 *   insn=0x00000000003CE360 string=0x00000000003CE364 "+"
 *   insn=0x00000000003CE368 string=0x00000000003CE36C "_"
 *   insn=0x00000000003CE378 string=0x00000000003CE37C "\np"
 *   insn=0x00000000003CE37C string=0x00000000003CE380 "x"
 *   insn=0x00000000003CE380 string=0x00000000003CE384 "X"
 *   insn=0x00000000003CE384 string=0x00000000003CE388 "9"
 *   insn=0x00000000003CE384 string=0x00000000003CE42C "@"
 *   insn=0x00000000003CE38C string=0x00000000003CE390 "K"
 *   insn=0x00000000003CE390 string=0x00000000003CE394 "+"
 *   insn=0x00000000003CE394 string=0x00000000003CE398 "_"
 *   insn=0x00000000003CE39C string=0x00000000003CE3A0 "!"
 *   insn=0x00000000003CE3B8 string=0x00000000003CE3BC "x"
 *   insn=0x00000000003CE3BC string=0x00000000003CE3C0 "x"
 *   insn=0x00000000003CE3C0 string=0x00000000003CE3C4 "*"
 *   insn=0x00000000003CE3D0 string=0x00000000003CE3D4 ""
 *   insn=0x00000000003CE3E4 string=0x00000000003CE3E8 ""
 *   insn=0x00000000003CE3E8 string=0x00000000003CE3EC ""
 *   insn=0x00000000003CE3F0 string=0x00000000003CE3F4 ""
 *   insn=0x00000000003CE3F4 string=0x00000000003CE3F8 ""
 *   insn=0x00000000003CE408 string=0x00000000003CE40C ""
 *   insn=0x00000000003CE40C string=0x00000000003CE410 ""
 *   insn=0x00000000003CE414 string=0x00000000003CE418 ""
 *   insn=0x00000000003CE418 string=0x00000000003CE41C ""
 *   insn=0x00000000003CE424 string=0x00000000003CE428 "8"
 *   insn=0x00000000003CE42C string=0x00000000003CE430 ""
 *   insn=0x00000000003CE430 string=0x00000000003CE434 ""
 *   insn=0x00000000003CE438 string=0x00000000003CE43C ""
 *   insn=0x00000000003CE43C string=0x00000000003CE440 "\t@"
 *   insn=0x00000000003CE448 string=0x00000000003CE44C "@"
 *   insn=0x00000000003CE44C string=0x00000000003CE450 ""
 *   insn=0x00000000003CE450 string=0x00000000003CE454 ""
 *   insn=0x00000000003CE458 string=0x00000000003CE45C ""
 *   insn=0x00000000003CE45C string=0x00000000003CE460 "@"
 *   insn=0x00000000003CE46C string=0x00000000003CE470 "H"
 *   insn=0x00000000003CE470 string=0x00000000001F8990 "0'"
 *   insn=0x00000000003CE474 string=0x00000000003CE478 "F"
 *   insn=0x00000000003CE47C string=0x00000000003CE480 "D"
 *   insn=0x00000000003CE480 string=0x00000000003CE484 "t"
 *   insn=0x00000000003CE484 string=0x00000000003CE488 "4"
 *   insn=0x00000000003CE488 string=0x00000000003CE4CC "t~@"
 *   insn=0x00000000003CE48C string=0x00000000003CE490 ""
 *   insn=0x00000000003CE49C string=0x00000000003CE4A0 "\t@"
 *   insn=0x00000000003CE4AC string=0x00000000003CE4B0 ""
 *   insn=0x00000000003CE4BC string=0x00000000003CE4C0 "@"
 *   insn=0x00000000003CE4CC string=0x00000000003CE4D0 "4"
 *   insn=0x00000000003CE4D4 string=0x00000000003CE4D8 ""
 *   insn=0x00000000003CE4E4 string=0x00000000003CE4E8 "\t@"
 *   insn=0x00000000003CE4F4 string=0x00000000003CE4F8 ""
 *   insn=0x00000000003CE504 string=0x00000000003CE508 "@"
 *   insn=0x00000000003CE514 string=0x00000000003CE518 "F"
 *   insn=0x00000000003CE534 string=0x00000000003CE538 "`z@"
 *   insn=0x00000000003CE538 string=0x00000000003CE53C "a"
 *   insn=0x00000000003CE54C string=0x00000000003CE550 "8"
 *   insn=0x00000000003CE550 string=0x00000000001FDE30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ExperienceBar::ExperienceBar(Caver::ExperienceBar *this)
{
  Caver::TextureLibrary *v2; // x0
  void *v3; // x0
  void *v4; // x0
  Caver::GUISlider *v5; // x0
  _QWORD *v6; // x23
  __int64 v7; // x9
  _QWORD *v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 (__fastcall *v11)(Caver::ExperienceBar *, __int64 *); // x8
  _QWORD *v12; // x9
  Caver::FontLibrary *v13; // x0
  _QWORD *v14; // x23
  __int64 v15; // x8
  __int64 v16; // x8
  Caver::FontLibrary *v17; // x0
  _QWORD *v18; // x8
  __int64 v19; // x9
  _QWORD *v20; // x23
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x8
  __int64 v24; // x9
  _QWORD *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x8
  __int64 v29; // x9
  _QWORD *v30; // x23
  __int64 v31; // x8
  __int64 v32; // x8
  int v33; // w8
  _QWORD *v34; // x23
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x0
  int v38; // w8
  __int64 result; // x0
  int v40; // w8
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  __int64 v45; // [xsp+20h] [xbp-90h] BYREF
  int v46; // [xsp+28h] [xbp-88h]
  int v47; // [xsp+2Ch] [xbp-84h]
  __int64 v48; // [xsp+38h] [xbp-78h]
  __int64 v49; // [xsp+40h] [xbp-70h]
  __int64 v50; // [xsp+48h] [xbp-68h] BYREF
  _QWORD *v51; // [xsp+50h] [xbp-60h]
  __int64 v52; // [xsp+58h] [xbp-58h]

  v52 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::TextureLibrary *)Caver::GUIView::GUIView(this);
  *(_QWORD *)this = off_6CF9F0;
  *((_OWORD *)this + 15) = 0u;
  *(_QWORD *)((char *)this + 276) = 0xFFFFFFFF00000000LL;
  *((_OWORD *)this + 16) = 0u;
  *((_BYTE *)this + 272) = 0;
  *(_OWORD *)((char *)this + 292) = 0u;
  *(_QWORD *)((char *)this + 307) = 0;
  *(_QWORD *)((char *)this + 284) = 0;
  *((_BYTE *)this + 315) = -1;
  *((_OWORD *)this + 20) = 0u;
  *((_DWORD *)this + 84) = 0;
  *((_BYTE *)this + 340) = -1;
  *((_DWORD *)this + 108) = 0;
  *((_OWORD *)this + 25) = 0u;
  *((_OWORD *)this + 26) = 0u;
  *((_OWORD *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 440) = 0u;
  *((_BYTE *)this + 464) = 0;
  *((_QWORD *)this + 57) = 0;
  *(_OWORD *)((char *)this + 360) = 0u;
  *(_OWORD *)((char *)this + 344) = 0u;
  *((_DWORD *)this + 94) = 0;
  *(_OWORD *)((char *)this + 488) = 0u;
  *(_OWORD *)((char *)this + 504) = 0u;
  *(_OWORD *)((char *)this + 472) = 0u;
  *((_QWORD *)this + 65) = 0;
  *((_DWORD *)this + 132) = -1;
  *((_BYTE *)this + 554) = 0;
  *((_WORD *)this + 276) = 0;
  *(_OWORD *)((char *)this + 536) = 0u;
  *((_BYTE *)this + 555) = -1;
  *((_DWORD *)this + 144) = 0;
  *((_OWORD *)this + 35) = 0u;
  *((_BYTE *)this + 580) = -1;
  *((_DWORD *)this + 168) = 0;
  *((_OWORD *)this + 40) = 0u;
  *((_OWORD *)this + 41) = 0u;
  *((_OWORD *)this + 39) = 0u;
  *(_OWORD *)((char *)this + 680) = 0u;
  *((_BYTE *)this + 704) = 0;
  *((_QWORD *)this + 87) = 0;
  *(_OWORD *)((char *)this + 600) = 0u;
  *(_OWORD *)((char *)this + 584) = 0u;
  *((_DWORD *)this + 154) = 0;
  *(_OWORD *)((char *)this + 744) = 0u;
  *(_OWORD *)((char *)this + 728) = 0u;
  *(_OWORD *)((char *)this + 712) = 0u;
  *((_QWORD *)this + 95) = 0;
  *((_DWORD *)this + 192) = -1;
  *(_OWORD *)((char *)this + 776) = 0u;
  *((_BYTE *)this + 795) = -1;
  *((_BYTE *)this + 820) = -1;
  *((_BYTE *)this + 794) = 0;
  *((_WORD *)this + 396) = 0;
  *((_DWORD *)this + 204) = 0;
  *((_OWORD *)this + 50) = 0u;
  *((_DWORD *)this + 228) = 0;
  *((_OWORD *)this + 55) = 0u;
  *((_OWORD *)this + 56) = 0u;
  *((_OWORD *)this + 54) = 0u;
  *(_OWORD *)((char *)this + 920) = 0u;
  *((_BYTE *)this + 944) = 0;
  *((_QWORD *)this + 117) = 0;
  *(_OWORD *)((char *)this + 840) = 0u;
  *(_OWORD *)((char *)this + 824) = 0u;
  *((_DWORD *)this + 214) = 0;
  *((_QWORD *)this + 125) = 0;
  *(_OWORD *)((char *)this + 984) = 0u;
  *(_OWORD *)((char *)this + 968) = 0u;
  *(_OWORD *)((char *)this + 952) = 0u;
  *((_DWORD *)this + 252) = -1;
  *((_WORD *)this + 508) = 0;
  *((_OWORD *)this + 64) = 0u;
  *((_BYTE *)this + 229) = 0;
  Caver::TextureLibrary::sharedLibrary(v2);
  sub_566BB8((int)&v50, "ui_xp_frame");
  Caver::TextureLibrary::TextureForName();
  v3 = (void *)(v50 - 24);
  if ( (__int64 *)(v50 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v50 - 8);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v3);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v3);
  sub_566BB8((int)&v50, "ui_xp_bar");
  Caver::TextureLibrary::TextureForName();
  v4 = (void *)(v50 - 24);
  if ( (__int64 *)(v50 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v50 - 8);
    if ( &pthread_create )
    {
      do
        v44 = __ldaxr(v43);
      while ( __stlxr(v44 - 1, v43) );
    }
    else
    {
      v44 = (*v43)--;
    }
    if ( v44 <= 0 )
      operator delete(v4);
  }
  v5 = (Caver::GUISlider *)operator new(0x170u);
  Caver::GUISlider::GUISlider(v5);
  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>();
  v6 = (_QWORD *)*((_QWORD *)this + 31);
  v7 = v50;
  v50 = *((_QWORD *)this + 30);
  v8 = v51;
  *((_QWORD *)this + 30) = v7;
  *((_QWORD *)this + 31) = v8;
  v51 = v6;
  if ( v6 )
  {
    v9 = v6[1] - 1LL;
    v6[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v10 = v6[2] - 1LL;
      v6[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 30) + 229LL) = 0;
  Caver::GUISlider::SetFrameTexture();
  Caver::GUISlider::SetBarTexture();
  v11 = *(__int64 (__fastcall **)(Caver::ExperienceBar *, __int64 *))(*(_QWORD *)this + 96LL);
  v50 = *((_QWORD *)this + 30);
  v12 = (_QWORD *)*((_QWORD *)this + 31);
  v51 = v12;
  if ( v12 )
    ++v12[1];
  v13 = (Caver::FontLibrary *)v11(this, &v50);
  v14 = v51;
  if ( v51 )
  {
    v15 = v51[1] - 1LL;
    v51[1] = v15;
    if ( !v15 )
    {
      v13 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        v13 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  v17 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v13);
  Caver::FontLibrary::DefaultFont(v17);
  v19 = v50;
  v18 = v51;
  if ( v51 )
    ++v51[1];
  v20 = (_QWORD *)*((_QWORD *)this + 38);
  *((_QWORD *)this + 37) = v19;
  *((_QWORD *)this + 38) = v18;
  if ( v20 )
  {
    v21 = v20[1] - 1LL;
    v20[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  *((_BYTE *)this + 336) = 1;
  *(_DWORD *)((char *)this + 337) = -16777216;
  *((_QWORD *)this + 43) = 0xBF8000003F800000LL;
  LODWORD(v45) = -1;
  Caver::FontText::SetColor((Caver::ExperienceBar *)((char *)this + 296), (const Caver::Color *)&v45);
  v24 = v50;
  v23 = v51;
  if ( v51 )
    ++v51[1];
  v25 = (_QWORD *)*((_QWORD *)this + 68);
  *((_QWORD *)this + 67) = v24;
  *((_QWORD *)this + 68) = v23;
  if ( v25 )
  {
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  *((_BYTE *)this + 576) = 1;
  *(_DWORD *)((char *)this + 577) = -16777216;
  *((_QWORD *)this + 73) = 0xBF8000003F800000LL;
  LODWORD(v45) = -1;
  Caver::FontText::SetColor((Caver::ExperienceBar *)((char *)this + 536), (const Caver::Color *)&v45);
  v29 = v50;
  v28 = v51;
  if ( v51 )
    ++v51[1];
  v30 = (_QWORD *)*((_QWORD *)this + 98);
  *((_QWORD *)this + 97) = v29;
  *((_QWORD *)this + 98) = v28;
  if ( v30 )
  {
    v31 = v30[1] - 1LL;
    v30[1] = v31;
    if ( !v31 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
      v32 = v30[2] - 1LL;
      v30[2] = v32;
      if ( !v32 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
  }
  *((_BYTE *)this + 816) = 1;
  *(_DWORD *)((char *)this + 817) = -16777216;
  *((_QWORD *)this + 103) = 0xBF8000003F800000LL;
  LODWORD(v45) = -1;
  Caver::FontText::SetColor((Caver::ExperienceBar *)((char *)this + 776), (const Caver::Color *)&v45);
  v33 = *(_DWORD *)(v49 + 88);
  v45 = 0;
  v46 = 1138819072;
  v47 = v33;
  Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v45);
  v34 = v51;
  if ( v51 )
  {
    v35 = v51[1] - 1LL;
    v51[1] = v35;
    if ( !v35 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
      v36 = v34[2] - 1LL;
      v34[2] = v36;
      if ( !v36 )
        (*(void (__fastcall **)(_QWORD *))(*v34 + 24LL))(v34);
    }
  }
  v37 = v48;
  if ( v48 )
  {
    v38 = *(_DWORD *)(v48 + 8) - 1;
    *(_DWORD *)(v48 + 8) = v38;
    if ( !v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  }
  result = v49;
  if ( v49 )
  {
    v40 = *(_DWORD *)(v49 + 8) - 1;
    *(_DWORD *)(v49 + 8) = v40;
    if ( !v40 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

