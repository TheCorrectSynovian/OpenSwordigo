/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DAD60
 * Mangled: _ZN5Caver9HealthBar6UpdateEf
 * Demangled: Caver::HealthBar::Update(float)
 *
 * Callers: 0
 *
 * Callees: 38
 *   0x00000000001F35E0  Caver::SparkParticleEmitter::Update(float)
 *   0x00000000001F36E0  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *   0x00000000001F4450  Caver::HealthBar::AddAnimationToHeart(int,boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F67F0  Caver::ParticleEmitter::ParticleEmitter(void)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8910  Caver::GUIPropertyValue::ValueWithVector2(Caver::Vector2 const&)
 *   0x00000000001F8DA0  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *   0x00000000001F9630  Caver::GUIAnimation::Update(float)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FAFE0  Caver::HealthBar::UpdateSprite(void)
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FD9C0  std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FE460  Caver::ParticleSystem::Update(float)
 *   0x0000000000200C90  Caver::HealthBar::ShatterHeart(int)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203410  Caver::HealthBar::PopHeart(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 492
 *   insn=0x00000000003DAD7C string=0x00000000003DAD80 "V"
 *   insn=0x00000000003DAD88 string=0x00000000003DAD8C ""
 *   insn=0x00000000003DAD90 string=0x00000000003DAD94 "h"
 *   insn=0x00000000003DAD94 string=0x00000000003DAD98 "\t"
 *   insn=0x00000000003DAD98 string=0x00000000003DAD9C "?"
 *   insn=0x00000000003DADA0 string=0x00000000003DADA4 "`"
 *   insn=0x00000000003DADA8 string=0x00000000003DADAC "!!J"
 *   insn=0x00000000003DADA8 string=0x000000000058EA20 "33"
 *   insn=0x00000000003DADAC string=0x00000000003DADB0 "i"
 *   insn=0x00000000003DADB4 string=0x00000000003DADB8 "`"
 *   insn=0x00000000003DADBC string=0x00000000003DADC0 "M"
 *   insn=0x00000000003DADC0 string=0x00000000003DADC4 "i"
 *   insn=0x00000000003DADC0 string=0x00000000003DADC8 "J"
 *   insn=0x00000000003DADC4 string=0x00000000003DADF0 "("
 *   insn=0x00000000003DADC8 string=0x00000000003DADCC "A"
 *   insn=0x00000000003DADCC string=0x00000000003DADD0 "?"
 *   insn=0x00000000003DADD0 string=0x00000000003DADD4 "*"
 *   insn=0x00000000003DADDC string=0x00000000003DADE0 "Jy"
 *   insn=0x00000000003DADDC string=0x00000000003DB0F8 "`"
 *   insn=0x00000000003DADE0 string=0x00000000003DADE4 "*"
 *   insn=0x00000000003DADE4 string=0x00000000003DADE8 "_"
 *   insn=0x00000000003DADE8 string=0x00000000003DADEC "a"
 *   insn=0x00000000003DADF0 string=0x00000000003DADF4 "*\t"
 *   insn=0x00000000003DADF8 string=0x00000000003DADFC "I"
 *   insn=0x00000000003DADFC string=0x00000000003DAE00 ")y"
 *   insn=0x00000000003DAE00 string=0x00000000003DAE04 ""
 *   insn=0x00000000003DAE04 string=0x00000000003DAE08 "h"
 *   insn=0x00000000003DAE0C string=0x00000000003DAE10 "H"
 *   insn=0x00000000003DAE10 string=0x00000000001FDF30 "0'"
 *   insn=0x00000000003DAE18 string=0x0000000000592988 "lowhealth"
 *   insn=0x00000000003DAE24 string=0x00000000003DAE28 "d/"
 *   insn=0x00000000003DAE38 string=0x00000000003DAE3C "Ai"
 *   insn=0x00000000003DAE3C string=0x00000000001F5340 "P'"
 *   insn=0x00000000003DAE44 string=0x00000000003DAE48 "@"
 *   insn=0x00000000003DAE48 string=0x00000000003DAE4C ""
 *   insn=0x00000000003DAE4C string=0x00000000003DAE50 ""
 *   insn=0x00000000003DAE54 string=0x00000000003DAE58 ""
 *   insn=0x00000000003DAE58 string=0x00000000003DAE5C ""
 *   insn=0x00000000003DAE64 string=0x00000000003DAE68 "I"
 *   insn=0x00000000003DAE68 string=0x00000000003DAE6C ")"
 *   insn=0x00000000003DAE78 string=0x00000000003DB378 "I"
 *   insn=0x00000000003DAE80 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003DAE84 string=0x00000000003DAE88 ":g"
 *   insn=0x00000000003DAE88 string=0x00000000001F4B70 "P'"
 *   insn=0x00000000003DAE98 string=0x00000000003DAE9C "U"
 *   insn=0x00000000003DAE9C string=0x00000000001FABF0 "0'"
 *   insn=0x00000000003DAECC string=0x00000000001F8910 "0'"
 *   insn=0x00000000003DAEDC string=0x00000000003DAEE0 "\n"
 *   insn=0x00000000003DAEE0 string=0x00000000003DAEE4 "J"
 *   insn=0x00000000003DAEE4 string=0x00000000003DAEE8 "\n"
 *   insn=0x00000000003DAEF0 string=0x00000000003DAEF4 "4"
 *   insn=0x00000000003DAEF8 string=0x00000000003DAEFC ""
 *   insn=0x00000000003DAF08 string=0x00000000003DAF0C "\t@"
 *   insn=0x00000000003DAF18 string=0x00000000003DAF1C ""
 *   insn=0x00000000003DAF28 string=0x00000000003DAF2C "@"
 *   insn=0x00000000003DAF38 string=0x00000000003DAF3C "4"
 *   insn=0x00000000003DAF40 string=0x00000000003DAF44 ""
 *   insn=0x00000000003DAF50 string=0x00000000003DAF54 "\t@"
 *   insn=0x00000000003DAF60 string=0x00000000003DAF64 ""
 *   insn=0x00000000003DAF70 string=0x00000000003DAF74 "@"
 *   insn=0x00000000003DAF90 string=0x00000000003DAF94 "_v"
 *   insn=0x00000000003DAFA4 string=0x00000000003DAFA8 "\n"
 *   insn=0x00000000003DAFA8 string=0x00000000003DAFAC "J"
 *   insn=0x00000000003DAFAC string=0x00000000003DAFB0 "\n"
 *   insn=0x00000000003DAFB8 string=0x00000000003DAFBC "4"
 *   insn=0x00000000003DAFC0 string=0x00000000003DAFC4 ""
 *   insn=0x00000000003DAFD0 string=0x00000000003DAFD4 "\t@"
 *   insn=0x00000000003DAFE0 string=0x00000000003DAFE4 ""
 *   insn=0x00000000003DAFF0 string=0x00000000003DAFF4 "@"
 *   insn=0x00000000003DB000 string=0x00000000003DB004 "4"
 *   insn=0x00000000003DB008 string=0x00000000003DB00C ""
 *   insn=0x00000000003DB018 string=0x00000000003DB01C "\t@"
 *   insn=0x00000000003DB028 string=0x00000000003DB02C ""
 *   insn=0x00000000003DB038 string=0x00000000003DB03C "@"
 *   insn=0x00000000003DB04C string=0x0000000000592958 "fff?"
 *   insn=0x00000000003DB050 string=0x00000000003DB054 "!"
 *   insn=0x00000000003DB070 string=0x00000000001FB0E0 "0'"
 *   insn=0x00000000003DB08C string=0x00000000003DB090 "\t]"
 *   insn=0x00000000003DB0A0 string=0x00000000001F4450 "P'"
 *   insn=0x00000000003DB0A4 string=0x00000000003DB0A8 "4"
 *   insn=0x00000000003DB0A8 string=0x00000000003DB0EC "h"
 *   insn=0x00000000003DB0AC string=0x00000000003DB0B0 ""
 *   insn=0x00000000003DB0C0 string=0x00000000003DB0C4 "\t@"
 *   insn=0x00000000003DB0CC string=0x00000000003DB0D0 ""
 *   insn=0x00000000003DB0E0 string=0x00000000003DB0E4 "@"
 *   insn=0x00000000003DB0F8 string=0x00000000003DB0FC "t"
 *   insn=0x00000000003DB104 string=0x00000000003DB108 "`"
 *   insn=0x00000000003DB108 string=0x00000000003DB10C "a"
 *   insn=0x00000000003DB114 string=0x00000000003DB154 "h&Y"
 *   insn=0x00000000003DB118 string=0x00000000003DB14C "h"
 *   insn=0x00000000003DB120 string=0x00000000003DB294 "i"
 *   insn=0x00000000003DB138 string=0x00000000003DB13C "h"
 *   insn=0x00000000003DB154 string=0x00000000003DB158 "?"
 *   insn=0x00000000003DB15C string=0x00000000003DB24C "y"
 *   insn=0x00000000003DB164 string=0x00000000003DB168 ""
 *   insn=0x00000000003DB174 string=0x00000000003DB178 ""
 *   insn=0x00000000003DB180 string=0x00000000003DB1F0 "4"
 *   insn=0x00000000003DB188 string=0x00000000003DB18C ")y"
 *   insn=0x00000000003DB18C string=0x00000000001F9630 "0'"
 *   insn=0x00000000003DB194 string=0x00000000003DB198 "h"
 *   insn=0x00000000003DB198 string=0x00000000003DB19C ""
 *   insn=0x00000000003DB1A4 string=0x00000000003DB1A8 "5"
 *   insn=0x00000000003DB1AC string=0x00000000003DB1B0 ""
 *   insn=0x00000000003DB1BC string=0x00000000003DB1C0 "\t@"
 *   insn=0x00000000003DB1CC string=0x00000000003DB1D0 ""
 *   insn=0x00000000003DB1DC string=0x00000000003DB1E0 "@"
 *   insn=0x00000000003DB1F0 string=0x00000000003DB234 "h&Y"
 *   insn=0x00000000003DB1F4 string=0x00000000003DB1F8 ""
 *   insn=0x00000000003DB208 string=0x00000000003DB20C "\t@"
 *   insn=0x00000000003DB214 string=0x00000000003DB218 ""
 *   insn=0x00000000003DB228 string=0x00000000003DB22C "@"
 *   insn=0x00000000003DB23C string=0x00000000003DB240 ")"
 *   insn=0x00000000003DB24C string=0x00000000003DB258 "`"
 *   insn=0x00000000003DB250 string=0x00000000003DB254 "c"
 *   insn=0x00000000003DB254 string=0x00000000001FAFE0 "0'"
 *   insn=0x00000000003DB26C string=0x00000000003DB270 "a"
 *   insn=0x00000000003DB294 string=0x00000000003DB298 "!"
 *   insn=0x00000000003DB2A8 string=0x00000000003DB2AC "J"
 *   insn=0x00000000003DB2B0 string=0x00000000003DB2B4 "t"
 *   insn=0x00000000003DB2B8 string=0x00000000003DB2BC "t"
 *   insn=0x00000000003DB2C4 string=0x00000000003DB2C8 ""
 *   insn=0x00000000003DB2C8 string=0x00000000003DB2CC "\t"
 *   insn=0x00000000003DB2CC string=0x00000000003DB2D0 "?"
 *   insn=0x00000000003DB2D0 string=0x00000000003DB2D4 "h"
 *   insn=0x00000000003DB2D4 string=0x00000000003DB2D8 ""
 *   insn=0x00000000003DB2E0 string=0x00000000003DB2E4 "K"
 *   insn=0x00000000003DB2F0 string=0x0000000000592992 "heart_get"
 *   insn=0x00000000003DB2FC string=0x00000000003DB300 ".."
 *   insn=0x00000000003DB310 string=0x00000000003DB314 "h"
 *   insn=0x00000000003DB31C string=0x00000000003DB320 "@"
 *   insn=0x00000000003DB320 string=0x00000000003DB324 ""
 *   insn=0x00000000003DB324 string=0x00000000003DB328 ""
 *   insn=0x00000000003DB32C string=0x00000000003DB330 ""
 *   insn=0x00000000003DB330 string=0x00000000003DB334 ""
 *   insn=0x00000000003DB33C string=0x00000000003DB340 "I"
 *   insn=0x00000000003DB340 string=0x00000000003DB344 ")"
 *   insn=0x00000000003DB350 string=0x00000000003DB354 "I"
 *   insn=0x00000000003DB354 string=0x00000000003DB358 ")=G"
 *   insn=0x00000000003DB358 string=0x00000000003DB35C "!"
 *   insn=0x00000000003DB360 string=0x00000000003DB364 "\t"
 *   insn=0x00000000003DB360 string=0x00000000003DB3BC "\t"
 *   insn=0x00000000003DB364 string=0x00000000003DB368 "*"
 *   insn=0x00000000003DB368 string=0x00000000003DB36C "\n"
 *   insn=0x00000000003DB374 string=0x00000000003DB3C8 "?"
 *   insn=0x00000000003DB378 string=0x00000000003DB37C ")=G"
 *   insn=0x00000000003DB37C string=0x00000000003DB380 "!"
 *   insn=0x00000000003DB384 string=0x00000000003DB388 "\t"
 *   insn=0x00000000003DB384 string=0x00000000003DB39C "\t"
 *   insn=0x00000000003DB388 string=0x00000000003DB38C "*"
 *   insn=0x00000000003DB38C string=0x00000000003DB390 "\n"
 *   insn=0x00000000003DB398 string=0x00000000003DB3A8 "?"
 *   insn=0x00000000003DB39C string=0x00000000003DB3A0 "*"
 *   insn=0x00000000003DB3A0 string=0x00000000003DB3A4 "\n"
 *   insn=0x00000000003DB3BC string=0x00000000003DB3C0 "*"
 *   insn=0x00000000003DB3C0 string=0x00000000003DB3C4 "\n"
 *   insn=0x00000000003DB3C8 string=0x00000000003DB3CC ","
 *   insn=0x00000000003DB3D4 string=0x00000000003DB3D8 "N"
 *   insn=0x00000000003DB3DC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003DB3E4 string=0x00000000003DB3E8 "J"
 *   insn=0x00000000003DB3E8 string=0x00000000003DB3EC "J"
 *   insn=0x00000000003DB3F0 string=0x00000000003DB3F4 "(a"
 *   insn=0x00000000003DB3FC string=0x00000000003DB400 "J"
 *   insn=0x00000000003DB400 string=0x00000000003DB404 "J=G"
 *   insn=0x00000000003DB404 string=0x00000000003DB408 ")!"
 *   insn=0x00000000003DB40C string=0x00000000003DB410 "*"
 *   insn=0x00000000003DB40C string=0x00000000003DB53C "*"
 *   insn=0x00000000003DB410 string=0x00000000003DB414 "K"
 *   insn=0x00000000003DB414 string=0x00000000003DB418 "+"
 *   insn=0x00000000003DB41C string=0x00000000003DB420 "@"
 *   insn=0x00000000003DB420 string=0x00000000003DB520 "_"
 *   insn=0x00000000003DB430 string=0x00000000003DB434 ""
 *   insn=0x00000000003DB440 string=0x00000000003DB444 "\t@"
 *   insn=0x00000000003DB450 string=0x00000000003DB454 ""
 *   insn=0x00000000003DB460 string=0x00000000003DB464 "@"
 *   insn=0x00000000003DB46C string=0x00000000003DB470 ";"
 *   insn=0x00000000003DB480 string=0x00000000003DB484 ""
 *   insn=0x00000000003DB490 string=0x00000000003DB494 "\t@"
 *   insn=0x00000000003DB4A0 string=0x00000000003DB4A4 ""
 *   insn=0x00000000003DB4B0 string=0x00000000003DB4B4 "@"
 *   insn=0x00000000003DB4BC string=0x00000000003DB4C0 "'"
 *   insn=0x00000000003DB4D0 string=0x00000000003DB4D4 "wo"
 *   insn=0x00000000003DB4D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DB4E4 string=0x00000000003DB4E8 "J"
 *   insn=0x00000000003DB4E8 string=0x00000000003DB4EC "J"
 *   insn=0x00000000003DB4F0 string=0x00000000003DB4F4 "(a"
 *   insn=0x00000000003DB4FC string=0x00000000003DB500 "J"
 *   insn=0x00000000003DB500 string=0x00000000003DB504 "J=G"
 *   insn=0x00000000003DB504 string=0x00000000003DB508 ")!"
 *   insn=0x00000000003DB50C string=0x00000000003DB510 "*"
 *   insn=0x00000000003DB510 string=0x00000000003DB514 "K"
 *   insn=0x00000000003DB514 string=0x00000000003DB518 "+"
 *   insn=0x00000000003DB53C string=0x00000000003DB540 "K"
 *   insn=0x00000000003DB540 string=0x00000000003DB544 "+"
 *   insn=0x00000000003DB544 string=0x00000000003DB548 "_"
 *   insn=0x00000000003DB54C string=0x00000000003DB550 "+"
 *   insn=0x00000000003DB564 string=0x00000000003DB568 ""
 *   insn=0x00000000003DB56C string=0x00000000003DB570 "a"
 *   insn=0x00000000003DB574 string=0x00000000003DB578 "\t@"
 *   insn=0x00000000003DB584 string=0x00000000003DB588 ""
 *   insn=0x00000000003DB58C string=0x00000000003DB590 "a"
 *   insn=0x00000000003DB594 string=0x00000000003DB598 "@"
 *   insn=0x00000000003DB5B4 string=0x00000000003DB5B8 "4"
 *   insn=0x00000000003DB5BC string=0x00000000003DB5C0 ""
 *   insn=0x00000000003DB5CC string=0x00000000003DB5D0 "\t@"
 *   insn=0x00000000003DB5DC string=0x00000000003DB5E0 ""
 *   insn=0x00000000003DB5EC string=0x00000000003DB5F0 "@"
 *   insn=0x00000000003DB600 string=0x00000000003DB604 "R"
 *   insn=0x00000000003DB618 string=0x00000000003DB61C "V"
 *   insn=0x00000000003DB64C string=0x00000000003DB650 "I"
 *   insn=0x00000000003DB650 string=0x00000000003DB654 ")"
 *   insn=0x00000000003DB660 string=0x00000000003DB664 "(A"
 *   insn=0x00000000003DB668 string=0x00000000003DB66C ""
 *   insn=0x00000000003DB690 string=0x00000000003DB694 ")"
 *   insn=0x00000000003DB698 string=0x00000000003DB69C "j"
 *   insn=0x00000000003DB69C string=0x00000000003DB6A0 "h"
 *   insn=0x00000000003DB6A0 string=0x00000000003DB6A4 "!"
 *   insn=0x00000000003DB6A8 string=0x00000000003DB6AC "\t@"
 *   insn=0x00000000003DB6B8 string=0x00000000003DB6BC ""
 *   insn=0x00000000003DB6C0 string=0x00000000003DB6C4 "!"
 *   insn=0x00000000003DB6C8 string=0x00000000003DB6CC "@"
 *   insn=0x00000000003DB6DC string=0x00000000003DB6E0 "i"
 *   insn=0x00000000003DB6E0 string=0x00000000003DB6E4 "h"
 *   insn=0x00000000003DB6E8 string=0x00000000003DB6EC "3"
 *   insn=0x00000000003DB6EC string=0x00000000003DB6F0 "h"
 *   insn=0x00000000003DB6F0 string=0x00000000003DB6F4 ""
 *   insn=0x00000000003DB6F4 string=0x00000000003DB6F8 "h"
 *   insn=0x00000000003DB6FC string=0x00000000003DB700 "h"
 *   insn=0x00000000003DB704 string=0x00000000003DB708 "\t@"
 *   insn=0x00000000003DB70C string=0x00000000003DB710 "h\n@"
 *   insn=0x00000000003DB710 string=0x00000000003DB714 ""
 *   insn=0x00000000003DB714 string=0x00000000003DB718 "h\n"
 *   insn=0x00000000003DB71C string=0x00000000003DB720 "h"
 *   insn=0x00000000003DB724 string=0x00000000003DB728 "@"
 *   insn=0x00000000003DB75C string=0x00000000003DB760 "4"
 *   insn=0x00000000003DB764 string=0x00000000003DB768 ""
 *   insn=0x00000000003DB774 string=0x00000000003DB778 "\t@"
 *   insn=0x00000000003DB784 string=0x00000000003DB788 ""
 *   insn=0x00000000003DB794 string=0x00000000003DB798 "@"
 *   insn=0x00000000003DB7A4 string=0x00000000003DB7A8 "G"
 *   insn=0x00000000003DB7B0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003DB7C0 string=0x00000000003DB7C4 "s"
 *   insn=0x00000000003DB7C4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003DB7EC string=0x00000000003DB7F0 "X"
 *   insn=0x00000000003DB7F0 string=0x00000000003DB7F4 ""
 *   insn=0x00000000003DB7F8 string=0x00000000003DB7FC "9|@"
 *   insn=0x00000000003DB810 string=0x00000000003DB814 "*"
 *   insn=0x00000000003DB814 string=0x00000000003DB818 "_"
 *   insn=0x00000000003DB81C string=0x00000000003DB820 ")"
 *   insn=0x00000000003DB820 string=0x00000000003DB824 """
 *   insn=0x00000000003DB82C string=0x00000000003DB844 "b"
 *   insn=0x00000000003DB838 string=0x00000000003DB83C "a"
 *   insn=0x00000000003DB83C string=0x00000000001FD9C0 "0'"
 *   insn=0x00000000003DB848 string=0x00000000003DB84C "_"
 *   insn=0x00000000003DB854 string=0x00000000003DB858 "w@"
 *   insn=0x00000000003DB858 string=0x00000000003DB85C "7"
 *   insn=0x00000000003DB85C string=0x00000000003DB8A0 "{C"
 *   insn=0x00000000003DB860 string=0x00000000003DB864 ""
 *   insn=0x00000000003DB870 string=0x00000000003DB874 "\t@"
 *   insn=0x00000000003DB880 string=0x00000000003DB884 ""
 *   insn=0x00000000003DB890 string=0x00000000003DB894 "@"
 *   insn=0x00000000003DB8B0 string=0x00000000003DB8B4 "5"
 *   insn=0x00000000003DB8B8 string=0x00000000003DB8BC ""
 *   insn=0x00000000003DB8CC string=0x00000000003DB8D0 "\t@"
 *   insn=0x00000000003DB8D8 string=0x00000000003DB8DC ""
 *   insn=0x00000000003DB8EC string=0x00000000003DB8F0 "@"
 *   insn=0x00000000003DB8F8 string=0x00000000003DB8FC "j"@"
 *   insn=0x00000000003DB8FC string=0x00000000003DB900 ")"
 *   insn=0x00000000003DB904 string=0x00000000003DB908 ""
 *   insn=0x00000000003DB904 string=0x00000000003DB914 "3"
 *   insn=0x00000000003DB908 string=0x00000000003DB90C "k"
 *   insn=0x00000000003DB90C string=0x00000000003DB910 ""
 *   insn=0x00000000003DB914 string=0x00000000003DB918 "*!"
 *   insn=0x00000000003DB918 string=0x00000000003DB91C "3"
 *   insn=0x00000000003DB91C string=0x00000000003DB920 "h"
 *   insn=0x00000000003DB91C string=0x00000000003DB960 ""
 *   insn=0x00000000003DB920 string=0x00000000003DB924 ""
 *   insn=0x00000000003DB924 string=0x00000000003DB928 "h"
 *   insn=0x00000000003DB92C string=0x00000000003DB930 "h"
 *   insn=0x00000000003DB934 string=0x00000000003DB938 "\t@"
 *   insn=0x00000000003DB93C string=0x00000000003DB940 "h\n@"
 *   insn=0x00000000003DB940 string=0x00000000003DB944 ""
 *   insn=0x00000000003DB944 string=0x00000000003DB948 "h\n"
 *   insn=0x00000000003DB94C string=0x00000000003DB950 "h"
 *   insn=0x00000000003DB954 string=0x00000000003DB958 "@"
 *   insn=0x00000000003DB968 string=0x00000000003DB96C "!"
 *   insn=0x00000000003DB96C string=0x00000000003DB990 "Pj"
 *   insn=0x00000000003DB99C string=0x00000000003DB9A0 "4"
 *   insn=0x00000000003DB9A4 string=0x00000000003DB9A8 ""
 *   insn=0x00000000003DB9B4 string=0x00000000003DB9B8 "\t@"
 *   insn=0x00000000003DB9C4 string=0x00000000003DB9C8 ""
 *   insn=0x00000000003DB9D4 string=0x00000000003DB9D8 "@"
 *   insn=0x00000000003DB9E8 string=0x00000000003DB9EC "X"
 *   insn=0x00000000003DBA04 string=0x00000000003DBA08 "W"
 *   insn=0x00000000003DBA20 string=0x00000000003DBA24 "sk"
 *   insn=0x00000000003DBA24 string=0x00000000003DBA28 "H"
 *   insn=0x00000000003DBA24 string=0x00000000001F67F0 "0'"
 *   insn=0x00000000003DBA28 string=0x00000000003DBA2C "IE"
 *   insn=0x00000000003DBA2C string=0x00000000003DBA30 "A"
 *   insn=0x00000000003DBA34 string=0x00000000003DBA38 "hVX"
 *   insn=0x00000000003DBA44 string=0x00000000003DBA48 "J\t"
 *   insn=0x00000000003DBA50 string=0x00000000003DBA58 "("
 *   insn=0x00000000003DBA60 string=0x00000000003DBA64 "6"
 *   insn=0x00000000003DBA64 string=0x00000000003DBAA8 "5"
 *   insn=0x00000000003DBA68 string=0x00000000003DBA6C ""
 *   insn=0x00000000003DBA78 string=0x00000000003DBA7C "\t@"
 *   insn=0x00000000003DBA88 string=0x00000000003DBA8C ""
 *   insn=0x00000000003DBA98 string=0x00000000003DBA9C "@"
 *   insn=0x00000000003DBAA8 string=0x00000000003DBAEC "H"
 *   insn=0x00000000003DBAAC string=0x00000000003DBAB0 ""
 *   insn=0x00000000003DBABC string=0x00000000003DBAC0 "\t@"
 *   insn=0x00000000003DBACC string=0x00000000003DBAD0 ""
 *   insn=0x00000000003DBADC string=0x00000000003DBAE0 "@"
 *   insn=0x00000000003DBAEC string=0x00000000003DBAF0 "`"
 *   insn=0x00000000003DBAEC string=0x000000000058493C "fff?"
 *   insn=0x00000000003DBAF4 string=0x00000000003DBAF8 "h"D9"
 *   insn=0x00000000003DBAFC string=0x00000000003DBB00 "("
 *   insn=0x00000000003DBB00 string=0x00000000003DBB04 "h"
 *   insn=0x00000000003DBB04 string=0x00000000003DBB08 "b"
 *   insn=0x00000000003DBB08 string=0x00000000003DBB0C "c"
 *   insn=0x00000000003DBB14 string=0x00000000003DBB18 ""
 *   insn=0x00000000003DBB18 string=0x00000000003DBB1C "}"
 *   insn=0x00000000003DBB1C string=0x00000000003DBB20 ""
 *   insn=0x00000000003DBB24 string=0x00000000003DBB28 "%%"
 *   insn=0x00000000003DBB28 string=0x00000000003DBB2C "B$"
 *   insn=0x00000000003DBB30 string=0x00000000003DBB34 "b(""
 *   insn=0x00000000003DBB38 string=0x00000000003DBB3C "B8#"
 *   insn=0x00000000003DBB48 string=0x00000000003DBB4C "!#"
 *   insn=0x00000000003DBB4C string=0x00000000003DBB50 "!(""
 *   insn=0x00000000003DBB50 string=0x00000000003DBB54 "b"A"
 *   insn=0x00000000003DBB54 string=0x00000000003DBB58 "d"
 *   insn=0x00000000003DBB64 string=0x00000000003DBB68 "B#"
 *   insn=0x00000000003DBB70 string=0x00000000003DBB74 "!@&"
 *   insn=0x00000000003DBB74 string=0x00000000003DBB78 " ( "
 *   insn=0x00000000003DBB7C string=0x00000000003DBB80 "!"
 *   insn=0x00000000003DBB90 string=0x00000000003DBB94 "`"
 *   insn=0x00000000003DBB94 string=0x00000000001F3BC0 "P'"
 *   insn=0x00000000003DBBA4 string=0x00000000003DBBA8 "\t$"
 *   insn=0x00000000003DBBA8 string=0x00000000003DBBAC "\t\t"
 *   insn=0x00000000003DBBB0 string=0x00000000003DBC2C "\t$"
 *   insn=0x00000000003DBBB4 string=0x00000000003DBBB8 "@"
 *   insn=0x00000000003DBBCC string=0x00000000003DBBD0 "hr"
 *   insn=0x00000000003DBBD0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000003DBBD8 string=0x00000000003DBBDC "h"
 *   insn=0x00000000003DBBE4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003DBBF0 string=0x00000000003DBBF4 ""
 *   insn=0x00000000003DBC08 string=0x00000000003DBC0C "s"
 *   insn=0x00000000003DBC18 string=0x00000000003DBC20 "\t$"
 *   insn=0x00000000003DBC20 string=0x00000000003DBC24 "\t\t"
 *   insn=0x00000000003DBC24 string=0x00000000003DBC28 "("
 *   insn=0x00000000003DBC2C string=0x00000000003DBC30 "\t"
 *   insn=0x00000000003DBC30 string=0x00000000003DBC34 "\t7"
 *   insn=0x00000000003DBC34 string=0x00000000003DBC38 "\t"
 *   insn=0x00000000003DBC38 string=0x00000000003DBC3C "I3"
 *   insn=0x00000000003DBC3C string=0x00000000003DBC44 "\t"
 *   insn=0x00000000003DBC4C string=0x00000000003DBC50 "d^"
 *   insn=0x00000000003DBC50 string=0x00000000003DBC54 "H"
 *   insn=0x00000000003DBC50 string=0x00000000001F35E0 "P'"
 *   insn=0x00000000003DBC54 string=0x00000000003DBC58 ""
 *   insn=0x00000000003DBC5C string=0x00000000003DBC60 "A"
 *   insn=0x00000000003DBC64 string=0x00000000003DBC68 "@"
 *   insn=0x00000000003DBC70 string=0x00000000003DBC74 "@"
 *   insn=0x00000000003DBC7C string=0x00000000003DBC80 "3"
 *   insn=0x00000000003DBC80 string=0x00000000003DBC84 "h"
 *   insn=0x00000000003DBC84 string=0x00000000003DBC88 ""
 *   insn=0x00000000003DBC88 string=0x00000000003DBC8C "h"
 *   insn=0x00000000003DBC90 string=0x00000000003DBC94 "h"
 *   insn=0x00000000003DBC98 string=0x00000000003DBC9C "\t@"
 *   insn=0x00000000003DBCA0 string=0x00000000003DBCA4 "h\n@"
 *   insn=0x00000000003DBCA4 string=0x00000000003DBCA8 ""
 *   insn=0x00000000003DBCA8 string=0x00000000003DBCAC "h\n"
 *   insn=0x00000000003DBCB0 string=0x00000000003DBCB4 "h"
 *   insn=0x00000000003DBCB8 string=0x00000000003DBCBC "@"
 *   insn=0x00000000003DBCD0 string=0x00000000003DBE4C "!i"
 *   insn=0x00000000003DBCEC string=0x00000000003DBCF0 "@"
 *   insn=0x00000000003DBD10 string=0x00000000003DBD14 "h"
 *   insn=0x00000000003DBD28 string=0x00000000003DBD2C ""
 *   insn=0x00000000003DBD40 string=0x00000000003DBD44 "s"
 *   insn=0x00000000003DBD50 string=0x00000000003DBD58 "\t$"
 *   insn=0x00000000003DBD58 string=0x00000000003DBD5C "\t"
 *   insn=0x00000000003DBD64 string=0x00000000003DBD68 "@"
 *   insn=0x00000000003DBD88 string=0x00000000003DBD8C "h"
 *   insn=0x00000000003DBD90 string=0x00000000003DBD94 "sd"
 *   insn=0x00000000003DBDA0 string=0x00000000003DBDA4 ""
 *   insn=0x00000000003DBDB8 string=0x00000000003DBDBC "s"
 *   insn=0x00000000003DBDC8 string=0x00000000003DBDD0 "\t7"
 *   insn=0x00000000003DBDD0 string=0x00000000003DBDD4 "\t"
 *   insn=0x00000000003DBDD4 string=0x00000000003DBDD8 "("
 *   insn=0x00000000003DBDDC string=0x00000000003DBDE0 "@"
 *   insn=0x00000000003DBE00 string=0x00000000003DBE04 "h"
 *   insn=0x00000000003DBE08 string=0x00000000003DBE0C "Ud"
 *   insn=0x00000000003DBE18 string=0x00000000003DBE1C ""
 *   insn=0x00000000003DBE30 string=0x00000000003DBE34 "s"
 *   insn=0x00000000003DBE44 string=0x00000000003DBE48 "}"
 *   insn=0x00000000003DBE54 string=0x00000000003DBEB4 "H"
 *   insn=0x00000000003DBE58 string=0x00000000003DBE5C ""
 *   insn=0x00000000003DBE68 string=0x00000000003DBE6C "\t@"
 *   insn=0x00000000003DBE78 string=0x00000000003DBE7C ""
 *   insn=0x00000000003DBE88 string=0x00000000003DBE8C "@"
 *   insn=0x00000000003DBE94 string=0x00000000003DBE98 ""
 *   insn=0x00000000003DBEB4 string=0x00000000003DBEB8 ""
 *   insn=0x00000000003DBEBC string=0x00000000003DBEC0 "A"
 *   insn=0x00000000003DBEC8 string=0x00000000003DBEE0 " d"
 *   insn=0x00000000003DBEE4 string=0x00000000003DBEE8 "`"
 *   insn=0x00000000003DBEF0 string=0x00000000003DBEF4 "4"
 *   insn=0x00000000003DBEF8 string=0x00000000003DBEFC ""
 *   insn=0x00000000003DBF08 string=0x00000000003DBF0C "\t@"
 *   insn=0x00000000003DBF18 string=0x00000000003DBF1C ""
 *   insn=0x00000000003DBF28 string=0x00000000003DBF2C "@"
 *   insn=0x00000000003DBF38 string=0x00000000003DBF3C "b"
 *   insn=0x00000000003DBF58 string=0x00000000003DBF5C "V"
 *   insn=0x00000000003DBF9C string=0x00000000003DBFA0 "l"
 *   insn=0x00000000003DBFBC string=0x00000000003DBFC0 "Tr"
 *   insn=0x00000000003DBFD0 string=0x00000000003DBFD4 "\n"
 *   insn=0x00000000003DBFD4 string=0x00000000003DBFD8 "J"
 *   insn=0x00000000003DBFD8 string=0x00000000003DBFDC "\n"
 *   insn=0x00000000003DBFE4 string=0x00000000003DBFE8 "5"
 *   insn=0x00000000003DBFEC string=0x00000000003DBFF0 ""
 *   insn=0x00000000003DBFFC string=0x00000000003DC000 "\t@"
 *   insn=0x00000000003DC00C string=0x00000000003DC010 ""
 *   insn=0x00000000003DC01C string=0x00000000003DC020 "@"
 *   insn=0x00000000003DC02C string=0x00000000003DC030 "5"
 *   insn=0x00000000003DC034 string=0x00000000003DC038 ""
 *   insn=0x00000000003DC044 string=0x00000000003DC048 "\t@"
 *   insn=0x00000000003DC054 string=0x00000000003DC058 ""
 *   insn=0x00000000003DC064 string=0x00000000003DC068 "@"
 *   insn=0x00000000003DC084 string=0x00000000003DC088 ""r"
 *   insn=0x00000000003DC098 string=0x00000000003DC09C "\n"
 *   insn=0x00000000003DC09C string=0x00000000003DC0A0 "J"
 *   insn=0x00000000003DC0A0 string=0x00000000003DC0A4 "\n"
 *   insn=0x00000000003DC0AC string=0x00000000003DC0B0 "5"
 *   insn=0x00000000003DC0B4 string=0x00000000003DC0B8 ""
 *   insn=0x00000000003DC0C4 string=0x00000000003DC0C8 "\t@"
 *   insn=0x00000000003DC0D4 string=0x00000000003DC0D8 ""
 *   insn=0x00000000003DC0E4 string=0x00000000003DC0E8 "@"
 *   insn=0x00000000003DC0F4 string=0x00000000003DC0F8 "5"
 *   insn=0x00000000003DC0FC string=0x00000000003DC100 ""
 *   insn=0x00000000003DC10C string=0x00000000003DC110 "\t@"
 *   insn=0x00000000003DC11C string=0x00000000003DC120 ""
 *   insn=0x00000000003DC12C string=0x00000000003DC130 "@"
 *   insn=0x00000000003DC144 string=0x00000000003DC148 "!MA"
 *   insn=0x00000000003DC180 string=0x00000000003DC184 "\t]"
 *   insn=0x00000000003DC198 string=0x00000000003DC19C "3"
 *   insn=0x00000000003DC19C string=0x00000000003DC1A0 "h"
 *   insn=0x00000000003DC1A0 string=0x00000000003DC1A4 ""
 *   insn=0x00000000003DC1A4 string=0x00000000003DC1A8 "h"
 *   insn=0x00000000003DC1AC string=0x00000000003DC1B0 "h"
 *   insn=0x00000000003DC1B4 string=0x00000000003DC1B8 "\t@"
 *   insn=0x00000000003DC1BC string=0x00000000003DC1C0 "h\n@"
 *   insn=0x00000000003DC1C0 string=0x00000000003DC1C4 ""
 *   insn=0x00000000003DC1C4 string=0x00000000003DC1C8 "h\n"
 *   insn=0x00000000003DC1CC string=0x00000000003DC1D0 "h"
 *   insn=0x00000000003DC1D4 string=0x00000000003DC1D8 "@"
 *   insn=0x00000000003DC1EC string=0x00000000003DC208 "2h"
 *   insn=0x00000000003DC218 string=0x00000000003DC21C ""
 *   insn=0x00000000003DC220 string=0x00000000003DC224 "a"
 *   insn=0x00000000003DC228 string=0x00000000003DC22C "\t@"
 *   insn=0x00000000003DC238 string=0x00000000003DC23C ""
 *   insn=0x00000000003DC240 string=0x00000000003DC244 "a"
 *   insn=0x00000000003DC248 string=0x00000000003DC24C "@"
 *   insn=0x00000000003DC260 string=0x00000000003DC264 "t"
 *   insn=0x00000000003DC268 string=0x00000000003DC26C ""
 *   insn=0x00000000003DC278 string=0x00000000003DC27C "\t@"
 *   insn=0x00000000003DC288 string=0x00000000003DC28C ""
 *   insn=0x00000000003DC298 string=0x00000000003DC29C "@"
 *   insn=0x00000000003DC2A4 string=0x00000000003DC2A8 "\n"
 *   insn=0x00000000003DC2D0 string=0x00000000003DC2D4 "4"
 *   insn=0x00000000003DC2D8 string=0x00000000003DC2DC ""
 *   insn=0x00000000003DC2E8 string=0x00000000003DC2EC "\t@"
 *   insn=0x00000000003DC2F8 string=0x00000000003DC2FC ""
 *   insn=0x00000000003DC308 string=0x00000000003DC30C "@"
 *   insn=0x00000000003DC318 string=0x00000000003DC31C "j"
 *   insn=0x00000000003DC31C string=0x00000000003DC320 ""
 *   insn=0x00000000003DC334 string=0x00000000003DC338 "U"
 *   insn=0x00000000003DC34C string=0x00000000003DC350 "h"
 *   insn=0x00000000003DC350 string=0x00000000003DC354 ""
 *   insn=0x00000000003DC360 string=0x00000000001F7210 "0'"
 *   insn=0x00000000003DC368 string=0x00000000003DC36C "9"
 *   insn=0x00000000003DC36C string=0x00000000001FC450 "0'"
 *   insn=0x00000000003DC370 string=0x00000000003DC374 "+]"
 *   insn=0x00000000003DC374 string=0x00000000001F3820 "P'"
 *   insn=0x00000000003DC380 string=0x00000000003DC384 ""
 *   insn=0x00000000003DC380 string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000003DC394 string=0x00000000003DC398 "`"
 *   insn=0x00000000003DC394 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000003DC3A0 string=0x00000000003DC3A4 "H"
 *   insn=0x00000000003DC3A0 string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000003DC3A4 string=0x00000000003DC3A8 "eB"
 *   insn=0x00000000003DC3A8 string=0x00000000003DC3AC "`"
 *   insn=0x00000000003DC3C4 string=0x00000000003DC3C8 "`"
 *   insn=0x00000000003DC3C4 string=0x00000000001F36E0 "P'"
 *   insn=0x00000000003DC3CC string=0x00000000003DC3D0 "tr"
 *   insn=0x00000000003DC3D0 string=0x00000000001F8DA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthBar::Update(Caver::HealthBar *this, float a2)
{
  int v4; // w8
  int v5; // w9
  float v6; // s0
  int v7; // w10
  int v8; // w8
  int v9; // w9
  __int64 v10; // x0
  int v11; // w8
  void *v12; // x0
  Caver::GUIAnimation *v13; // x20
  Caver::GUIAnimation *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  Caver::GUIAnimation *v23; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  _QWORD *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x8
  _QWORD *v34; // x20
  __int64 v35; // x8
  __int64 v36; // x8
  Caver::GUIAnimation *v37; // x20
  _QWORD *v38; // x20
  __int64 v39; // x8
  __int64 v40; // x8
  int v41; // w20
  float v42; // s0
  char v43; // w25
  __int64 v44; // x8
  __int64 v45; // x23
  unsigned __int64 v46; // x24
  __int64 v47; // x8
  _QWORD *v48; // x20
  Caver::GUIAnimation *v49; // x21
  _QWORD *v50; // x8
  _QWORD *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  Caver::AudioSystem *v57; // x0
  int v58; // w8
  void *v59; // x0
  unsigned int *v60; // x8
  int v61; // w9
  unsigned int *v62; // x8
  int v63; // w9
  _DWORD *v64; // [xsp+310h] [xbp-A0h]
  __int64 v65; // [xsp+318h] [xbp-98h] BYREF
  __int128 v66; // [xsp+320h] [xbp-90h] BYREF
  __int128 v67; // [xsp+330h] [xbp-80h]
  unsigned __int64 v68; // [xsp+348h] [xbp-68h] BYREF
  Caver::GUIAnimation *v69; // [xsp+350h] [xbp-60h]
  _QWORD *v70; // [xsp+358h] [xbp-58h]
  __int64 v71; // [xsp+360h] [xbp-50h]
  __int64 v72; // [xsp+368h] [xbp-48h]

  v72 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_DWORD *)this + 68);
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    *((_DWORD *)this + 106) = 0;
  }
  else
  {
    v5 = *((_DWORD *)this + 107);
    v6 = *((float *)this + 106) + a2;
    *((float *)this + 106) = v6;
    if ( v6 > 1.4 && (v5 & 1) == 0 || (v5 >= 0 ? (v7 = v5) : (v7 = v5 + 1), v6 > 0.2 && v5 - (v7 & 0xFFFFFFFE) == 1) )
    {
      v8 = v5 + 1;
      if ( v5 + 1 >= 0 )
        v9 = v5 + 1;
      else
        v9 = v5 + 2;
      *((_DWORD *)this + 107) = v8 - (v9 & 0xFFFFFFFE);
      *((_DWORD *)this + 106) = 0;
      Caver::AudioSystem::sharedSystem(this);
      sub_566BB8((int)&v66, "lowhealth");
      Caver::AudioSystem::PlaySoundEffectWithName();
      v10 = v71;
      if ( v71 )
      {
        v11 = *(_DWORD *)(v71 + 8) - 1;
        *(_DWORD *)(v71 + 8) = v11;
        if ( !v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      }
      v12 = (void *)(v66 - 24);
      if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
      {
        v62 = (unsigned int *)(v66 - 8);
        if ( &pthread_create )
        {
          do
            v63 = __ldaxr(v62);
          while ( __stlxr(v63 - 1, v62) );
        }
        else
        {
          v63 = (*v62)--;
        }
        if ( v63 <= 0 )
          operator delete(v12);
      }
      v13 = (Caver::GUIAnimation *)operator new(0xC0u);
      Caver::GUIAnimation::GUIAnimation(v13);
      v69 = v13;
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
      boost::detail::sp_enable_shared_from_this();
      v14 = v69;
      v68 = vdup_n_s32(0x3F666666u).n64_u64[0];
      Caver::GUIPropertyValue::ValueWithVector2();
      *((_DWORD *)v14 + 28) = v66;
      v16 = *((_QWORD *)&v66 + 1);
      v15 = v67;
      if ( (_QWORD)v67 )
        ++*(_QWORD *)(v67 + 8);
      v17 = (_QWORD *)*((_QWORD *)v14 + 16);
      *((_QWORD *)v14 + 15) = v16;
      *((_QWORD *)v14 + 16) = v15;
      if ( v17 )
      {
        v18 = v17[1] - 1LL;
        v17[1] = v18;
        if ( !v18 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
          v19 = v17[2] - 1LL;
          v17[2] = v19;
          if ( !v19 )
            (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
        }
      }
      v20 = (_QWORD *)v67;
      if ( (_QWORD)v67 )
      {
        v21 = *(_QWORD *)(v67 + 8) - 1LL;
        *(_QWORD *)(v67 + 8) = v21;
        if ( !v21 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
          v22 = v20[2] - 1LL;
          v20[2] = v22;
          if ( !v22 )
            (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
        }
      }
      v23 = v69;
      __asm { FMOV            V0.2S, #1.0 }
      v68 = _D0;
      Caver::GUIPropertyValue::ValueWithVector2();
      *((_DWORD *)v23 + 34) = v66;
      v30 = *((_QWORD *)&v66 + 1);
      v29 = v67;
      if ( (_QWORD)v67 )
        ++*(_QWORD *)(v67 + 8);
      v31 = (_QWORD *)*((_QWORD *)v23 + 19);
      *((_QWORD *)v23 + 18) = v30;
      *((_QWORD *)v23 + 19) = v29;
      if ( v31 )
      {
        v32 = v31[1] - 1LL;
        v31[1] = v32;
        if ( !v32 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
          v33 = v31[2] - 1LL;
          v31[2] = v33;
          if ( !v33 )
            (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
        }
      }
      v34 = (_QWORD *)v67;
      if ( (_QWORD)v67 )
      {
        v35 = *(_QWORD *)(v67 + 8) - 1LL;
        *(_QWORD *)(v67 + 8) = v35;
        if ( !v35 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
          v36 = v34[2] - 1LL;
          v34[2] = v36;
          if ( !v36 )
            (*(void (__fastcall **)(_QWORD *))(*v34 + 24LL))(v34);
        }
      }
      v37 = v69;
      v68 = 0x415000003E99999ALL;
      v65 = 0x3F8000003F666666LL;
      Caver::GUIAnimationCurve::GUIAnimationCurve(
        (Caver::GUIAnimationCurve *)&v66,
        (const Caver::Vector2 *)&v68,
        (const Caver::Vector2 *)&v65);
      *(_OWORD *)((char *)v37 + 52) = v66;
      *(_OWORD *)((char *)v37 + 68) = v67;
      *((_DWORD *)v69 + 23) = 1045220557;
      Caver::HealthBar::AddAnimationToHeart();
      v38 = v70;
      if ( v70 )
      {
        v39 = v70[1] - 1LL;
        v70[1] = v39;
        if ( !v39 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
          v40 = v38[2] - 1LL;
          v38[2] = v40;
          if ( !v40 )
            (*(void (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
        }
      }
      v4 = *((_DWORD *)this + 68);
    }
  }
  v41 = *((_DWORD *)this + 69);
  v42 = *((float *)this + 70) + a2;
  *((float *)this + 70) = v42;
  if ( v41 == v4 )
    goto LABEL_43;
  if ( v41 < 0 )
    goto LABEL_47;
  if ( v41 > v4 )
  {
    do
    {
      Caver::HealthBar::ShatterHeart(this);
      v4 = *((_DWORD *)this + 68);
      v41 -= 2;
    }
    while ( v41 > v4 );
LABEL_47:
    *((_DWORD *)this + 69) = v4;
    v43 = 1;
    goto LABEL_48;
  }
  v43 = 0;
  if ( v42 > 0.15 && v41 < v4 )
  {
    *((_DWORD *)this + 70) = 0;
    if ( (v41 & 1) != 0 )
      *((_DWORD *)this + 69) = ++v41;
    if ( v4 >= v41 + 2 )
      v4 = v41 + 2;
    *((_DWORD *)this + 69) = v4;
    Caver::HealthBar::PopHeart(this);
    Caver::AudioSystem::sharedSystem(v57);
    sub_566BB8((int)&v66, "heart_get");
    Caver::AudioSystem::PlaySoundEffectWithName();
    if ( v64 )
    {
      v58 = v64[2] - 1;
      v64[2] = v58;
      if ( !v58 )
        (*(void (__fastcall **)())(*(_QWORD *)v64 + 8LL))();
    }
    v59 = (void *)(v66 - 24);
    if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
    {
      v60 = (unsigned int *)(v66 - 8);
      if ( &pthread_create )
      {
        do
          v61 = __ldaxr(v60);
        while ( __stlxr(v61 - 1, v60) );
      }
      else
      {
        v61 = (*v60)--;
      }
      if ( v61 <= 0 )
        operator delete(v59);
    }
LABEL_43:
    v43 = 0;
  }
LABEL_48:
  v44 = *((_QWORD *)this + 50);
  if ( *((_QWORD *)this + 51) != v44 )
  {
    v45 = 0;
    v46 = 0;
    do
    {
      v47 = v44 + v45;
      v49 = *(Caver::GUIAnimation **)v47;
      v48 = *(_QWORD **)(v47 + 8);
      if ( v48 )
        ++v48[1];
      if ( v49 )
      {
        Caver::GUIAnimation::Update(v49, a2);
        if ( *((_BYTE *)v49 + 84) )
        {
          v50 = (_QWORD *)(*((_QWORD *)this + 50) + v45);
          v51 = (_QWORD *)v50[1];
          *v50 = 0;
          v50[1] = 0;
          if ( v51 )
          {
            v52 = v51[1] - 1LL;
            v51[1] = v52;
            if ( !v52 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v51 + 16LL))(v51);
              v53 = v51[2] - 1LL;
              v51[2] = v53;
              if ( !v53 )
                (*(void (__fastcall **)(_QWORD *))(*v51 + 24LL))(v51);
            }
          }
        }
        v43 = 1;
      }
      if ( v48 )
      {
        v54 = v48[1] - 1LL;
        v48[1] = v54;
        if ( !v54 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
          v55 = v48[2] - 1LL;
          v48[2] = v55;
          if ( !v55 )
            (*(void (__fastcall **)(_QWORD *))(*v48 + 24LL))(v48);
        }
      }
      v44 = *((_QWORD *)this + 50);
      ++v46;
      v45 += 16;
    }
    while ( v46 < (*((_QWORD *)this + 51) - v44) >> 4 );
  }
  if ( (v43 & 1) != 0 )
    Caver::HealthBar::UpdateSprite(this);
  return Caver::ParticleSystem::Update(*((Caver::ParticleSystem **)this + 48), a2);
}

