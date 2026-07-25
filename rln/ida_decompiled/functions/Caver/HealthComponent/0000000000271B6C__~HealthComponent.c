/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271B6C
 * Mangled: _ZN5Caver15HealthComponentD2Ev
 * Demangled: Caver::HealthComponent::~HealthComponent()
 *
 * Callers: 1
 *   0x00000000001FD380  Caver::HealthComponent::~HealthComponent()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FD380  Caver::HealthComponent::~HealthComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000271CAC  Caver::HealthComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 36
 *   insn=0x0000000000271B7C string=0x0000000000271B80 "5E"
 *   insn=0x0000000000271B84 string=0x0000000000271B88 "t^@"
 *   insn=0x0000000000271B88 string=0x0000000000271B8C "\n"
 *   insn=0x0000000000271B8C string=0x0000000000271B90 "\tA"
 *   insn=0x0000000000271B90 string=0x0000000000271B94 "@"
 *   insn=0x0000000000271B94 string=0x0000000000271B98 ""
 *   insn=0x0000000000271B9C string=0x0000000000271BA0 "i"
 *   insn=0x0000000000271BA0 string=0x0000000000271BA4 "`"
 *   insn=0x0000000000271BA4 string=0x0000000000271BA8 "T"
 *   insn=0x0000000000271BA8 string=0x0000000000271BF0 "`:@"
 *   insn=0x0000000000271BAC string=0x0000000000271BB0 "@"
 *   insn=0x0000000000271BB4 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000271BB8 string=0x0000000000271BBC "@"
 *   insn=0x0000000000271BC8 string=0x0000000000271BCC "@"
 *   insn=0x0000000000271BCC string=0x0000000000271BD0 ""
 *   insn=0x0000000000271BD0 string=0x0000000000271BD4 ""
 *   insn=0x0000000000271BD8 string=0x0000000000271BDC ""
 *   insn=0x0000000000271BDC string=0x0000000000271BE0 ""
 *   insn=0x0000000000271BEC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000271BF4 string=0x0000000000271BF8 "@"
 *   insn=0x0000000000271BF8 string=0x0000000000271BFC ""
 *   insn=0x0000000000271BFC string=0x0000000000271C00 ""
 *   insn=0x0000000000271C04 string=0x0000000000271C08 ""
 *   insn=0x0000000000271C08 string=0x0000000000271C0C ""
 *   insn=0x0000000000271C20 string=0x0000000000271C24 "+""
 *   insn=0x0000000000271C24 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000271C30 string=0x0000000000271C34 "`:@"
 *   insn=0x0000000000271C34 string=0x0000000000271C38 "@"
 *   insn=0x0000000000271C38 string=0x0000000000271C3C "@"
 *   insn=0x0000000000271C3C string=0x0000000000271C40 ""
 *   insn=0x0000000000271C40 string=0x0000000000271C44 ""
 *   insn=0x0000000000271C48 string=0x0000000000271C4C ""
 *   insn=0x0000000000271C4C string=0x0000000000271C50 ""
 *   insn=0x0000000000271C60 string=0x0000000000271C64 """
 *   insn=0x0000000000271C84 string=0x00000000001FD380 "0'"
 *   insn=0x0000000000271CA4 string=0x0000000000271CA8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HealthComponent::~HealthComponent(Caver::HealthComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  void *v4; // x0
  void *v5; // x0
  _DWORD *v6; // x0
  int v7; // w8
  _DWORD *v8; // x0
  int v9; // w8

  v2 = (_QWORD *)*((_QWORD *)this + 23);
  *(_QWORD *)&v3 = &off_6BF158;
  *((_QWORD *)&v3 + 1) = &off_6BF198;
  *(_QWORD *)this = off_6BF040;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = (void *)v2[7];
    if ( v4 )
      operator delete[](v4);
    v5 = (void *)v2[4];
    if ( v5 )
      operator delete[](v5);
    v6 = (_DWORD *)*v2;
    if ( *v2 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    operator delete(v2);
  }
  v8 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  Caver::Component::~Component(this);
}

