/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1468
 * Mangled: _ZN5Caver12ProgramState16RemoveChildStateERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::ProgramState::RemoveChildState(boost::shared_ptr<Caver::ProgramState> const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202DA0  std::list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>::remove(boost::shared_ptr<Caver::ProgramState> const&)
 *
 * Referenced strings: 7
 *   insn=0x00000000004C1474 string=0x00000000004C1478 "h"
 *   insn=0x00000000004C1488 string=0x00000000004C148C "@"
 *   insn=0x00000000004C148C string=0x00000000004C1490 ""
 *   insn=0x00000000004C1490 string=0x00000000004C1494 ""
 *   insn=0x00000000004C1498 string=0x00000000004C149C ""
 *   insn=0x00000000004C149C string=0x00000000004C14A0 ""
 *   insn=0x00000000004C14B4 string=0x00000000004C14B8 ":"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::RemoveChildState(__int64 a1, __int64 a2)
{
  _DWORD *v2; // x0
  int v3; // w8

  v2 = *(_DWORD **)(*(_QWORD *)a2 + 32LL);
  *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0;
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return std::list<boost::shared_ptr<Caver::ProgramState>>::remove();
}

