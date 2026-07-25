/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B69B8
 * Mangled: _ZN5Caver27RotatingBackgroundComponentD0Ev
 * Demangled: Caver::RotatingBackgroundComponent::~RotatingBackgroundComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002B6A74  Caver::RotatingBackgroundComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x00000000002B69C0 string=0x00000000002B69C4 "h!"
 *   insn=0x00000000002B69C4 string=0x00000000002B69C8 ""
 *   insn=0x00000000002B69CC string=0x00000000002B69D0 "tF@"
 *   insn=0x00000000002B69D0 string=0x00000000002B69D4 "\n"
 *   insn=0x00000000002B69D4 string=0x00000000002B69D8 "\tA"
 *   insn=0x00000000002B69D8 string=0x00000000002B69DC "@"
 *   insn=0x00000000002B69DC string=0x00000000002B69E0 ""
 *   insn=0x00000000002B69E4 string=0x00000000002B69E8 "i"
 *   insn=0x00000000002B69E8 string=0x00000000002B69EC "`"
 *   insn=0x00000000002B69EC string=0x00000000002B69F0 "4"
 *   insn=0x00000000002B69F4 string=0x00000000002B69F8 ""
 *   insn=0x00000000002B6A04 string=0x00000000002B6A08 "\t@"
 *   insn=0x00000000002B6A14 string=0x00000000002B6A18 ""
 *   insn=0x00000000002B6A24 string=0x00000000002B6A28 "@"
 *   insn=0x00000000002B6A38 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B6A48 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::RotatingBackgroundComponent::~RotatingBackgroundComponent(
        Caver::RotatingBackgroundComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 17);
  *(_QWORD *)&v3 = &off_6B9BC0;
  *((_QWORD *)&v3 + 1) = &off_6B9C00;
  *(_QWORD *)this = off_6B9AA0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::Component::~Component(this);
  operator delete(this);
}

