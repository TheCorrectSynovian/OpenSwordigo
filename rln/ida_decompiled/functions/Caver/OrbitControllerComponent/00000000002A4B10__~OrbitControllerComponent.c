/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4B10
 * Mangled: _ZN5Caver24OrbitControllerComponentD2Ev
 * Demangled: Caver::OrbitControllerComponent::~OrbitControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002A4C28  Caver::OrbitControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 36
 *   insn=0x00000000002A4B18 string=0x00000000002A4B1C """
 *   insn=0x00000000002A4B1C string=0x00000000002A4B20 ""
 *   insn=0x00000000002A4B24 string=0x00000000002A4B28 "`:@"
 *   insn=0x00000000002A4B28 string=0x00000000002A4B2C "\n"
 *   insn=0x00000000002A4B2C string=0x00000000002A4B30 "\tA"
 *   insn=0x00000000002A4B30 string=0x00000000002A4B34 "@"
 *   insn=0x00000000002A4B34 string=0x00000000002A4B38 ""
 *   insn=0x00000000002A4B3C string=0x00000000002A4B40 "i"
 *   insn=0x00000000002A4B40 string=0x00000000002A4B44 "`"
 *   insn=0x00000000002A4B48 string=0x00000000002A4B4C "@"
 *   insn=0x00000000002A4B4C string=0x00000000002A4B50 ""
 *   insn=0x00000000002A4B50 string=0x00000000002A4B54 ""
 *   insn=0x00000000002A4B58 string=0x00000000002A4B5C ""
 *   insn=0x00000000002A4B5C string=0x00000000002A4B60 ""
 *   insn=0x00000000002A4B70 string=0x00000000002A4B74 "WV"
 *   insn=0x00000000002A4B74 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002A4B7C string=0x00000000002A4B80 "TV"
 *   insn=0x00000000002A4B84 string=0x00000000002A4B88 "Os"
 *   insn=0x00000000002A4B98 string=0x00000000002A4B9C """
 *   insn=0x00000000002A4B9C string=0x00000000002A4BA0 ""
 *   insn=0x00000000002A4BA4 string=0x00000000002A4BA8 "`:@"
 *   insn=0x00000000002A4BA8 string=0x00000000002A4BAC "\n"
 *   insn=0x00000000002A4BAC string=0x00000000002A4BB0 "\tA"
 *   insn=0x00000000002A4BB0 string=0x00000000002A4BB4 "@"
 *   insn=0x00000000002A4BB4 string=0x00000000002A4BB8 ""
 *   insn=0x00000000002A4BBC string=0x00000000002A4BC0 "i"
 *   insn=0x00000000002A4BC0 string=0x00000000002A4BC4 "`"
 *   insn=0x00000000002A4BC8 string=0x00000000002A4BCC "@"
 *   insn=0x00000000002A4BCC string=0x00000000002A4BD0 ""
 *   insn=0x00000000002A4BD0 string=0x00000000002A4BD4 ""
 *   insn=0x00000000002A4BD8 string=0x00000000002A4BDC ""
 *   insn=0x00000000002A4BDC string=0x00000000002A4BE0 ""
 *   insn=0x00000000002A4BE8 string=0x00000000002A4BEC "9V"
 *   insn=0x00000000002A4BFC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A4C04 string=0x00000000002A4C08 "2V"
 *   insn=0x00000000002A4C20 string=0x00000000002A4C24 "(s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OrbitControllerComponent::~OrbitControllerComponent(Caver::OrbitControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 14);
  *(_QWORD *)&v3 = &off_6C3328;
  *((_QWORD *)&v3 + 1) = &off_6C3368;
  *(_QWORD *)this = off_6C3210;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::Component::~Component(this);
}

