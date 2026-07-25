/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AE9C8
 * Mangled: _ZN5Caver21PortalEffectComponentD2Ev
 * Demangled: Caver::PortalEffectComponent::~PortalEffectComponent()
 *
 * Callers: 1
 *   0x00000000001F5E00  Caver::PortalEffectComponent::~PortalEffectComponent()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5E00  Caver::PortalEffectComponent::~PortalEffectComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002AEB18  Caver::PortalEffectComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x00000000002AE9D4 string=0x00000000002AE9D8 "aG"
 *   insn=0x00000000002AE9DC string=0x00000000002AE9E0 "`z@"
 *   insn=0x00000000002AE9E0 string=0x00000000002AE9E4 "\n"
 *   insn=0x00000000002AE9E4 string=0x00000000002AE9E8 "\tA"
 *   insn=0x00000000002AE9E8 string=0x00000000002AE9EC "@"
 *   insn=0x00000000002AE9EC string=0x00000000002AE9F0 ""
 *   insn=0x00000000002AE9F4 string=0x00000000002AE9F8 "i"
 *   insn=0x00000000002AE9F8 string=0x00000000002AE9FC "`"
 *   insn=0x00000000002AE9FC string=0x00000000002AEA00 "@"
 *   insn=0x00000000002AEA00 string=0x00000000002AEA04 "W"
 *   insn=0x00000000002AEA00 string=0x00000000002AEA08 "`r@"
 *   insn=0x00000000002AEA04 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002AEA08 string=0x00000000002AEA0C "@"
 *   insn=0x00000000002AEA0C string=0x00000000002AEA10 "T"
 *   insn=0x00000000002AEA14 string=0x00000000002AEA18 "`Z@"
 *   insn=0x00000000002AEA18 string=0x00000000002AEA1C "=D"
 *   insn=0x00000000002AEA1C string=0x00000000002AEA20 "A"
 *   insn=0x00000000002AEA20 string=0x00000000002AEA24 "hR"
 *   insn=0x00000000002AEA28 string=0x00000000002AEA2C "@"
 *   insn=0x00000000002AEA2C string=0x00000000002AEA30 ""
 *   insn=0x00000000002AEA30 string=0x00000000002AEA34 ""
 *   insn=0x00000000002AEA38 string=0x00000000002AEA3C ""
 *   insn=0x00000000002AEA3C string=0x00000000002AEA40 ""
 *   insn=0x00000000002AEA48 string=0x00000000002AEA4C "`N@"
 *   insn=0x00000000002AEA4C string=0x00000000002AEA50 ""
 *   insn=0x00000000002AEA50 string=0x00000000002AEA54 "A"
 *   insn=0x00000000002AEA54 string=0x00000000002AEA58 "hF"
 *   insn=0x00000000002AEA5C string=0x00000000002AEA60 "@"
 *   insn=0x00000000002AEA60 string=0x00000000002AEA64 ""
 *   insn=0x00000000002AEA64 string=0x00000000002AEA68 ""
 *   insn=0x00000000002AEA6C string=0x00000000002AEA70 ""
 *   insn=0x00000000002AEA70 string=0x00000000002AEA74 ""
 *   insn=0x00000000002AEA88 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002AEA98 string=0x00000000002AEA9C "`N@"
 *   insn=0x00000000002AEA9C string=0x00000000002AEAA0 ""
 *   insn=0x00000000002AEAA0 string=0x00000000002AEAA4 "A"
 *   insn=0x00000000002AEAA4 string=0x00000000002AEAA8 "hF"
 *   insn=0x00000000002AEAAC string=0x00000000002AEAB0 "@"
 *   insn=0x00000000002AEAB0 string=0x00000000002AEAB4 ""
 *   insn=0x00000000002AEAB4 string=0x00000000002AEAB8 ""
 *   insn=0x00000000002AEABC string=0x00000000002AEAC0 ""
 *   insn=0x00000000002AEAC0 string=0x00000000002AEAC4 ""
 *   insn=0x00000000002AEAD4 string=0x00000000002AEAD8 "{K"
 *   insn=0x00000000002AEAF0 string=0x00000000001F5E00 "P'"
 *   insn=0x00000000002AEB00 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AEB10 string=0x00000000002AEB14 "lK"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalEffectComponent::~PortalEffectComponent(Caver::PortalEffectComponent *this)
{
  void *v2; // x0
  __int128 v3; // q0
  void *v4; // x0
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8

  v2 = (void *)*((_QWORD *)this + 30);
  *(_QWORD *)&v3 = &off_6C3C58;
  *((_QWORD *)&v3 + 1) = &off_6C3C98;
  *(_QWORD *)this = off_6C3B30;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
    operator delete[](v2);
  v4 = (void *)*((_QWORD *)this + 28);
  if ( v4 )
    operator delete[](v4);
  v5 = (_DWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 20) = off_6C3CD8;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 17) = off_6C3D28;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  Caver::Component::~Component(this);
}

