/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CD38
 * Mangled: _ZN5Caver25EntityControllerComponent13PerformActionERKN5boost13intrusive_ptrINS_21EntityActionComponentEEE
 * Demangled: Caver::EntityControllerComponent::PerformAction(boost::intrusive_ptr<Caver::EntityActionComponent> const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F43F0  Caver::EntityActionComponent::Perform(void)
 *
 * Referenced strings: 11
 *   insn=0x000000000026CD44 string=0x000000000026CD48 "h"
 *   insn=0x000000000026CD50 string=0x000000000026CD54 "\t\t@"
 *   insn=0x000000000026CD54 string=0x000000000026CD58 ")"
 *   insn=0x000000000026CD58 string=0x000000000026CD5C "\t\t"
 *   insn=0x000000000026CD68 string=0x000000000026CD6C "@"
 *   insn=0x000000000026CD6C string=0x000000000026CD70 ""
 *   insn=0x000000000026CD70 string=0x000000000026CD74 ""
 *   insn=0x000000000026CD78 string=0x000000000026CD7C ""
 *   insn=0x000000000026CD7C string=0x000000000026CD80 ""
 *   insn=0x000000000026CD8C string=0x000000000026CD90 "`"
 *   insn=0x000000000026CD9C string=0x00000000001F43F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::PerformAction(__int64 a1, Caver::EntityActionComponent **a2)
{
  Caver::EntityActionComponent *v3; // x8
  _DWORD *v5; // x0
  int v6; // w8

  v3 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v3 + 2);
  v5 = *(_DWORD **)(a1 + 280);
  *(_QWORD *)(a1 + 280) = v3;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  *(_BYTE *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 0;
  return Caver::EntityActionComponent::Perform(*a2);
}

