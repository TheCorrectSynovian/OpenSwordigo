/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1A84
 * Mangled: _ZN5Caver23BushControllerComponent13HandleMessageEiPv
 * Demangled: Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 28
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8630  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x00000000001F9780  Caver::ItemDropComponent::Trigger(void)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FAEE0  Caver::BushControllerComponent::~BushControllerComponent()
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000201A30  Caver::ItemDropComponent::ItemDropComponent(void)
 *   0x0000000000202BC0  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x00000000002560E8  Caver::ShatterComponent::Interface(void)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *   0x00000000002B2210  Caver::BushControllerComponent::Clone(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 217
 *   insn=0x00000000002B1A98 string=0x00000000002B1A9C "V"
 *   insn=0x00000000002B1AA4 string=0x00000000002B1AA8 "?"
 *   insn=0x00000000002B1AAC string=0x00000000002B1AB0 "a"
 *   insn=0x00000000002B1AB0 string=0x00000000002B1AB4 "h"
 *   insn=0x00000000002B1AB8 string=0x00000000002B1AE8 "T"
 *   insn=0x00000000002B1AEC string=0x00000000002B1AF0 "h"
 *   insn=0x00000000002B1AF8 string=0x00000000002B1AFC "!hF"
 *   insn=0x00000000002B1AFC string=0x000000000021C148 "@&"
 *   insn=0x00000000002B1B04 string=0x00000000002B1B08 ""
 *   insn=0x00000000002B1B14 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B1B1C string=0x00000000001FAB30 "0'"
 *   insn=0x00000000002B1B24 string=0x00000000002B1B28 ""
 *   insn=0x00000000002B1B2C string=0x00000000002B1B30 "h"
 *   insn=0x00000000002B1B30 string=0x00000000002B1B34 ""
 *   insn=0x00000000002B1B3C string=0x00000000005877E9 "effect_shatter"
 *   insn=0x00000000002B1B48 string=0x00000000002B1B4C ""
 *   insn=0x00000000002B1B5C string=0x00000000002B1B60 ">"
 *   insn=0x00000000002B1B6C string=0x00000000001F5A20 "P'"
 *   insn=0x00000000002B1B74 string=0x00000000002B1B78 "@"
 *   insn=0x00000000002B1B78 string=0x00000000002B1B7C ""
 *   insn=0x00000000002B1B7C string=0x00000000002B1B80 ""
 *   insn=0x00000000002B1B84 string=0x00000000002B1B88 ""
 *   insn=0x00000000002B1B88 string=0x00000000002B1B8C ""
 *   insn=0x00000000002B1BA4 string=0x00000000002B1BA8 "A"
 *   insn=0x00000000002B1BA8 string=0x00000000002B1BAC "h"
 *   insn=0x00000000002B1BB0 string=0x00000000002B1BB4 "\t9@"
 *   insn=0x00000000002B1BB4 string=0x00000000002B1BB8 "y@"
 *   insn=0x00000000002B1BE0 string=0x00000000002B1BE4 "!"
 *   insn=0x00000000002B1BE4 string=0x00000000002B1BE8 "  ""
 *   insn=0x00000000002B1BF4 string=0x00000000002B1BF8 "9"
 *   insn=0x00000000002B1C00 string=0x00000000002B1C04 "`B@"
 *   insn=0x00000000002B1C08 string=0x00000000002B1C0C "`"
 *   insn=0x00000000002B1C08 string=0x00000000002B1C1C ""
 *   insn=0x00000000002B1C14 string=0x00000000002B1C18 "`B@"
 *   insn=0x00000000002B1C14 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B1C1C string=0x00000000002B1C20 ""
 *   insn=0x00000000002B1C24 string=0x00000000002B1C28 ""
 *   insn=0x00000000002B1C40 string=0x00000000002B1C44 "@  "
 *   insn=0x00000000002B1C5C string=0x00000000002B1C60 "!!"
 *   insn=0x00000000002B1C6C string=0x00000000002B1C70 "`B@"
 *   insn=0x00000000002B1C74 string=0x00000000002B1C78 "`"
 *   insn=0x00000000002B1C74 string=0x00000000002B1C88 ""
 *   insn=0x00000000002B1C80 string=0x00000000002B1C84 "`B@"
 *   insn=0x00000000002B1C88 string=0x00000000002B1C8C ""
 *   insn=0x00000000002B1C94 string=0x00000000002B1C98 "`N@"
 *   insn=0x00000000002B1C9C string=0x00000000002B1CA0 "`""
 *   insn=0x00000000002B1CA8 string=0x00000000002B1CAC "`N@"
 *   insn=0x00000000002B1CAC string=0x00000000002B1CB0 "`"
 *   insn=0x00000000002B1CB4 string=0x00000000001F4FA0 "P'"
 *   insn=0x00000000002B1CC4 string=0x00000000002B1CC8 "#8#"
 *   insn=0x00000000002B1CC8 string=0x00000000002B1CCC "c"
 *   insn=0x00000000002B1CCC string=0x00000000002B1CD0 "` ""
 *   insn=0x00000000002B1CD0 string=0x00000000002B1CD4 "I"
 *   insn=0x00000000002B1CD4 string=0x00000000002B1CD8 ")"
 *   insn=0x00000000002B1CDC string=0x00000000002B1CE0 "\t"
 *   insn=0x00000000002B1CEC string=0x00000000002B1CF0 ","
 *   insn=0x00000000002B1CF0 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002B1D00 string=0x00000000002B1D04 "h"
 *   insn=0x00000000002B1D08 string=0x00000000002B1D0C ""
 *   insn=0x00000000002B1D0C string=0x00000000002B1D10 ""
 *   insn=0x00000000002B1D20 string=0x00000000002B1D24 "!"
 *   insn=0x00000000002B1D24 string=0x00000000002B1D28 ".:"
 *   insn=0x00000000002B1D2C string=0x00000000002B1D30 "uB@"
 *   insn=0x00000000002B1D34 string=0x00000000002B1D38 "`"
 *   insn=0x00000000002B1D3C string=0x00000000002B1D40 "h"
 *   insn=0x00000000002B1D40 string=0x00000000002B1D44 "uB@"
 *   insn=0x00000000002B1D54 string=0x00000000002B1D58 "b"
 *   insn=0x00000000002B1D64 string=0x00000000002B1D68 "2"
 *   insn=0x00000000002B1D68 string=0x00000000002B1D6C "tB@"
 *   insn=0x00000000002B1D68 string=0x00000000001F8630 "0'"
 *   insn=0x00000000002B1D70 string=0x00000000002B1D74 "`"
 *   insn=0x00000000002B1D78 string=0x00000000002B1D7C "Y"
 *   insn=0x00000000002B1D7C string=0x00000000002B1D80 "tB@"
 *   insn=0x00000000002B1D90 string=0x00000000002B1D94 "S"
 *   insn=0x00000000002B1D9C string=0x00000000002B1DA0 "\t"
 *   insn=0x00000000002B1DA0 string=0x00000000002B1DA4 "`Z@"
 *   insn=0x00000000002B1DA8 string=0x00000000002B1DAC "`"
 *   insn=0x00000000002B1DA8 string=0x00000000002B1DC0 "x"
 *   insn=0x00000000002B1DB0 string=0x00000000002B1DB4 "K"
 *   insn=0x00000000002B1DB4 string=0x00000000002B1DB8 "`Z@"
 *   insn=0x00000000002B1DB8 string=0x00000000002B1DBC "@"
 *   insn=0x00000000002B1DC4 string=0x00000000002B1DC8 "h"
 *   insn=0x00000000002B1DCC string=0x0000000000589B49 "bushes"
 *   insn=0x00000000002B1DD8 string=0x00000000002B1DDC "w"
 *   insn=0x00000000002B1DE4 string=0x00000000002B1DE8 "vC"
 *   insn=0x00000000002B1DE8 string=0x00000000002B1DEC "q2"
 *   insn=0x00000000002B1DFC string=0x00000000002B1E00 "`"
 *   insn=0x00000000002B1E04 string=0x00000000002B1E08 "!P@"
 *   insn=0x00000000002B1E10 string=0x00000000002B1E14 "t"
 *   insn=0x00000000002B1E30 string=0x00000000002B1E34 "`"
 *   insn=0x00000000002B1E3C string=0x00000000001F45A0 "P'"
 *   insn=0x00000000002B1E40 string=0x00000000002B1E44 "O"
 *   insn=0x00000000002B1E44 string=0x00000000001F9780 "0'"
 *   insn=0x00000000002B1E4C string=0x00000000002B1E50 "@"
 *   insn=0x00000000002B1E50 string=0x00000000002B1E54 ""
 *   insn=0x00000000002B1E54 string=0x00000000002B1E58 ""
 *   insn=0x00000000002B1E5C string=0x00000000002B1E60 ""
 *   insn=0x00000000002B1E60 string=0x00000000002B1E64 ""
 *   insn=0x00000000002B1E70 string=0x00000000002B1E74 ")=G"
 *   insn=0x00000000002B1E74 string=0x00000000002B1E78 "!"
 *   insn=0x00000000002B1E7C string=0x00000000002B1E80 "\t"
 *   insn=0x00000000002B1E7C string=0x00000000002B1EB8 "\t"
 *   insn=0x00000000002B1E80 string=0x00000000002B1E84 "*"
 *   insn=0x00000000002B1E84 string=0x00000000002B1E88 "\n"
 *   insn=0x00000000002B1E8C string=0x00000000002B1E90 ""
 *   insn=0x00000000002B1E90 string=0x00000000002B1EC4 "?"
 *   insn=0x00000000002B1E94 string=0x00000000002B1E98 ")=G"
 *   insn=0x00000000002B1E98 string=0x00000000002B1E9C "!"
 *   insn=0x00000000002B1EA0 string=0x00000000002B1EA4 "\t"
 *   insn=0x00000000002B1EA0 string=0x00000000002B1ED8 "\t"
 *   insn=0x00000000002B1EA4 string=0x00000000002B1EA8 "*"
 *   insn=0x00000000002B1EA8 string=0x00000000002B1EAC "\n"
 *   insn=0x00000000002B1EB4 string=0x00000000002B1EE4 "?"
 *   insn=0x00000000002B1EB8 string=0x00000000002B1EBC "*"
 *   insn=0x00000000002B1EBC string=0x00000000002B1EC0 "\n"
 *   insn=0x00000000002B1EC4 string=0x00000000002B1EC8 ","
 *   insn=0x00000000002B1ECC string=0x00000000002B1ED0 "5"
 *   insn=0x00000000002B1ED0 string=0x00000000002B1ED4 "6"
 *   insn=0x00000000002B1ED8 string=0x00000000002B1EDC "*"
 *   insn=0x00000000002B1EDC string=0x00000000002B1EE0 "\n"
 *   insn=0x00000000002B1EEC string=0x00000000002B1EF0 "-"
 *   insn=0x00000000002B1EF8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B1F04 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B1F0C string=0x00000000002B1F10 "U"
 *   insn=0x00000000002B1F0C string=0x00000000002B2048 "@"
 *   insn=0x00000000002B1F20 string=0x00000000002B1F24 "("
 *   insn=0x00000000002B1F24 string=0x00000000002B1F28 "\t\t@"
 *   insn=0x00000000002B1F28 string=0x00000000002B1F2C ")"
 *   insn=0x00000000002B1F2C string=0x00000000002B1F30 "\t\t"
 *   insn=0x00000000002B1F34 string=0x00000000002B1F38 "\t"
 *   insn=0x00000000002B1F38 string=0x00000000002B1F3C ")"
 *   insn=0x00000000002B1F40 string=0x00000000002B1F44 " "
 *   insn=0x00000000002B1F44 string=0x00000000002B1F48 ""
 *   insn=0x00000000002B1F5C string=0x00000000002B1F60 "Y>"
 *   insn=0x00000000002B1F6C string=0x00000000002B1F70 ")"
 *   insn=0x00000000002B1F78 string=0x00000000002B1F7C " "
 *   insn=0x00000000002B1F80 string=0x00000000002B1F84 ")=G"
 *   insn=0x00000000002B1F84 string=0x00000000002B1F88 "!"
 *   insn=0x00000000002B1F88 string=0x00000000002B1F8C ")"
 *   insn=0x00000000002B1F8C string=0x00000000002B1F90 "\t"
 *   insn=0x00000000002B1F8C string=0x00000000002B1FB0 "\t"
 *   insn=0x00000000002B1F90 string=0x00000000002B1F94 "*"
 *   insn=0x00000000002B1F94 string=0x00000000002B1F98 "\n"
 *   insn=0x00000000002B1F9C string=0x00000000002B1FA0 "?"
 *   insn=0x00000000002B1FB0 string=0x00000000002B1FB4 "*"
 *   insn=0x00000000002B1FB4 string=0x00000000002B1FB8 "\n"
 *   insn=0x00000000002B1FB8 string=0x00000000002B1FBC "?"
 *   insn=0x00000000002B1FBC string=0x00000000002B1FC0 "M"
 *   insn=0x00000000002B1FD0 string=0x00000000002B1FD4 "(a"
 *   insn=0x00000000002B1FD8 string=0x00000000002B1FDC " "
 *   insn=0x00000000002B1FE0 string=0x00000000002B1FE4 "J=G"
 *   insn=0x00000000002B1FE4 string=0x00000000002B1FE8 ")!"
 *   insn=0x00000000002B1FEC string=0x00000000002B1FF0 "*"
 *   insn=0x00000000002B1FEC string=0x00000000002B2020 "*"
 *   insn=0x00000000002B1FF0 string=0x00000000002B1FF4 "K"
 *   insn=0x00000000002B1FF4 string=0x00000000002B1FF8 "+"
 *   insn=0x00000000002B1FFC string=0x00000000002B2000 "_"
 *   insn=0x00000000002B2020 string=0x00000000002B2024 "K"
 *   insn=0x00000000002B2024 string=0x00000000002B2028 "+"
 *   insn=0x00000000002B2028 string=0x00000000002B202C "_"
 *   insn=0x00000000002B2048 string=0x00000000002B204C ""
 *   insn=0x00000000002B204C string=0x00000000002B2050 ""
 *   insn=0x00000000002B2054 string=0x00000000002B2058 ""
 *   insn=0x00000000002B2058 string=0x00000000002B205C ""
 *   insn=0x00000000002B2080 string=0x00000000002B2084 ""
 *   insn=0x00000000002B2090 string=0x00000000002B2094 "`Z@"
 *   insn=0x00000000002B2094 string=0x00000000002B2098 "\n"
 *   insn=0x00000000002B2098 string=0x00000000002B209C "\tA"
 *   insn=0x00000000002B209C string=0x00000000002B20A0 ""
 *   insn=0x00000000002B20A0 string=0x00000000002B20A4 "@"
 *   insn=0x00000000002B20AC string=0x00000000002B20B0 "i"
 *   insn=0x00000000002B20B0 string=0x00000000002B20B4 "`"
 *   insn=0x00000000002B20B4 string=0x00000000002B20B8 "uR"
 *   insn=0x00000000002B20BC string=0x00000000002B20C0 "@"
 *   insn=0x00000000002B20BC string=0x00000000002B20DC "`N@"
 *   insn=0x00000000002B20C0 string=0x00000000002B20C4 ""
 *   insn=0x00000000002B20C4 string=0x00000000002B20C8 ""
 *   insn=0x00000000002B20CC string=0x00000000002B20D0 ""
 *   insn=0x00000000002B20D0 string=0x00000000002B20D4 ""
 *   insn=0x00000000002B20DC string=0x00000000002B20E0 "uF"
 *   insn=0x00000000002B20E4 string=0x00000000002B20E8 "@"
 *   insn=0x00000000002B20E8 string=0x00000000002B20EC ""
 *   insn=0x00000000002B20EC string=0x00000000002B20F0 ""
 *   insn=0x00000000002B20F4 string=0x00000000002B20F8 ""
 *   insn=0x00000000002B20F8 string=0x00000000002B20FC ""
 *   insn=0x00000000002B2104 string=0x00000000002B2108 "`B@"
 *   insn=0x00000000002B2108 string=0x00000000002B210C ""
 *   insn=0x00000000002B210C string=0x00000000002B2110 "A"
 *   insn=0x00000000002B2110 string=0x00000000002B2114 "h:"
 *   insn=0x00000000002B2118 string=0x00000000002B211C "@"
 *   insn=0x00000000002B211C string=0x00000000002B2120 ""
 *   insn=0x00000000002B2120 string=0x00000000002B2124 ""
 *   insn=0x00000000002B2128 string=0x00000000002B212C ""
 *   insn=0x00000000002B212C string=0x00000000002B2130 ""
 *   insn=0x00000000002B2148 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B2160 string=0x00000000002B2164 "`N@"
 *   insn=0x00000000002B2164 string=0x00000000002B2168 "A"
 *   insn=0x00000000002B2168 string=0x00000000002B216C "hF"
 *   insn=0x00000000002B2170 string=0x00000000002B2174 "@"
 *   insn=0x00000000002B2174 string=0x00000000002B2178 ""
 *   insn=0x00000000002B2178 string=0x00000000002B217C ""
 *   insn=0x00000000002B2180 string=0x00000000002B2184 ""
 *   insn=0x00000000002B2184 string=0x00000000002B2188 ""
 *   insn=0x00000000002B2190 string=0x00000000002B2194 "`B@"
 *   insn=0x00000000002B2194 string=0x00000000002B2198 ""
 *   insn=0x00000000002B2198 string=0x00000000002B219C "A"
 *   insn=0x00000000002B219C string=0x00000000002B21A0 "h:"
 *   insn=0x00000000002B21A4 string=0x00000000002B21A8 "@"
 *   insn=0x00000000002B21A8 string=0x00000000002B21AC ""
 *   insn=0x00000000002B21AC string=0x00000000002B21B0 ""
 *   insn=0x00000000002B21B4 string=0x00000000002B21B8 ""
 *   insn=0x00000000002B21B8 string=0x00000000002B21BC ""
 *   insn=0x00000000002B21D0 string=0x00000000002B21D4 "^p"
 *   insn=0x00000000002B21E4 string=0x00000000002B21E8 ">#"
 *   insn=0x00000000002B21E8 string=0x00000000001FAEE0 "0'"
 *   insn=0x00000000002B21F4 string=0x00000000002B21F8 "."
 *   insn=0x00000000002B2200 string=0x00000000002B2204 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BushControllerComponent::HandleMessage(
        Caver::BushControllerComponent *this,
        int a2,
        _QWORD *a3)
{
  __int64 v5; // x20
  __int64 v6; // x0
  Caver::SceneObject *v7; // x20
  int v8; // w8
  __int64 v9; // x0
  int v10; // w8
  void *v11; // x0
  __int64 v12; // x8
  Caver::SceneObject *v13; // x20
  __int64 v14; // x9
  int v15; // w9
  _DWORD *v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  Caver::SoundEffectComponent *v20; // x0
  Caver::ShatterComponent *v21; // x20
  _QWORD *v22; // x21
  Caver::ModelComponent *v23; // x1
  _QWORD *v24; // x20
  __int64 v25; // x8
  Caver::SoundEffectComponent *v26; // x0
  Caver::GameEvent *v27; // x0
  Caver::GameEvent *v28; // x1
  void *v29; // x0
  Caver::ItemDropComponent *v30; // x20
  Caver::SceneObject *v31; // x0
  int v32; // w8
  unsigned int *v33; // x8
  int v34; // w9
  unsigned int *v35; // x8
  int v36; // w9
  __int64 v37; // [xsp+38h] [xbp-68h] BYREF
  int v38; // [xsp+40h] [xbp-60h]
  Caver::SceneObject *v39; // [xsp+50h] [xbp-50h] BYREF
  _QWORD v40[2]; // [xsp+60h] [xbp-40h] BYREF

  v40[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 != 7 || *((_BYTE *)this + 184) )
    return 0;
  v5 = a3[1];
  if ( *(_BYTE *)(v5 + 381) )
  {
    v6 = Caver::SceneObject::ComponentWithInterface(
           *(Caver::SceneObject **)(v5 + 40),
           (__int64)Caver::DamageComponent::Interface);
    if ( !v6 || !*(_DWORD *)(v6 + 180) )
      return 0;
    v7 = (Caver::SceneObject *)operator new(0x128u);
    Caver::SceneObject::SceneObject(v7);
    v8 = *((_DWORD *)v7 + 2);
    v39 = v7;
    *((_DWORD *)v7 + 2) = v8 + 1;
    sub_566BB8((int)v40, "effect_shatter");
    Caver::ObjectLibrary::TemplateForName();
    Caver::SceneObject::InitWithTemplate(v7);
    v9 = v37;
    if ( v37 )
    {
      v10 = *(_DWORD *)(v37 + 8) - 1;
      *(_DWORD *)(v37 + 8) = v10;
      if ( !v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
    v11 = (void *)(v40[0] - 24LL);
    if ( (__int64 *)(v40[0] - 24LL) != &qword_6FD2E0 )
    {
      v33 = (unsigned int *)(v40[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v34 = __ldaxr(v33);
        while ( __stlxr(v34 - 1, v33) );
      }
      else
      {
        v34 = (*v33)--;
      }
      if ( v34 <= 0 )
        operator delete(v11);
    }
    v12 = *((_QWORD *)this + 5);
    v13 = v39;
    v14 = *(_QWORD *)(v12 + 112);
    LODWORD(v12) = *(_DWORD *)(v12 + 120);
    v37 = v14;
    v38 = v12;
    Caver::Vector2::Vector2((Caver::Vector2 *)v40, (const Caver::Vector3 *)&v37);
    if ( fabsf(*(float *)v40 - *((float *)v13 + 28)) <= 0.0001 )
    {
      v16 = (_DWORD *)((char *)v13 + 116);
      if ( fabsf(*((float *)v40 + 1) - *((float *)v13 + 29)) <= 0.0001 )
      {
LABEL_28:
        *((_DWORD *)v13 + 30) = v38;
        (*(void (__fastcall **)(_QWORD, Caver::SceneObject **))(**(_QWORD **)(*((_QWORD *)this + 5) + 32LL) + 40LL))(
          *(_QWORD *)(*((_QWORD *)this + 5) + 32LL),
          &v39);
        v21 = (Caver::ShatterComponent *)Caver::SceneObject::ComponentWithInterface(
                                           v39,
                                           (__int64)Caver::ShatterComponent::Interface);
        v22 = (_QWORD *)*((_QWORD *)this + 16);
        if ( !v22 )
        {
          Caver::ComponentOutletBase::Connect((Caver::BushControllerComponent *)((char *)this + 112), this);
          v22 = (_QWORD *)*((_QWORD *)this + 16);
        }
        v23 = (Caver::ModelComponent *)v22[16];
        if ( !v23 )
        {
          Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v22 + 14), (const Caver::Component *)v22);
          v23 = (Caver::ModelComponent *)v22[16];
        }
        Caver::ShatterComponent::ShatterModel(v21, v23, 1);
        v24 = (_QWORD *)*((_QWORD *)this + 16);
        if ( !v24 )
        {
          Caver::ComponentOutletBase::Connect((Caver::BushControllerComponent *)((char *)this + 112), this);
          v24 = (_QWORD *)*((_QWORD *)this + 16);
        }
        v25 = v24[16];
        if ( !v25 )
        {
          Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v24 + 14), (const Caver::Component *)v24);
          v25 = v24[16];
        }
        *(_BYTE *)(v25 + 308) = 1;
        v26 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 22);
        if ( v26
          || (Caver::ComponentOutletBase::Connect((Caver::BushControllerComponent *)((char *)this + 160), this),
              (v26 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 22)) != 0) )
        {
          Caver::SoundEffectComponent::Play(v26);
        }
        *((_BYTE *)this + 184) = 1;
        sub_566BB8((int)&v37, "bushes");
        v27 = (Caver::GameEvent *)Caver::GameEvent::NewCounterEvent();
        Caver::GameEvent::SendEvent(v27, v28);
        v29 = (void *)(v37 - 24);
        if ( (__int64 *)(v37 - 24) != &qword_6FD2E0 )
        {
          v35 = (unsigned int *)(v37 - 8);
          if ( &pthread_create )
          {
            do
              v36 = __ldaxr(v35);
            while ( __stlxr(v36 - 1, v35) );
          }
          else
          {
            v36 = (*v35)--;
          }
          if ( v36 <= 0 )
            operator delete(v29);
        }
        v30 = (Caver::ItemDropComponent *)Caver::SceneObject::ComponentWithInterface(
                                            *((Caver::SceneObject **)this + 5),
                                            (__int64)Caver::ItemDropComponent::Interface);
        if ( !v30 )
        {
          v30 = (Caver::ItemDropComponent *)operator new(0xB0u);
          Caver::ItemDropComponent::ItemDropComponent(v30);
          *((_BYTE *)v30 + 113) = 1;
          Caver::SceneObject::AddComponent(*((Caver::SceneObject **)this + 5), v30);
        }
        Caver::ItemDropComponent::Trigger(v30);
        v31 = v39;
        if ( v39 )
        {
          v32 = *((_DWORD *)v39 + 2) - 1;
          *((_DWORD *)v39 + 2) = v32;
          if ( !v32 )
            (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v31 + 8LL))(v31);
        }
        return 0;
      }
      v15 = HIDWORD(v40[0]);
    }
    else
    {
      v15 = HIDWORD(v40[0]);
      v16 = (_DWORD *)((char *)v13 + 116);
    }
    *((_DWORD *)v13 + 28) = v40[0];
    *v16 = v15;
    if ( !*((_BYTE *)v13 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate(v13);
      *((_BYTE *)v13 + 180) = 1;
    }
    goto LABEL_28;
  }
  if ( *(_BYTE *)(v5 + 379) )
  {
    v17 = *((_QWORD *)this + 16);
    if ( !v17 )
    {
      Caver::ComponentOutletBase::Connect((Caver::BushControllerComponent *)((char *)this + 112), this);
      v17 = *((_QWORD *)this + 16);
    }
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 264LL))(v17);
    if ( !*(_BYTE *)(v18 + 44)
      && *(float *)(v18 + 12) > (float)(*(float *)(v18 + 40) + -0.0001)
      && (float)((float)(*(float *)(*(_QWORD *)(v5 + 40) + 104LL) * *(float *)(*(_QWORD *)(v5 + 40) + 104LL))
               + (float)(*(float *)(*(_QWORD *)(v5 + 40) + 108LL) * *(float *)(*(_QWORD *)(v5 + 40) + 108LL))) > 10000.0 )
    {
      v19 = *((_QWORD *)this + 16);
      if ( !v19 )
      {
        Caver::ComponentOutletBase::Connect((Caver::BushControllerComponent *)((char *)this + 112), this);
        v19 = *((_QWORD *)this + 16);
      }
      *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 264LL))(v19) + 12) = 0;
      v20 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 19);
      if ( v20
        || (Caver::ComponentOutletBase::Connect((Caver::BushControllerComponent *)((char *)this + 136), this),
            (v20 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 19)) != 0) )
      {
        Caver::SoundEffectComponent::Play(v20);
      }
    }
  }
  return 0;
}

