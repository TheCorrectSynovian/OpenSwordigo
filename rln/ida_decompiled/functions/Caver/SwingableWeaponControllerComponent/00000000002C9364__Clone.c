/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C9364
 * Mangled: _ZNK5Caver34SwingableWeaponControllerComponent5CloneEv
 * Demangled: Caver::SwingableWeaponControllerComponent::Clone(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002023A0  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *   0x00000000002C9410  Caver::SwingableWeaponControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x00000000002C9378 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C937C string=0x00000000002C9380 ""
 *   insn=0x00000000002C9388 string=0x00000000002C938C "`"
 *   insn=0x00000000002C938C string=0x00000000002C9390 "h""
 *   insn=0x00000000002C9398 string=0x00000000002C939C "iz@"
 *   insn=0x00000000002C939C string=0x00000000002C93A0 "?"
 *   insn=0x00000000002C93A4 string=0x00000000002C93A8 "`B@"
 *   insn=0x00000000002C93A8 string=0x00000000002C93AC "hz"
 *   insn=0x00000000002C93B4 string=0x00000000002C93B8 "@"
 *   insn=0x00000000002C93B8 string=0x00000000002C93BC ""
 *   insn=0x00000000002C93BC string=0x00000000002C93C0 ""
 *   insn=0x00000000002C93C4 string=0x00000000002C93C8 ""
 *   insn=0x00000000002C93C8 string=0x00000000002C93CC ""
 *   insn=0x00000000002C93D4 string=0x00000000002C93D8 "`""
 *   insn=0x00000000002C93E0 string=0x00000000002C93E4 "`B"
 *   insn=0x00000000002C9404 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C9408 string=0x00000000002C940C "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::Clone(Caver::SwingableWeaponControllerComponent *this)
{
  __int64 v2; // x19
  int v3; // w8
  _DWORD *v4; // x0
  int v5; // w8

  v2 = operator new(0xB0u);
  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent((Caver::SwingableWeaponControllerComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  v3 = *((_DWORD *)this + 30);
  if ( *(_DWORD *)(v2 + 120) != v3 )
  {
    v4 = *(_DWORD **)(v2 + 128);
    *(_DWORD *)(v2 + 120) = v3;
    *(_QWORD *)(v2 + 128) = 0;
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  sub_56A6A8(v2 + 136);
  sub_56A6A8(v2 + 144);
  return v2;
}

