/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C7C8C
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::SwingableWeaponControllerComponent::InitWithComponent(Caver::SwingableWeaponControllerComponent const*)
 *
 * Callers: 1
 *   0x00000000002C76B8  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 16
 *   insn=0x00000000002C7CA4 string=0x00000000002C7CA8 "`"
 *   insn=0x00000000002C7CA8 string=0x00000000002C7CAC "h""
 *   insn=0x00000000002C7CAC string=0x00000000002C7CB0 "~"
 *   insn=0x00000000002C7CB4 string=0x00000000002C7CB8 "iz@"
 *   insn=0x00000000002C7CB8 string=0x00000000002C7CBC "?"
 *   insn=0x00000000002C7CC0 string=0x00000000002C7CC4 "`B@"
 *   insn=0x00000000002C7CC4 string=0x00000000002C7CC8 "hz"
 *   insn=0x00000000002C7CD0 string=0x00000000002C7CD4 "@"
 *   insn=0x00000000002C7CD4 string=0x00000000002C7CD8 ""
 *   insn=0x00000000002C7CD8 string=0x00000000002C7CDC ""
 *   insn=0x00000000002C7CE0 string=0x00000000002C7CE4 ""
 *   insn=0x00000000002C7CE4 string=0x00000000002C7CE8 ""
 *   insn=0x00000000002C7CF0 string=0x00000000002C7CF4 "`""
 *   insn=0x00000000002C7CF4 string=0x00000000002C7CF8 "l"
 *   insn=0x00000000002C7D00 string=0x00000000002C7D04 "`B"
 *   insn=0x00000000002C7D08 string=0x00000000002C7D0C "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::InitWithComponent(
        Caver::SwingableWeaponControllerComponent *this,
        const Caver::SwingableWeaponControllerComponent *a2)
{
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  v4 = *((_DWORD *)a2 + 30);
  if ( *((_DWORD *)this + 30) != v4 )
  {
    v5 = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v4;
    *((_QWORD *)this + 16) = 0;
    if ( v5 )
    {
      v6 = v5[2] - 1;
      v5[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  sub_56A6A8((char *)this + 136);
  return sub_56A6A8((char *)this + 144);
}

