/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AA5B4
 * Mangled: _ZN5Caver24ParticleEmitterComponent7PrepareEv
 * Demangled: Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 24
 *   0x00000000001F61C0  Caver::ParticleComponent::AddTypeToParticleSystem(Caver::ParticleSystem *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB090  Caver::ParticleEmitterComponent::RegisterLibrary(void)
 *   0x00000000001FB740  Caver::ParticleEmitterComponent::UpdateLocalTransform(void)
 *   0x00000000001FC410  Caver::ParticleEmitterComponent::Update(float)
 *   0x00000000001FC4A0  std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *   0x00000000001FCE40  Caver::ParticleEmitterComponent::PrepareEmitter(boost::shared_ptr<Caver::ParticleEmitter> const&)
 *   0x00000000001FD050  Caver::TransformComponent::WorldMatrix(void)
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FE460  Caver::ParticleSystem::Update(float)
 *   0x00000000001FF1F0  .cosf
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200C20  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000203C70  .sinf
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 235
 *   insn=0x00000000002AA5CC string=0x00000000001FB090 "0'"
 *   insn=0x00000000002AA5D0 string=0x00000000002AA5D4 "`"
 *   insn=0x00000000002AA5D4 string=0x00000000002AA5D8 "!"
 *   insn=0x00000000002AA5E4 string=0x00000000002AA5E8 "\t\t@"
 *   insn=0x00000000002AA5E4 string=0x00000000002AA5F4 "`"
 *   insn=0x00000000002AA5E8 string=0x00000000002AA5EC ")"
 *   insn=0x00000000002AA5EC string=0x00000000002AA5F0 "\t\t"
 *   insn=0x00000000002AA5F4 string=0x00000000002AA5F8 "h"
 *   insn=0x00000000002AA5FC string=0x00000000002AA600 "@"
 *   insn=0x00000000002AA5FC string=0x00000000002AA610 "h"
 *   insn=0x00000000002AA600 string=0x00000000002AA604 ""
 *   insn=0x00000000002AA604 string=0x00000000002AA608 ""
 *   insn=0x00000000002AA60C string=0x00000000002AA688 ""
 *   insn=0x00000000002AA610 string=0x00000000002AA614 "H"
 *   insn=0x00000000002AA614 string=0x00000000002AA618 "`""
 *   insn=0x00000000002AA614 string=0x00000000002AA69C "hr@"
 *   insn=0x00000000002AA61C string=0x00000000002AA620 "05"
 *   insn=0x00000000002AA620 string=0x00000000002AA624 "h"
 *   insn=0x00000000002AA620 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002AA628 string=0x00000000002AA62C "`"
 *   insn=0x00000000002AA62C string=0x00000000002AA630 "aFA"
 *   insn=0x00000000002AA630 string=0x00000000002AA634 "{Y"
 *   insn=0x00000000002AA634 string=0x00000000002AA638 "i"
 *   insn=0x00000000002AA638 string=0x00000000002AA63C "h"
 *   insn=0x00000000002AA63C string=0x00000000002AA640 ")"
 *   insn=0x00000000002AA640 string=0x00000000002AA644 "\tA\t"
 *   insn=0x00000000002AA644 string=0x00000000002AA648 "ivA"
 *   insn=0x00000000002AA648 string=0x00000000002AA64C "\t"
 *   insn=0x00000000002AA64C string=0x00000000002AA650 "`nA"
 *   insn=0x00000000002AA650 string=0x00000000002AA654 "arA"
 *   insn=0x00000000002AA654 string=0x00000000002AA658 "cvA"
 *   insn=0x00000000002AA65C string=0x00000000002AA660 """
 *   insn=0x00000000002AA664 string=0x00000000002AA668 "!!"
 *   insn=0x00000000002AA66C string=0x00000000002AA670 "a#"
 *   insn=0x00000000002AA67C string=0x00000000002AA680 "\tE"
 *   insn=0x00000000002AA688 string=0x00000000002AA68C ""
 *   insn=0x00000000002AA690 string=0x00000000002AA694 "h"
 *   insn=0x00000000002AA694 string=0x00000000002AA698 ""
 *   insn=0x00000000002AA6A0 string=0x00000000002AA6A4 "K"
 *   insn=0x00000000002AA6A4 string=0x00000000002AA78C "h"
 *   insn=0x00000000002AA6A8 string=0x00000000002AA6AC "t""
 *   insn=0x00000000002AA6AC string=0x00000000002AA6B0 "u"
 *   insn=0x00000000002AA6BC string=0x00000000002AA6C0 "@"
 *   insn=0x00000000002AA6C8 string=0x00000000002AA778 "hr"
 *   insn=0x00000000002AA6D4 string=0x00000000002AA6D8 "@"
 *   insn=0x00000000002AA6DC string=0x00000000002AA6E0 "h"
 *   insn=0x00000000002AA6E8 string=0x00000000002AA6EC "h"
 *   insn=0x00000000002AA6EC string=0x00000000002AA718 "a"
 *   insn=0x00000000002AA6F0 string=0x00000000002AA6F4 " "
 *   insn=0x00000000002AA6F8 string=0x00000000002AA6FC "6"
 *   insn=0x00000000002AA6FC string=0x00000000002AA700 ""
 *   insn=0x00000000002AA70C string=0x00000000002AA710 "h"
 *   insn=0x00000000002AA720 string=0x00000000002AA724 ""
 *   insn=0x00000000002AA730 string=0x00000000002AA734 "6"
 *   insn=0x00000000002AA730 string=0x00000000001F61C0 "0'"
 *   insn=0x00000000002AA738 string=0x00000000002AA73C ""
 *   insn=0x00000000002AA74C string=0x00000000002AA750 "\t@"
 *   insn=0x00000000002AA758 string=0x00000000002AA75C ""
 *   insn=0x00000000002AA76C string=0x00000000002AA770 "@"
 *   insn=0x00000000002AA784 string=0x00000000002AA788 "k"
 *   insn=0x00000000002AA790 string=0x00000000002AA794 "ab"
 *   insn=0x00000000002AA79C string=0x00000000001FCE40 "0'"
 *   insn=0x00000000002AA7A4 string=0x00000000001FB740 "0'"
 *   insn=0x00000000002AA7A8 string=0x00000000002AA7AC "h"
 *   insn=0x00000000002AA7C4 string=0x00000000002AA7C8 "6"
 *   insn=0x00000000002AA7CC string=0x00000000002AA7D0 ""
 *   insn=0x00000000002AA7DC string=0x00000000002AA7E0 "\t@"
 *   insn=0x00000000002AA7EC string=0x00000000002AA7F0 ""
 *   insn=0x00000000002AA7FC string=0x00000000002AA800 "@"
 *   insn=0x00000000002AA80C string=0x00000000002AA810 "-\"
 *   insn=0x00000000002AA824 string=0x00000000002AA828 "S"
 *   insn=0x00000000002AA828 string=0x00000000002AA82C "h"
 *   insn=0x00000000002AA830 string=0x00000000002AA834 ""
 *   insn=0x00000000002AA83C string=0x000000000058C098 "ParticleEmitter"
 *   insn=0x00000000002AA85C string=0x00000000002AA860 "h4"
 *   insn=0x00000000002AA860 string=0x00000000001F7A00 "0'"
 *   insn=0x00000000002AA868 string=0x00000000002AA86C ")"
 *   insn=0x00000000002AA874 string=0x00000000002AA878 "!"
 *   insn=0x00000000002AA878 string=0x00000000002AA87C "h"
 *   insn=0x00000000002AA888 string=0x00000000002AA8E0 "|."
 *   insn=0x00000000002AA89C string=0x00000000002AA8A0 ")=G"
 *   insn=0x00000000002AA8A0 string=0x00000000002AA8A4 "!"
 *   insn=0x00000000002AA8A8 string=0x00000000002AA8AC "\t"
 *   insn=0x00000000002AA8A8 string=0x00000000002AA8C0 "\t"
 *   insn=0x00000000002AA8AC string=0x00000000002AA8B0 "*"
 *   insn=0x00000000002AA8B0 string=0x00000000002AA8B4 "\n"
 *   insn=0x00000000002AA8BC string=0x00000000002AA8CC "?"
 *   insn=0x00000000002AA8C0 string=0x00000000002AA8C4 "*"
 *   insn=0x00000000002AA8C4 string=0x00000000002AA8C8 "\n"
 *   insn=0x00000000002AA8CC string=0x00000000002AA8D0 "l"
 *   insn=0x00000000002AA8E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002AA8E8 string=0x00000000002AA8EC "J"
 *   insn=0x00000000002AA8F0 string=0x00000000002AA8F4 "(a"
 *   insn=0x00000000002AA900 string=0x00000000002AA904 "J=G"
 *   insn=0x00000000002AA904 string=0x00000000002AA908 ")!"
 *   insn=0x00000000002AA90C string=0x00000000002AA910 "*"
 *   insn=0x00000000002AA90C string=0x00000000002AA93C "*"
 *   insn=0x00000000002AA910 string=0x00000000002AA914 "K"
 *   insn=0x00000000002AA914 string=0x00000000002AA918 "+"
 *   insn=0x00000000002AA91C string=0x00000000002AA920 "_"
 *   insn=0x00000000002AA93C string=0x00000000002AA940 "K"
 *   insn=0x00000000002AA940 string=0x00000000002AA944 "+"
 *   insn=0x00000000002AA944 string=0x00000000002AA948 "_"
 *   insn=0x00000000002AA970 string=0x00000000002AA974 "W"
 *   insn=0x00000000002AA988 string=0x00000000002AA98C "x"
 *   insn=0x00000000002AA98C string=0x00000000002AA990 ""
 *   insn=0x00000000002AA998 string=0x00000000002AA99C "@"
 *   insn=0x00000000002AA99C string=0x00000000002AA9A0 ""
 *   insn=0x00000000002AA9A0 string=0x00000000002AA9A4 "U"
 *   insn=0x00000000002AA9B4 string=0x00000000002AA9B8 "J4"
 *   insn=0x00000000002AA9D0 string=0x00000000002AA9D4 ")\t"
 *   insn=0x00000000002AA9DC string=0x00000000002AA9E0 ""
 *   insn=0x00000000002AA9E0 string=0x00000000002AA9E4 "6"
 *   insn=0x00000000002AA9E4 string=0x00000000002AAA28 "9"
 *   insn=0x00000000002AA9E8 string=0x00000000002AA9EC ""
 *   insn=0x00000000002AA9F8 string=0x00000000002AA9FC "\t@"
 *   insn=0x00000000002AAA08 string=0x00000000002AAA0C ""
 *   insn=0x00000000002AAA18 string=0x00000000002AAA1C "@"
 *   insn=0x00000000002AAA2C string=0x00000000002AAA30 ""
 *   insn=0x00000000002AAA40 string=0x00000000002AAA44 "\t@"
 *   insn=0x00000000002AAA4C string=0x00000000002AAA50 ""
 *   insn=0x00000000002AAA60 string=0x00000000002AAA64 "@"
 *   insn=0x00000000002AAA88 string=0x00000000002AAA8C "@"
 *   insn=0x00000000002AAA90 string=0x00000000002AAA94 "@"
 *   insn=0x00000000002AAA98 string=0x00000000002AAA9C "x"
 *   insn=0x00000000002AAAA4 string=0x00000000002AAAA8 "@"
 *   insn=0x00000000002AAAAC string=0x00000000002AAAB0 ""
 *   insn=0x00000000002AAAB8 string=0x00000000002AAABC "?"
 *   insn=0x00000000002AAAC0 string=0x00000000002AAAC4 "(D"
 *   insn=0x00000000002AAAD4 string=0x00000000002AAAD8 "rF"
 *   insn=0x00000000002AAAD8 string=0x00000000001FC4A0 "0'"
 *   insn=0x00000000002AAB20 string=0x00000000002AAB24 "9"
 *   insn=0x00000000002AAB28 string=0x00000000002AAB2C ""
 *   insn=0x00000000002AAB38 string=0x00000000002AAB3C "\t@"
 *   insn=0x00000000002AAB48 string=0x00000000002AAB4C ""
 *   insn=0x00000000002AAB58 string=0x00000000002AAB5C "@"
 *   insn=0x00000000002AAB68 string=0x00000000002AAB6C "V["
 *   insn=0x00000000002AAB88 string=0x00000000002AAB8C "V"
 *   insn=0x00000000002AAB94 string=0x00000000002AAB98 ""
 *   insn=0x00000000002AAB9C string=0x00000000002AABA0 "t"
 *   insn=0x00000000002AABA4 string=0x00000000002AABA8 "h"
 *   insn=0x00000000002AABA4 string=0x00000000002AABB8 "h"
 *   insn=0x00000000002AABA8 string=0x00000000002AABAC "h"
 *   insn=0x00000000002AABB0 string=0x00000000002AABB4 "h"
 *   insn=0x00000000002AABB4 string=0x00000000002AAC00 "h"
 *   insn=0x00000000002AABBC string=0x00000000002AABC0 "t""
 *   insn=0x00000000002AABCC string=0x00000000002AABD0 "h"
 *   insn=0x00000000002AABD0 string=0x00000000002AABD4 "("
 *   insn=0x00000000002AABE0 string=0x00000000002AABE4 "h"
 *   insn=0x00000000002AABE4 string=0x00000000002AABE8 ""
 *   insn=0x00000000002AABE8 string=0x00000000002AAD68 "`"
 *   insn=0x00000000002AABF8 string=0x00000000002AABFC "`"
 *   insn=0x00000000002AAC04 string=0x00000000002AAC08 "`"
 *   insn=0x00000000002AAC0C string=0x00000000002AAE88 "h"
 *   insn=0x00000000002AAC14 string=0x00000000002AAC18 "hRG9"
 *   insn=0x00000000002AAC14 string=0x00000000001FD050 "0'"
 *   insn=0x00000000002AAC1C string=0x00000000002AAC20 "aR"
 *   insn=0x00000000002AAC1C string=0x00000000002AAC30 "t"
 *   insn=0x00000000002AAC30 string=0x00000000002AAC34 "\n"
 *   insn=0x00000000002AAC44 string=0x00000000002AAC48 ""
 *   insn=0x00000000002AAC48 string=0x00000000002AAC4C "M"
 *   insn=0x00000000002AAC4C string=0x00000000002AAC50 "j"
 *   insn=0x00000000002AAC50 string=0x00000000002AAC54 "J"
 *   insn=0x00000000002AAC54 string=0x00000000002AAC58 "K"
 *   insn=0x00000000002AAC64 string=0x00000000002AACE0 "+E@"
 *   insn=0x00000000002AAC74 string=0x00000000002AAC78 "-"
 *   insn=0x00000000002AAC7C string=0x00000000002AAC80 "_"
 *   insn=0x00000000002AAC84 string=0x00000000002AAC9C "l"
 *   insn=0x00000000002AAC94 string=0x00000000002AAC98 "H"
 *   insn=0x00000000002AACB0 string=0x00000000002AACB4 "J"
 *   insn=0x00000000002AACD0 string=0x00000000002AACD4 "a"
 *   insn=0x00000000002AACE0 string=0x00000000002AACE4 "KE"
 *   insn=0x00000000002AACE4 string=0x00000000002AACE8 "_"
 *   insn=0x00000000002AACF4 string=0x00000000002AACF8 "`"
 *   insn=0x00000000002AAD28 string=0x00000000002AAD2C "!!"
 *   insn=0x00000000002AAD2C string=0x00000000002AAD30 "B""
 *   insn=0x00000000002AAD38 string=0x00000000002AAD3C "a#"
 *   insn=0x00000000002AAD40 string=0x00000000002AAD44 " "
 *   insn=0x00000000002AAD48 string=0x00000000002AAD4C "g"
 *   insn=0x00000000002AAD4C string=0x00000000002AAD50 " "
 *   insn=0x00000000002AAD54 string=0x00000000001FD530 "0'"
 *   insn=0x00000000002AAD58 string=0x00000000002AAD5C "t"
 *   insn=0x00000000002AAD5C string=0x00000000002AAD60 "h"
 *   insn=0x00000000002AAD60 string=0x00000000002AAD64 "c"
 *   insn=0x00000000002AAD64 string=0x00000000002AAEF0 "5@"
 *   insn=0x00000000002AAD70 string=0x00000000002AAD74 ""
 *   insn=0x00000000002AAD80 string=0x00000000002AAD84 "5"
 *   insn=0x00000000002AAD88 string=0x00000000002AAD8C ""
 *   insn=0x00000000002AAD9C string=0x00000000002AADA0 "\t@"
 *   insn=0x00000000002AADA8 string=0x00000000002AADAC ""
 *   insn=0x00000000002AADBC string=0x00000000002AADC0 "@"
 *   insn=0x00000000002AADC8 string=0x0000000000583734 "o"
 *   insn=0x00000000002AADD0 string=0x00000000002AADD4 "-\n"
 *   insn=0x00000000002AADD4 string=0x00000000002AADD8 "h"
 *   insn=0x00000000002AADDC string=0x00000000002AADE0 "h"
 *   insn=0x00000000002AADE4 string=0x00000000002AADE8 "i"
 *   insn=0x00000000002AADE4 string=0x00000000002AADF8 "h"
 *   insn=0x00000000002AADE8 string=0x00000000002AADEC "i"
 *   insn=0x00000000002AADEC string=0x00000000002AADF0 "a@9(\t"
 *   insn=0x00000000002AADF0 string=0x00000000002AADF4 "(\t"
 *   insn=0x00000000002AADFC string=0x00000000002AAE10 ""
 *   insn=0x00000000002AAE04 string=0x00000000002AAE08 "63"
 *   insn=0x00000000002AAE08 string=0x00000000002AAE0C "h"
 *   insn=0x00000000002AAE10 string=0x00000000002AAE30 "h"
 *   insn=0x00000000002AAE18 string=0x00000000002AAE1C ""
 *   insn=0x00000000002AAE20 string=0x00000000002AAE24 "%@"
 *   insn=0x00000000002AAE2C string=0x00000000002AAE78 "h"
 *   insn=0x00000000002AAE40 string=0x00000000002AAE74 "5"
 *   insn=0x00000000002AAE48 string=0x00000000002AAE4C "\t@"
 *   insn=0x00000000002AAE54 string=0x00000000002AAE58 ""
 *   insn=0x00000000002AAE68 string=0x00000000002AAE6C "@"
 *   insn=0x00000000002AAE7C string=0x00000000002AAE80 "\t"
 *   insn=0x00000000002AAE80 string=0x00000000002AAE84 "%"
 *   insn=0x00000000002AAE8C string=0x00000000002AAE90 "\t9@"
 *   insn=0x00000000002AAE90 string=0x00000000002AAE94 "\ny@"
 *   insn=0x00000000002AAEA4 string=0x00000000002AAEA8 """
 *   insn=0x00000000002AAEAC string=0x00000000002AAEB0 "!"
 *   insn=0x00000000002AAEB0 string=0x00000000002AAEB4 "  ""
 *   insn=0x00000000002AAEB4 string=0x00000000002AAEB8 "M"
 *   insn=0x00000000002AAEB8 string=0x00000000002AAEE0 "\t"
 *   insn=0x00000000002AAEBC string=0x00000000002AAEC0 "lc"
 *   insn=0x00000000002AAEC8 string=0x00000000002AAECC " "
 *   insn=0x00000000002AAED4 string=0x00000000002AAED8 "t"
 *   insn=0x00000000002AAED8 string=0x00000000002AAEDC "h"
 *   insn=0x00000000002AAEE4 string=0x00000000002AAEE8 "\tAB9"
 *   insn=0x00000000002AAF04 string=0x00000000002AAF08 ""
 *   insn=0x00000000002AAF0C string=0x00000000002AAF10 "h"
 *   insn=0x00000000002AAF10 string=0x00000000002AAF14 "h"
 *   insn=0x00000000002AAF44 string=0x00000000002AAF48 "5"
 *   insn=0x00000000002AAF4C string=0x00000000002AAF50 ""
 *   insn=0x00000000002AAF5C string=0x00000000002AAF60 "\t@"
 *   insn=0x00000000002AAF6C string=0x00000000002AAF70 ""
 *   insn=0x00000000002AAF7C string=0x00000000002AAF80 "@"
 *   insn=0x00000000002AAF8C string=0x00000000002AAF90 "MZ"
 *   insn=0x00000000002AAF9C string=0x00000000001FC410 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleEmitterComponent::Prepare(Caver::ParticleEmitterComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  _DWORD *v4; // x0
  int v5; // w8
  __int64 v6; // x8
  __int64 v7; // x24
  char *v8; // x21
  __int64 v9; // x0
  Caver::ParticleEmitterComponent *v10; // x8
  Caver::ParticleComponent *v11; // x23
  Caver::ParticleSystem *v12; // x1
  _QWORD *v13; // x22
  __int64 v14; // x8
  __int64 v15; // x8

  Caver::ParticleEmitterComponent::RegisterLibrary(this);
  v2 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 5),
         (__int64)Caver::TransformComponent::Interface);
  v3 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = (_DWORD *)*((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = v3;
  if ( v4 && (v5 = v4[2] - 1, (v4[2] = v5) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    if ( *((_QWORD *)this + 35) )
      goto LABEL_9;
  }
  else if ( *((_QWORD *)this + 35) )
  {
    goto LABEL_9;
  }
  Caver::ComponentOutletBase::Connect((Caver::ParticleEmitterComponent *)((char *)this + 264), this);
  if ( !*((_QWORD *)this + 35) )
  {
    Caver::ParticleSystem::InitWithMaxParticles(*((Caver::ParticleSystem **)this + 41), *((_DWORD *)this + 81));
    v6 = *((_QWORD *)this + 41);
    *(_QWORD *)(v6 + 148) = *(_QWORD *)((char *)this + 364);
    *(_DWORD *)(v6 + 156) = *((_DWORD *)this + 93);
    *(_BYTE *)(v6 + 145) = (float)((float)((float)(*((float *)this + 91) * *((float *)this + 91))
                                         + (float)(*((float *)this + 92) * *((float *)this + 92)))
                                 + (float)(*((float *)this + 93) * *((float *)this + 93))) > 0.0001;
  }
LABEL_9:
  if ( *((int *)this + 28) >= 1 )
  {
    v7 = 0;
    v8 = (char *)this + 120;
    while ( !(*(__int64 (__fastcall **)(char *, Caver::ParticleEmitterComponent *))(*(_QWORD *)v8 + 24LL))(v8, this) )
    {
LABEL_23:
      ++v7;
      v8 += 24;
      if ( v7 >= *((int *)this + 28) )
        goto LABEL_24;
    }
    v9 = (*(__int64 (__fastcall **)(char *, Caver::ParticleEmitterComponent *))(*(_QWORD *)v8 + 24LL))(v8, this);
    v10 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 35);
    v11 = (Caver::ParticleComponent *)v9;
    if ( (v10
       || (Caver::ComponentOutletBase::Connect((Caver::ParticleEmitterComponent *)((char *)this + 264), this),
           (v10 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 35)) != 0))
      && v10 != this )
    {
      v12 = (Caver::ParticleSystem *)*((_QWORD *)v10 + 41);
      v13 = (_QWORD *)*((_QWORD *)v10 + 42);
      if ( !v13 )
        goto LABEL_19;
    }
    else
    {
      v12 = (Caver::ParticleSystem *)*((_QWORD *)this + 41);
      v13 = (_QWORD *)*((_QWORD *)this + 42);
      if ( !v13 )
      {
LABEL_19:
        Caver::ParticleComponent::AddTypeToParticleSystem(v11, v12);
        if ( v13 )
        {
          v14 = v13[1] - 1LL;
          v13[1] = v14;
          if ( !v14 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
            v15 = v13[2] - 1LL;
            v13[2] = v15;
            if ( !v15 )
              (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
          }
        }
        goto LABEL_23;
      }
    }
    ++v13[1];
    goto LABEL_19;
  }
LABEL_24:
  if ( *((_QWORD *)this + 43) )
    Caver::ParticleEmitterComponent::PrepareEmitter();
  Caver::ParticleEmitterComponent::UpdateLocalTransform(this);
  *((_BYTE *)this + 260) = 1;
}

