/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E57FC
 * Mangled: _ZNK5Caver5Proto11GameOptions3NewEv
 * Demangled: Caver::Proto::GameOptions::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 11
 *   insn=0x00000000002E5804 string=0x00000000002E5808 "v?"
 *   insn=0x00000000002E5808 string=0x00000000002E580C ""
 *   insn=0x00000000002E5808 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E580C string=0x00000000002E5810 ""
 *   insn=0x00000000002E5814 string=0x00000000002E5818 " "
 *   insn=0x00000000002E5818 string=0x00000000002E581C "( "
 *   insn=0x00000000002E581C string=0x00000000002E5820 ""
 *   insn=0x00000000002E5820 string=0x00000000002E5824 " "
 *   insn=0x00000000002E5824 string=0x00000000002E5828 ""
 *   insn=0x00000000002E5834 string=0x00000000002E5838 "A"
 *   insn=0x00000000002E5848 string=0x00000000002E584C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::GameOptions::New(Caver::Proto::GameOptions *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x70u);
  *(_QWORD *)(v1 + 16) = v1 + 40;
  *(_DWORD *)(v1 + 32) = 4;
  *(_WORD *)(v1 + 72) = 257;
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 108) = 0;
  *(_QWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 96) = 0;
  *(_BYTE *)(v1 + 106) = 0;
  *(double *)(v1 + 76) = result;
  *(_QWORD *)v1 = off_6C6AC0;
  *(_WORD *)(v1 + 104) = 0;
  return result;
}

