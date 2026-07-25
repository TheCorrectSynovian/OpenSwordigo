/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212DAC
 * Mangled: _ZN5Caver12AnimKeysNodeC2Ev
 * Demangled: Caver::AnimKeysNode::AnimKeysNode(void)
 *
 * Callers: 1
 *   0x0000000000201790  Caver::AnimKeysNode::AnimKeysNode(void)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000212DAC string=0x0000000000212DB0 ""
 *   insn=0x0000000000212DB4 string=0x0000000000212DB8 ""
 *   insn=0x0000000000212DB8 string=0x0000000000212DBC "p"
 *   insn=0x0000000000212DC0 string=0x0000000000212DC4 "yG"
 *   insn=0x0000000000212DD0 string=0x0000000000212DD4 "A"
 *   insn=0x0000000000212DE0 string=0x0000000000212DE4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::AnimKeysNode::AnimKeysNode(Caver::AnimKeysNode *this)
{
  double result; // d0

  *((_DWORD *)this + 4) = -1;
  *((_BYTE *)this + 44) = 1;
  *((_WORD *)this + 28) = 1;
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)((char *)this + 28) = 0;
  *(_QWORD *)((char *)this + 20) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 16) = 0;
  *((double *)this + 6) = result;
  *(_QWORD *)this = off_6B9210;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 9) = 0;
  return result;
}

