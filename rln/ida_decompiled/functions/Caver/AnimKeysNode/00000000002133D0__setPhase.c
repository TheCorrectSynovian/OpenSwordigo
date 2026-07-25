/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002133D0
 * Mangled: _ZN5Caver12AnimKeysNode8setPhaseEf
 * Demangled: Caver::AnimKeysNode::setPhase(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002133D0 string=0x00000000002133D4 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::AnimKeysNode::setPhase(Caver::AnimKeysNode *this, float a2)
{
  float result; // s0

  result = *((float *)this + 10) * a2;
  *((float *)this + 3) = result;
  return result;
}

