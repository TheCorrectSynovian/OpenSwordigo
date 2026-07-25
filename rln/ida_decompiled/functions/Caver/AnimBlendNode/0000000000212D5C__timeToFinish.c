/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212D5C
 * Mangled: _ZNK5Caver13AnimBlendNode12timeToFinishEv
 * Demangled: Caver::AnimBlendNode::timeToFinish(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000212D6C string=0x0000000000212D70 "`\n@"
 *   insn=0x0000000000212D70 string=0x0000000000212D74 ""
 *   insn=0x0000000000212D74 string=0x0000000000212D78 ""
 *   insn=0x0000000000212D7C string=0x0000000000212D80 "`"
 *   insn=0x0000000000212D80 string=0x0000000000212D84 ""
 *   insn=0x0000000000212D84 string=0x0000000000212D88 ""
 *   insn=0x0000000000212D88 string=0x0000000000212D8C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AnimBlendNode::timeToFinish(Caver::AnimBlendNode *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2));
  (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
}

