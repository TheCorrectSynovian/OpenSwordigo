/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022A1A0
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent10CreateLinkEv
 * Demangled: Caver::ObjectLinkControllerComponent::CreateLink(void)
 *
 * Callers: 1
 *   0x0000000000201540  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *
 * Callees: 11
 *   0x00000000001F54A0  Caver::Matrix4::RotationY(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9EC0  Caver::ObjectLinkControllerComponent::DestroyLink(void)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002012F0  Caver::ObjectLinkControllerComponent::LinkToObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002018F0  Caver::Scene::ObjectWithIdentifier(std::string const&)
 *   0x00000000002039A0  Caver::Matrix4::RotationX(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000568CB8  sub_568CB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x000000000022A1B0 string=0x000000000022A1B4 "U"
 *   insn=0x000000000022A1C0 string=0x000000000022A1C4 "??"
 *   insn=0x000000000022A1C4 string=0x00000000001F9EC0 "0'"
 *   insn=0x000000000022A1CC string=0x000000000022A1D0 ""
 *   insn=0x000000000022A1D0 string=0x000000000022A1D4 "H"
 *   insn=0x000000000022A1D4 string=0x000000000022A1D8 "h"
 *   insn=0x000000000022A1E8 string=0x000000000022A1EC "h:@"
 *   insn=0x000000000022A210 string=0x000000000022A214 "7\"
 *   insn=0x000000000022A21C string=0x000000000022A220 "@"
 *   insn=0x000000000022A220 string=0x000000000022A224 ""
 *   insn=0x000000000022A224 string=0x000000000022A228 ""
 *   insn=0x000000000022A22C string=0x000000000022A230 ""
 *   insn=0x000000000022A230 string=0x000000000022A234 ""
 *   insn=0x000000000022A260 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022A268 string=0x000000000022A26C "("
 *   insn=0x000000000022A26C string=0x000000000022A270 "\t\t@"
 *   insn=0x000000000022A270 string=0x000000000022A274 ")"
 *   insn=0x000000000022A274 string=0x000000000022A278 "\t\t"
 *   insn=0x000000000022A27C string=0x000000000022A280 "\t"
 *   insn=0x000000000022A280 string=0x000000000022A284 ")"
 *   insn=0x000000000022A288 string=0x000000000022A28C " "
 *   insn=0x000000000022A294 string=0x000000000022A298 "-"
 *   insn=0x000000000022A2B0 string=0x000000000022A2B4 "U"
 *   insn=0x000000000022A2BC string=0x000000000022A2C0 "JeB"
 *   insn=0x000000000022A2D0 string=0x000000000022A2D4 "A"
 *   insn=0x000000000022A2D4 string=0x000000000022A2D8 "C\t@"
 *   insn=0x000000000022A2D8 string=0x000000000022A2DC "\n"
 *   insn=0x000000000022A2E4 string=0x000000000022A2E8 ")"
 *   insn=0x000000000022A2E8 string=0x000000000022A2EC "\n"
 *   insn=0x000000000022A2EC string=0x000000000022A2F0 "I"
 *   insn=0x000000000022A2F0 string=0x000000000022A2F4 ")"
 *   insn=0x000000000022A2F8 string=0x000000000022A2FC "+"
 *   insn=0x000000000022A314 string=0x000000000022A318 "#"
 *   insn=0x000000000022A318 string=0x000000000022A31C "l"
 *   insn=0x000000000022A318 string=0x000000000022A35C "+E@"
 *   insn=0x000000000022A324 string=0x000000000022A328 "j"
 *   insn=0x000000000022A328 string=0x000000000022A32C "n"
 *   insn=0x000000000022A32C string=0x000000000022A330 "J"
 *   insn=0x000000000022A34C string=0x000000000022A350 "a"
 *   insn=0x000000000022A358 string=0x000000000022A36C "`"
 *   insn=0x000000000022A35C string=0x000000000022A360 "KE"
 *   insn=0x000000000022A360 string=0x000000000022A364 "_"
 *   insn=0x000000000022A370 string=0x000000000022A374 "5G"
 *   insn=0x000000000022A370 string=0x0000000000583734 "o"
 *   insn=0x000000000022A378 string=0x000000000022A37C "  ("
 *   insn=0x000000000022A37C string=0x000000000022A380 "-"
 *   insn=0x000000000022A380 string=0x000000000022A3A4 "`"
 *   insn=0x000000000022A39C string=0x000000000022A3A0 "h"
 *   insn=0x000000000022A3A8 string=0x000000000022A3AC "  ("
 *   insn=0x000000000022A3AC string=0x000000000022A3B0 "-"
 *   insn=0x000000000022A3B0 string=0x000000000022A3D4 "`"
 *   insn=0x000000000022A3B4 string=0x000000000022A3B8 ":,"
 *   insn=0x000000000022A3B8 string=0x00000000001F54A0 "P'"
 *   insn=0x000000000022A3CC string=0x000000000022A3D0 "h"
 *   insn=0x000000000022A3D8 string=0x000000000022A3DC "  ("
 *   insn=0x000000000022A3DC string=0x000000000022A3E0 "-"
 *   insn=0x000000000022A3E4 string=0x000000000022A3E8 "6F"
 *   insn=0x000000000022A3E8 string=0x00000000001FBCC0 "0'"
 *   insn=0x000000000022A3FC string=0x000000000022A400 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ObjectLinkControllerComponent::CreateLink(Caver::ObjectLinkControllerComponent *this)
{
  _DWORD *result; // x0
  int v3; // w8
  _DWORD *v4; // [xsp+80h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  result = (_DWORD *)Caver::ObjectLinkControllerComponent::DestroyLink(this);
  if ( *(_QWORD *)(*((_QWORD *)this + 14) - 24LL) )
  {
    Caver::Scene::ObjectWithIdentifier();
    result = (_DWORD *)sub_568CB8((char *)this + 112, 0, *(_QWORD *)(*((_QWORD *)this + 14) - 24LL), 0);
    if ( v4 )
    {
      Caver::ObjectLinkControllerComponent::LinkToObject();
      result = v4;
      v3 = v4[2] - 1;
      v4[2] = v3;
      if ( !v3 )
        return (_DWORD *)(*(__int64 (__fastcall **)())(*(_QWORD *)v4 + 8LL))();
    }
  }
  return result;
}

