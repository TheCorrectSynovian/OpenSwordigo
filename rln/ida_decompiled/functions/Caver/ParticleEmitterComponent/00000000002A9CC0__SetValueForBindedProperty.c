/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A9CC0
 * Mangled: _ZN5Caver24ParticleEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F51A0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 19
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F54A0  Caver::Matrix4::RotationY(float)
 *   0x00000000001F5820  Caver::ParticleEmitter::CreateFromType(Caver::ParticleEmitter::Type)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72C0  Caver::ParticleEmitter::Clone(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FB740  Caver::ParticleEmitterComponent::UpdateLocalTransform(void)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x00000000001FCE40  Caver::ParticleEmitterComponent::PrepareEmitter(boost::shared_ptr<Caver::ParticleEmitter> const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200C20  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x00000000002039A0  Caver::Matrix4::RotationX(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 227
 *   insn=0x00000000002A9CDC string=0x00000000002A9CE0 "V"
 *   insn=0x00000000002A9D00 string=0x00000000002A9D04 "H"
 *   insn=0x00000000002A9D04 string=0x00000000002A9D08 "\t"
 *   insn=0x00000000002A9D08 string=0x00000000002A9D10 "(y"
 *   insn=0x00000000002A9D10 string=0x00000000002A9D14 ""
 *   insn=0x00000000002A9D18 string=0x00000000002A9D2C "h"
 *   insn=0x00000000002A9D18 string=0x00000000002A9F08 "w"
 *   insn=0x00000000002A9D18 string=0x00000000002A9F5C "h"
 *   insn=0x00000000002A9D18 string=0x00000000002A9F74 "h"
 *   insn=0x00000000002A9D1C string=0x00000000002A9D20 ""
 *   insn=0x00000000002A9D20 string=0x00000000002A9D24 "h"
 *   insn=0x00000000002A9D34 string=0x00000000002A9D38 ")"
 *   insn=0x00000000002A9D38 string=0x00000000002A9D3C "\t"
 *   insn=0x00000000002A9D48 string=0x00000000002A9D4C "YK"
 *   insn=0x00000000002A9D4C string=0x00000000001FCAB0 "0'"
 *   insn=0x00000000002A9D50 string=0x0000000000584004 "5"
 *   insn=0x00000000002A9D54 string=0x00000000002A9D58 ""
 *   insn=0x00000000002A9D64 string=0x00000000002A9D68 "`"
 *   insn=0x00000000002A9D68 string=0x00000000002A9D6C "QK"
 *   insn=0x00000000002A9D7C string=0x00000000002A9D80 "`"
 *   insn=0x00000000002A9D80 string=0x00000000002A9D84 "KK"
 *   insn=0x00000000002A9D90 string=0x00000000002A9D94 "`"
 *   insn=0x00000000002A9D94 string=0x00000000002A9D98 "jF"
 *   insn=0x00000000002A9D98 string=0x00000000002A9D9C "{"
 *   insn=0x00000000002A9D98 string=0x00000000001FB740 "0'"
 *   insn=0x00000000002A9DAC string=0x00000000001F5820 "P'"
 *   insn=0x00000000002A9DB4 string=0x00000000002A9DB8 "\n"
 *   insn=0x00000000002A9DB4 string=0x00000000002A9DC4 "t"
 *   insn=0x00000000002A9DB8 string=0x00000000002A9DBC "J"
 *   insn=0x00000000002A9DBC string=0x00000000002A9DC0 "\n"
 *   insn=0x00000000002A9DC4 string=0x00000000002A9DC8 "i"
 *   insn=0x00000000002A9DC8 string=0x00000000002A9DCC "4"
 *   insn=0x00000000002A9DCC string=0x00000000002A9E10 "h"
 *   insn=0x00000000002A9DD0 string=0x00000000002A9DD4 ""
 *   insn=0x00000000002A9DE0 string=0x00000000002A9DE4 "\t@"
 *   insn=0x00000000002A9DF0 string=0x00000000002A9DF4 ""
 *   insn=0x00000000002A9E00 string=0x00000000002A9E04 "@"
 *   insn=0x00000000002A9E10 string=0x00000000002A9E14 "("
 *   insn=0x00000000002A9E14 string=0x00000000002A9E18 "ab"
 *   insn=0x00000000002A9E18 string=0x00000000002A9E1C "("
 *   insn=0x00000000002A9E28 string=0x00000000001FCE40 "0'"
 *   insn=0x00000000002A9E3C string=0x00000000002A9E40 "w"
 *   insn=0x00000000002A9E48 string=0x00000000002A9E4C "i"
 *   insn=0x00000000002A9E4C string=0x00000000002A9E50 "hv"
 *   insn=0x00000000002A9E54 string=0x00000000002A9E58 "`""
 *   insn=0x00000000002A9E5C string=0x00000000002A9E60 " 7"
 *   insn=0x00000000002A9E60 string=0x00000000002A9E64 "h"
 *   insn=0x00000000002A9E60 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002A9E64 string=0x00000000002A9E68 "\t"
 *   insn=0x00000000002A9E68 string=0x00000000002A9E6C "h"
 *   insn=0x00000000002A9E74 string=0x00000000002A9E78 "\tA\t"
 *   insn=0x00000000002A9E78 string=0x00000000002A9E7C "ivA"
 *   insn=0x00000000002A9E7C string=0x00000000002A9E80 "\t"
 *   insn=0x00000000002A9E80 string=0x00000000002A9E84 "`nA"
 *   insn=0x00000000002A9E84 string=0x00000000002A9E88 "arA"
 *   insn=0x00000000002A9E88 string=0x00000000002A9E8C "cvA"
 *   insn=0x00000000002A9E90 string=0x00000000002A9E94 """
 *   insn=0x00000000002A9E98 string=0x00000000002A9E9C "!!"
 *   insn=0x00000000002A9EA0 string=0x00000000002A9EA4 "a#"
 *   insn=0x00000000002A9EB0 string=0x00000000002A9EB4 "\tE"
 *   insn=0x00000000002A9EB4 string=0x00000000002A9EB8 "4"
 *   insn=0x00000000002A9EBC string=0x00000000002A9EC0 ""
 *   insn=0x00000000002A9EC0 string=0x00000000002A9EC4 "h"
 *   insn=0x00000000002A9ECC string=0x00000000002A9ED0 "i"
 *   insn=0x00000000002A9ED0 string=0x00000000002A9ED4 ""
 *   insn=0x00000000002A9ED4 string=0x00000000002A9ED8 "hF"
 *   insn=0x00000000002A9ED8 string=0x00000000002A9EDC "i"
 *   insn=0x00000000002A9EDC string=0x00000000002A9EE0 "`""
 *   insn=0x00000000002A9EE8 string=0x00000000002A9EEC "h"
 *   insn=0x00000000002A9EF0 string=0x00000000002A9EF4 "`"
 *   insn=0x00000000002A9EF8 string=0x00000000002A9EFC "aFA"
 *   insn=0x00000000002A9EFC string=0x00000000002A9F00 "H["
 *   insn=0x00000000002A9F00 string=0x00000000002A9F04 "!"
 *   insn=0x00000000002A9F38 string=0x00000000002A9F3C "w"
 *   insn=0x00000000002A9F3C string=0x00000000002A9F40 "W"
 *   insn=0x00000000002A9F4C string=0x00000000001F3BC0 "P'"
 *   insn=0x00000000002A9F5C string=0x00000000002A9F60 "H"
 *   insn=0x00000000002A9F64 string=0x00000000002A9F68 ")"
 *   insn=0x00000000002A9F68 string=0x00000000002A9F6C "\t"
 *   insn=0x00000000002A9F7C string=0x00000000002A9F80 ")"
 *   insn=0x00000000002A9F80 string=0x00000000002A9F84 "\t"
 *   insn=0x00000000002A9F98 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002A9FA8 string=0x00000000002A9FAC ""
 *   insn=0x00000000002A9FB0 string=0x00000000002A9FB4 ""
 *   insn=0x00000000002A9FB8 string=0x00000000002A9FBC "@"
 *   insn=0x00000000002A9FBC string=0x00000000002A9FC0 "hr"
 *   insn=0x00000000002A9FC4 string=0x00000000002A9FC8 "i"
 *   insn=0x00000000002A9FC4 string=0x00000000002A9FDC ""
 *   insn=0x00000000002A9FCC string=0x00000000002A9FD0 "\nM\n"
 *   insn=0x00000000002A9FD0 string=0x00000000002A9FD4 "I"
 *   insn=0x00000000002A9FDC string=0x00000000002A9FE0 "hr"
 *   insn=0x00000000002A9FE4 string=0x00000000002A9FE8 ""
 *   insn=0x00000000002A9FE8 string=0x00000000002A9FEC ""
 *   insn=0x00000000002A9FF0 string=0x00000000002A9FF4 "`"
 *   insn=0x00000000002A9FF4 string=0x00000000002A9FF8 "hr"
 *   insn=0x00000000002AA000 string=0x00000000002AA004 "i"
 *   insn=0x00000000002AA000 string=0x00000000002AA018 ""
 *   insn=0x00000000002AA008 string=0x00000000002AA00C "\nM\n"
 *   insn=0x00000000002AA00C string=0x00000000002AA010 "I"
 *   insn=0x00000000002AA018 string=0x00000000002AA01C "hr"
 *   insn=0x00000000002AA020 string=0x00000000002AA024 ""
 *   insn=0x00000000002AA024 string=0x00000000002AA028 ""
 *   insn=0x00000000002AA02C string=0x00000000002AA030 "`"
 *   insn=0x00000000002AA030 string=0x00000000002AA034 "hr"
 *   insn=0x00000000002AA03C string=0x00000000002AA040 "i"
 *   insn=0x00000000002AA03C string=0x00000000002AA054 ""
 *   insn=0x00000000002AA044 string=0x00000000002AA048 "\nM\n"
 *   insn=0x00000000002AA048 string=0x00000000002AA04C "I"
 *   insn=0x00000000002AA054 string=0x00000000002AA058 "hr"
 *   insn=0x00000000002AA05C string=0x00000000002AA060 ""
 *   insn=0x00000000002AA060 string=0x00000000002AA064 ""
 *   insn=0x00000000002AA068 string=0x00000000002AA06C "`"
 *   insn=0x00000000002AA06C string=0x00000000002AA070 "hr"
 *   insn=0x00000000002AA078 string=0x00000000002AA07C "i"
 *   insn=0x00000000002AA078 string=0x00000000002AA090 ""
 *   insn=0x00000000002AA080 string=0x00000000002AA084 "\nM\n"
 *   insn=0x00000000002AA084 string=0x00000000002AA088 "I"
 *   insn=0x00000000002AA090 string=0x00000000002AA094 "hr"
 *   insn=0x00000000002AA098 string=0x00000000002AA09C ""
 *   insn=0x00000000002AA09C string=0x00000000002AA0A0 ""
 *   insn=0x00000000002AA0A4 string=0x00000000002AA0A8 " "
 *   insn=0x00000000002AA0A8 string=0x00000000002AA0AC "hr"
 *   insn=0x00000000002AA0A8 string=0x00000000002AA16C "`"
 *   insn=0x00000000002AA0B4 string=0x00000000002AA0B8 "i"
 *   insn=0x00000000002AA0B4 string=0x00000000002AA0CC ""
 *   insn=0x00000000002AA0BC string=0x00000000002AA0C0 "\nM\n"
 *   insn=0x00000000002AA0C0 string=0x00000000002AA0C4 "I"
 *   insn=0x00000000002AA0CC string=0x00000000002AA0D0 "hr"
 *   insn=0x00000000002AA0D0 string=0x00000000002AA0D4 "`"
 *   insn=0x00000000002AA0D8 string=0x00000000002AA0DC "^"
 *   insn=0x00000000002AA0E4 string=0x00000000002AA0E8 ""
 *   insn=0x00000000002AA0E8 string=0x00000000002AA0EC "u"
 *   insn=0x00000000002AA0E8 string=0x00000000002AA168 "w"
 *   insn=0x00000000002AA0F8 string=0x00000000002AA0FC "7"
 *   insn=0x00000000002AA0FC string=0x00000000002AA100 "H\n"
 *   insn=0x00000000002AA108 string=0x00000000002AA10C "@"
 *   insn=0x00000000002AA114 string=0x00000000002AA118 " "
 *   insn=0x00000000002AA11C string=0x00000000001F8570 "0'"
 *   insn=0x00000000002AA124 string=0x00000000002AA128 "h"
 *   insn=0x00000000002AA130 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002AA144 string=0x00000000002AA148 ""
 *   insn=0x00000000002AA158 string=0x00000000002AA15C "?"
 *   insn=0x00000000002AA160 string=0x00000000002AA164 "9"
 *   insn=0x00000000002AA16C string=0x00000000002AA170 " "
 *   insn=0x00000000002AA174 string=0x00000000002AA178 "R4"
 *   insn=0x00000000002AA178 string=0x00000000001F72C0 "0'"
 *   insn=0x00000000002AA180 string=0x00000000002AA184 "\n"
 *   insn=0x00000000002AA180 string=0x00000000002AA190 "t"
 *   insn=0x00000000002AA184 string=0x00000000002AA188 "J"
 *   insn=0x00000000002AA188 string=0x00000000002AA18C "\n"
 *   insn=0x00000000002AA190 string=0x00000000002AA194 "i"
 *   insn=0x00000000002AA194 string=0x00000000002AA198 "4"
 *   insn=0x00000000002AA198 string=0x00000000002AA1DC "h"
 *   insn=0x00000000002AA19C string=0x00000000002AA1A0 ""
 *   insn=0x00000000002AA1AC string=0x00000000002AA1B0 "\t@"
 *   insn=0x00000000002AA1BC string=0x00000000002AA1C0 ""
 *   insn=0x00000000002AA1CC string=0x00000000002AA1D0 "@"
 *   insn=0x00000000002AA1E0 string=0x00000000002AA1E4 "ab"
 *   insn=0x00000000002AA1E4 string=0x00000000002AA1E8 "("
 *   insn=0x00000000002AA1E8 string=0x00000000002AA1EC "h"
 *   insn=0x00000000002AA1FC string=0x00000000002AA200 "h"
 *   insn=0x00000000002AA200 string=0x00000000002AA204 ""
 *   insn=0x00000000002AA204 string=0x00000000002AA208 "h"
 *   insn=0x00000000002AA208 string=0x00000000002AA20C "A"
 *   insn=0x00000000002AA20C string=0x00000000002AA210 "h"
 *   insn=0x00000000002AA214 string=0x00000000002AA218 "\t@"
 *   insn=0x00000000002AA21C string=0x00000000002AA220 "h\n@"
 *   insn=0x00000000002AA220 string=0x00000000002AA224 ""
 *   insn=0x00000000002AA224 string=0x00000000002AA228 "h\n"
 *   insn=0x00000000002AA228 string=0x00000000002AA22C "A"
 *   insn=0x00000000002AA22C string=0x00000000002AA230 "h"
 *   insn=0x00000000002AA234 string=0x00000000002AA238 "@"
 *   insn=0x00000000002AA248 string=0x00000000002AA24C "`"
 *   insn=0x00000000002AA24C string=0x00000000002AA250 " "
 *   insn=0x00000000002AA25C string=0x00000000002AA260 "!"
 *   insn=0x00000000002AA284 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002AA294 string=0x00000000002AA298 ""
 *   insn=0x00000000002AA29C string=0x00000000002AA2A0 "!"
 *   insn=0x00000000002AA2A4 string=0x00000000002AA2A8 "\t@"
 *   insn=0x00000000002AA2B4 string=0x00000000002AA2B8 ""
 *   insn=0x00000000002AA2BC string=0x00000000002AA2C0 "!"
 *   insn=0x00000000002AA2C4 string=0x00000000002AA2C8 "@"
 *   insn=0x00000000002AA2DC string=0x00000000002AA2E0 "4"
 *   insn=0x00000000002AA2E4 string=0x00000000002AA2E8 ""
 *   insn=0x00000000002AA2F4 string=0x00000000002AA2F8 "\t@"
 *   insn=0x00000000002AA304 string=0x00000000002AA308 ""
 *   insn=0x00000000002AA314 string=0x00000000002AA318 "@"
 *   insn=0x00000000002AA324 string=0x00000000002AA328 "g]"
 *   insn=0x00000000002AA328 string=0x00000000002AA32C ""
 *   insn=0x00000000002AA344 string=0x00000000002AA348 "U"
 *   insn=0x00000000002AA350 string=0x00000000002AA354 ")eB"
 *   insn=0x00000000002AA360 string=0x00000000002AA364 "!"
 *   insn=0x00000000002AA364 string=0x00000000002AA368 "#\t@"
 *   insn=0x00000000002AA368 string=0x00000000002AA36C "hR"
 *   insn=0x00000000002AA36C string=0x00000000002AA370 "ib"
 *   insn=0x00000000002AA378 string=0x00000000002AA37C "J"
 *   insn=0x00000000002AA37C string=0x00000000002AA380 "\t"
 *   insn=0x00000000002AA380 string=0x00000000002AA384 ")"
 *   insn=0x00000000002AA384 string=0x00000000002AA388 ")"
 *   insn=0x00000000002AA388 string=0x00000000002AA38C "tR"
 *   insn=0x00000000002AA38C string=0x00000000002AA390 "+"
 *   insn=0x00000000002AA3A8 string=0x00000000002AA3AC "#"
 *   insn=0x00000000002AA3AC string=0x00000000002AA3B0 "l"
 *   insn=0x00000000002AA3AC string=0x00000000002AA3F0 "+E@"
 *   insn=0x00000000002AA3B8 string=0x00000000002AA3BC "j"
 *   insn=0x00000000002AA3BC string=0x00000000002AA3C0 "n"
 *   insn=0x00000000002AA3C0 string=0x00000000002AA3C4 "JQ"
 *   insn=0x00000000002AA3E0 string=0x00000000002AA3E4 "a"
 *   insn=0x00000000002AA3EC string=0x00000000002AA400 "`"
 *   insn=0x00000000002AA3F0 string=0x00000000002AA3F4 "KE"
 *   insn=0x00000000002AA3F4 string=0x00000000002AA3F8 "_"
 *   insn=0x00000000002AA404 string=0x00000000002AA408 "5G"
 *   insn=0x00000000002AA404 string=0x0000000000583734 "o"
 *   insn=0x00000000002AA40C string=0x00000000002AA410 "  ("
 *   insn=0x00000000002AA410 string=0x00000000002AA414 "-"
 *   insn=0x00000000002AA414 string=0x00000000002AA438 "`"
 *   insn=0x00000000002AA418 string=0x00000000002AA41C "ae"
 *   insn=0x00000000002AA430 string=0x00000000002AA434 "hR9`"
 *   insn=0x00000000002AA43C string=0x00000000002AA440 "  ("
 *   insn=0x00000000002AA440 string=0x00000000002AA444 "-"
 *   insn=0x00000000002AA444 string=0x00000000002AA468 "`"
 *   insn=0x00000000002AA44C string=0x00000000001F54A0 "P'"
 *   insn=0x00000000002AA460 string=0x00000000002AA464 "hR9`"
 *   insn=0x00000000002AA46C string=0x00000000002AA470 "  ("
 *   insn=0x00000000002AA470 string=0x00000000002AA474 "-"
 *   insn=0x00000000002AA47C string=0x00000000001FBCC0 "0'"
 *   insn=0x00000000002AA490 string=0x00000000002AA494 "hR9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleEmitterComponent::SetValueForBindedProperty(
        Caver::ParticleEmitterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  int v6; // w23
  __int64 v7; // x8
  _QWORD *v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // x9
  Caver::ParticleSystem *v16; // x0
  __int64 v17; // x23
  __int64 v18; // x23
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  Caver::ParticleEmitter *v27; // x0
  unsigned int v28; // w24
  _QWORD *v29; // x21
  __int64 v30; // x8
  int v31; // w23
  __int64 v32; // x25
  __int64 v33; // x0
  void *v34; // x8
  __int64 i; // x20
  float v36; // s0
  _QWORD *v37; // x8
  __int64 v38; // x9
  _QWORD *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x8
  _QWORD *v42; // x19
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v45; // [xsp+88h] [xbp-88h] BYREF
  _QWORD *v46; // [xsp+90h] [xbp-80h]
  float v47; // [xsp+A0h] [xbp-70h]
  float v48; // [xsp+ACh] [xbp-64h]
  float v49; // [xsp+B8h] [xbp-58h]
  __int64 v50; // [xsp+C8h] [xbp-48h]

  v6 = 0;
  v50 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 1:
      *((_BYTE *)this + 320) = **((_BYTE **)a3 + 1);
      goto LABEL_32;
    case 3:
      v15 = *((_QWORD *)this + 35);
      *((_DWORD *)this + 81) = **((_DWORD **)a3 + 1);
      if ( !v15 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ParticleEmitterComponent *)((char *)this + 264), this);
        if ( !*((_QWORD *)this + 35) )
        {
          v16 = (Caver::ParticleSystem *)*((_QWORD *)this + 41);
          if ( v16 )
            Caver::ParticleSystem::InitWithMaxParticles(v16, *((_DWORD *)this + 81));
        }
      }
      goto LABEL_32;
    case 4:
      *((_BYTE *)this + 361) = **((_BYTE **)a3 + 1);
      return;
    case 5:
      Caver::BindingValue::Vector3Value(a3);
      *(_QWORD *)((char *)this + 364) = v45;
      v13 = *((_QWORD *)this + 35);
      *((_DWORD *)this + 93) = (_DWORD)v46;
      if ( !v13 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ParticleEmitterComponent *)((char *)this + 264), this);
        if ( !*((_QWORD *)this + 35) )
        {
          v14 = *((_QWORD *)this + 41);
          if ( v14 )
          {
            *(_QWORD *)(v14 + 148) = *(_QWORD *)((char *)this + 364);
            *(_DWORD *)(v14 + 156) = *((_DWORD *)this + 93);
            *(_BYTE *)(v14 + 145) = (float)((float)((float)(*((float *)this + 91) * *((float *)this + 91))
                                                  + (float)(*((float *)this + 92) * *((float *)this + 92)))
                                          + (float)(*((float *)this + 93) * *((float *)this + 93))) > 0.0001;
          }
        }
      }
      goto LABEL_32;
    case 6:
      Caver::BindingValue::Vector3Value(a3);
      *((float *)this + 98) = v49 * 0.017453;
      Caver::BindingValue::Vector3Value(a3);
      *((float *)this + 99) = v48 * 0.017453;
      Caver::BindingValue::Vector3Value(a3);
      *((float *)this + 100) = v47 * 0.017453;
      Caver::ParticleEmitterComponent::UpdateLocalTransform(this);
      goto LABEL_32;
    case 12:
      Caver::ParticleEmitter::CreateFromType();
      v9 = v45;
      v8 = v46;
      if ( v46 )
        ++v46[1];
      v10 = (_QWORD *)*((_QWORD *)this + 44);
      *((_QWORD *)this + 43) = v9;
      *((_QWORD *)this + 44) = v8;
      if ( v10 )
      {
        v11 = v10[1] - 1LL;
        v10[1] = v11;
        if ( !v11 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v12 = v10[2] - 1LL;
          v10[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        }
      }
      if ( *((_BYTE *)this + 260) && *((_QWORD *)this + 43) )
        Caver::ParticleEmitterComponent::PrepareEmitter();
      goto LABEL_75;
    case 13:
      v17 = *((_QWORD *)this + 43);
      if ( v17 )
      {
        Caver::BindingValue::Vector3Value(a3);
        *(_QWORD *)(v17 + 56) = v45;
        *(_DWORD *)(v17 + 64) = (_DWORD)v46;
      }
      goto LABEL_32;
    case 14:
      Caver::BindingValue::FloatColorValue(a3);
      v18 = *((_QWORD *)this + 43);
      if ( v18 )
      {
        Caver::FloatColor::GetHSLComponents((Caver::FloatColor *)&v45, (float *)(v18 + 168));
        *(_DWORD *)(v18 + 180) = HIDWORD(v46);
      }
      goto LABEL_32;
    case 15:
      v20 = *((_QWORD *)this + 43);
      if ( v20 )
        *(_DWORD *)(v20 + 184) = **((_DWORD **)a3 + 1);
      goto LABEL_32;
    case 16:
      v19 = *((_QWORD *)this + 43);
      if ( v19 )
        *(_DWORD *)(v19 + 188) = **((_DWORD **)a3 + 1);
      goto LABEL_32;
    case 17:
      v7 = *((_QWORD *)this + 43);
      if ( v7 )
        *(_DWORD *)(v7 + 192) = **((_DWORD **)a3 + 1);
LABEL_32:
      v6 = 1;
      break;
    default:
      break;
  }
  Caver::Component::SetValueForBindedProperty(this, a2, a3);
  if ( (unsigned int)(a2 - 7) > 4 )
  {
    v28 = a2 - 18;
    if ( (unsigned int)(a2 - 18) <= 0x14 )
    {
      v29 = (_QWORD *)*((_QWORD *)this + 43);
      if ( v29 )
      {
        v30 = v29[25];
        v31 = **((_DWORD **)a3 + 1);
        if ( !v30 )
        {
          v32 = (*(unsigned int (__fastcall **)(_QWORD))(*v29 + 24LL))(*((_QWORD *)this + 43));
          v33 = operator new[](4 * v32);
          v34 = (void *)v29[25];
          v29[25] = v33;
          if ( v34 )
            operator delete[](v34);
          if ( (_DWORD)v32 )
          {
            for ( i = 0; i != v32; ++i )
            {
              v36 = (*(float (__fastcall **)(_QWORD *, _QWORD))(*v29 + 32LL))(v29, (unsigned int)i);
              v30 = v29[25];
              *(float *)(v30 + 4 * i) = v36;
            }
          }
          else
          {
            v30 = v29[25];
          }
        }
        *(_DWORD *)(v30 + 4LL * v28) = v31;
        v27 = (Caver::ParticleEmitter *)*((_QWORD *)this + 43);
        if ( !v27 )
          return;
        goto LABEL_66;
      }
    }
    if ( !v6 )
      return;
  }
  else
  {
    v21 = *((_QWORD *)this + 15);
    *((_DWORD *)this + 28) = 0;
    if ( (*(unsigned int (**)(void))(v21 + 8))() )
    {
      v22 = *((int *)this + 28);
      if ( (_DWORD)v22 )
      {
        *((_DWORD *)this + 6 * v22 + 32) = *((_DWORD *)this + 32);
        *((_DWORD *)this + 32) = 0;
      }
      *((_DWORD *)this + 28) = v22 + 1;
    }
    if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 18) + 8LL))((char *)this + 144) )
    {
      v23 = *((int *)this + 28);
      if ( (_DWORD)v23 != 1 )
      {
        *((_DWORD *)this + 6 * v23 + 32) = *((_DWORD *)this + 38);
        *((_DWORD *)this + 38) = 0;
      }
      *((_DWORD *)this + 28) = v23 + 1;
    }
    if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 21) + 8LL))((char *)this + 168) )
    {
      v24 = *((int *)this + 28);
      if ( (_DWORD)v24 != 2 )
      {
        *((_DWORD *)this + 6 * v24 + 32) = *((_DWORD *)this + 44);
        *((_DWORD *)this + 44) = 0;
      }
      *((_DWORD *)this + 28) = v24 + 1;
    }
    if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 24) + 8LL))((char *)this + 192) )
    {
      v25 = *((int *)this + 28);
      if ( (_DWORD)v25 != 3 )
      {
        *((_DWORD *)this + 6 * v25 + 32) = *((_DWORD *)this + 50);
        *((_DWORD *)this + 50) = 0;
      }
      *((_DWORD *)this + 28) = v25 + 1;
    }
    if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 27) + 8LL))((char *)this + 216) )
    {
      v26 = *((int *)this + 28);
      if ( (_DWORD)v26 != 4 )
      {
        *((_DWORD *)this + 6 * v26 + 32) = *((_DWORD *)this + 56);
        *((_DWORD *)this + 56) = 0;
      }
      *((_DWORD *)this + 28) = v26 + 1;
      v27 = (Caver::ParticleEmitter *)*((_QWORD *)this + 43);
      if ( !v27 )
        return;
      goto LABEL_66;
    }
  }
  v27 = (Caver::ParticleEmitter *)*((_QWORD *)this + 43);
  if ( !v27 )
    return;
LABEL_66:
  Caver::ParticleEmitter::Clone(&v45, v27);
  v38 = v45;
  v37 = v46;
  if ( v46 )
    ++v46[1];
  v39 = (_QWORD *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 43) = v38;
  *((_QWORD *)this + 44) = v37;
  if ( v39 )
  {
    v40 = v39[1] - 1LL;
    v39[1] = v40;
    if ( !v40 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
      v41 = v39[2] - 1LL;
      v39[2] = v41;
      if ( !v41 )
        (*(void (__fastcall **)(_QWORD *))(*v39 + 24LL))(v39);
    }
  }
  if ( *((_BYTE *)this + 260) && *((_QWORD *)this + 43) )
    Caver::ParticleEmitterComponent::PrepareEmitter();
LABEL_75:
  v42 = v46;
  if ( v46 )
  {
    v43 = v46[1] - 1LL;
    v46[1] = v43;
    if ( !v43 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
      v44 = v42[2] - 1LL;
      v42[2] = v44;
      if ( !v44 )
        (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
    }
  }
}

