/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002133E0
 * Mangled: _ZNK5Caver12AnimKeysNode12timeToFinishEv
 * Demangled: Caver::AnimKeysNode::timeToFinish(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002133E4 string=0x00000000002133E8 "H"
 *   insn=0x00000000002133FC string=0x0000000000213400 "A#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::AnimKeysNode::timeToFinish(Caver::AnimKeysNode *this)
{
  float result; // s0

  result = 0.0;
  if ( !*((_BYTE *)this + 44) )
    return (float)(*((float *)this + 10) - *((float *)this + 3))
         / (float)(*((float *)this + 12) * *((float *)this + 13));
  return result;
}

