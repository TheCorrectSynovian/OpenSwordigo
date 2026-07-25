/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241BE8
 * Mangled: _ZN5Caver28TransformControllerComponentD2Ev
 * Demangled: Caver::TransformControllerComponent::~TransformControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000241D00  Caver::TransformControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 33
 *   insn=0x0000000000241BF0 string=0x0000000000241BF4 "(%"
 *   insn=0x0000000000241BF4 string=0x0000000000241BF8 "MD"
 *   insn=0x0000000000241BFC string=0x0000000000241C00 "`^@"
 *   insn=0x0000000000241C00 string=0x0000000000241C04 "\n"
 *   insn=0x0000000000241C04 string=0x0000000000241C08 "\tA"
 *   insn=0x0000000000241C08 string=0x0000000000241C0C "@"
 *   insn=0x0000000000241C0C string=0x0000000000241C10 ""
 *   insn=0x0000000000241C14 string=0x0000000000241C18 "i"
 *   insn=0x0000000000241C18 string=0x0000000000241C1C "`"
 *   insn=0x0000000000241C20 string=0x0000000000241C24 "@"
 *   insn=0x0000000000241C24 string=0x0000000000241C28 ""
 *   insn=0x0000000000241C28 string=0x0000000000241C2C ""
 *   insn=0x0000000000241C30 string=0x0000000000241C34 ""
 *   insn=0x0000000000241C34 string=0x0000000000241C38 ""
 *   insn=0x0000000000241C48 string=0x0000000000241C4C "!"
 *   insn=0x0000000000241C4C string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000241C70 string=0x0000000000241C74 "(%"
 *   insn=0x0000000000241C74 string=0x0000000000241C78 "MD"
 *   insn=0x0000000000241C7C string=0x0000000000241C80 "`^@"
 *   insn=0x0000000000241C80 string=0x0000000000241C84 "\n"
 *   insn=0x0000000000241C84 string=0x0000000000241C88 "\tA"
 *   insn=0x0000000000241C88 string=0x0000000000241C8C "@"
 *   insn=0x0000000000241C8C string=0x0000000000241C90 ""
 *   insn=0x0000000000241C94 string=0x0000000000241C98 "i"
 *   insn=0x0000000000241C98 string=0x0000000000241C9C "`"
 *   insn=0x0000000000241CA0 string=0x0000000000241CA4 "@"
 *   insn=0x0000000000241CA4 string=0x0000000000241CA8 ""
 *   insn=0x0000000000241CA8 string=0x0000000000241CAC ""
 *   insn=0x0000000000241CB0 string=0x0000000000241CB4 ""
 *   insn=0x0000000000241CB4 string=0x0000000000241CB8 ""
 *   insn=0x0000000000241CD0 string=0x0000000000241CD4 "w"
 *   insn=0x0000000000241CD4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000241CF0 string=0x0000000000241CF4 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TransformControllerComponent::~TransformControllerComponent(
        Caver::TransformControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 23);
  *(_QWORD *)&v3 = &off_6BC538;
  *((_QWORD *)&v3 + 1) = &off_6BC578;
  *(_QWORD *)this = off_6BC420;
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

