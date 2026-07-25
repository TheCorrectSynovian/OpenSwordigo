/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000230C80
 * Mangled: _ZN5Caver15PortalComponent10DeactivateEv
 * Demangled: Caver::PortalComponent::Deactivate(void)
 *
 * Callers: 2
 *   0x00000000001F57E0  Caver::PortalComponent::Deactivate(void)
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000230C8C string=0x0000000000230C90 "\t"
 *   insn=0x0000000000230C94 string=0x0000000000230C98 "@"
 *   insn=0x0000000000230C98 string=0x0000000000230C9C ""
 *   insn=0x0000000000230C9C string=0x0000000000230CA0 ""
 *   insn=0x0000000000230CA0 string=0x0000000000230CA4 "@"
 *   insn=0x0000000000230CA4 string=0x0000000000230CAC ""
 *   insn=0x0000000000230CB0 string=0x0000000000230CB4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalComponent::Deactivate(Caver::PortalComponent *this)
{
  __int64 result; // x0
  int v3; // w8

  result = *((_QWORD *)this + 20);
  if ( result )
  {
    *(_BYTE *)(result + 232) = 1;
    *((_QWORD *)this + 20) = 0;
    v3 = *(_DWORD *)(result + 8) - 1;
    *(_DWORD *)(result + 8) = v3;
    if ( !v3 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

