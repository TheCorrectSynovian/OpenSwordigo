/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004497A8
 * Mangled: _ZN5Caver13MeshOptimizer12UpdateBoundsEv
 * Demangled: Caver::MeshOptimizer::UpdateBounds(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F63E0  Caver::Box::ExpandToIncludePoint(Caver::Vector3 const&)
 *
 * Referenced strings: 14
 *   insn=0x00000000004497B8 string=0x00000000004497BC "h"
 *   insn=0x00000000004497BC string=0x00000000004497C0 "("
 *   insn=0x00000000004497C4 string=0x00000000004497C8 "n"
 *   insn=0x00000000004497C8 string=0x00000000004497CC ")"
 *   insn=0x00000000004497CC string=0x00000000004497D0 "*1@)-\t@"
 *   insn=0x00000000004497D0 string=0x00000000004497D4 "-\t@"
 *   insn=0x00000000004497DC string=0x00000000004497E0 ""
 *   insn=0x00000000004497E4 string=0x00000000004497E8 "J"
 *   insn=0x00000000004497E8 string=0x00000000004497EC "I-@)N\t@"
 *   insn=0x00000000004497EC string=0x00000000004497F0 "N\t@"
 *   insn=0x0000000000449820 string=0x0000000000449824 "h"
 *   insn=0x0000000000449830 string=0x0000000000449834 "h"
 *   insn=0x0000000000449830 string=0x00000000001F63E0 "0'"
 *   insn=0x0000000000449840 string=0x0000000000449844 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshOptimizer::UpdateBounds(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  int *v3; // x14
  int v4; // w10
  int v5; // w12
  int v6; // w13
  int v7; // w9
  int v8; // w11
  int v9; // w14
  __int64 v10; // x21
  __int64 v11; // x22

  v1 = this;
  v2 = *(_DWORD *)(this + 16);
  if ( v2 )
  {
    v3 = *(int **)(this + 24);
    v4 = Caver::Vector3Zero;
    v5 = HIDWORD(Caver::Vector3Zero);
    v6 = dword_6E9F38;
    v7 = *v3;
    v8 = v3[1];
    v9 = v3[2];
  }
  else
  {
    v7 = Caver::Vector3Zero;
    v8 = HIDWORD(Caver::Vector3Zero);
    v9 = dword_6E9F38;
    v4 = Caver::Vector3Zero;
    v5 = HIDWORD(Caver::Vector3Zero);
    v6 = dword_6E9F38;
  }
  *(_DWORD *)(this + 48) = v7;
  *(_DWORD *)(this + 52) = v8;
  *(_DWORD *)(this + 56) = v9;
  *(_DWORD *)(this + 60) = v4;
  *(_DWORD *)(this + 64) = v5;
  *(_DWORD *)(this + 68) = v6;
  if ( v2 >= 2 )
  {
    v10 = 1;
    v11 = 40;
    do
    {
      this = Caver::Box::ExpandToIncludePoint(
               (Caver::Box *)(v1 + 48),
               (const Caver::Vector3 *)(*(_QWORD *)(v1 + 24) + v11));
      ++v10;
      v11 += 40;
    }
    while ( v10 < *(int *)(v1 + 16) );
  }
  return this;
}

