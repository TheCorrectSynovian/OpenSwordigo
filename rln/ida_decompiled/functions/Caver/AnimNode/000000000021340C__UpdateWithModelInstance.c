/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021340C
 * Mangled: _ZN5Caver8AnimNode23UpdateWithModelInstanceEfPNS_13ModelInstanceE
 * Demangled: Caver::AnimNode::UpdateWithModelInstance(float,Caver::ModelInstance *)
 *
 * Callers: 1
 *   0x00000000001FCA10  Caver::AnimNode::UpdateWithModelInstance(float,Caver::ModelInstance *)
 *
 * Callees: 1
 *   0x00000000001F9010  Caver::ModelInstance::ExtractSkeletonDataFromBuffer(Caver::FloatDataBuffer const*)
 *
 * Referenced strings: 9
 *   insn=0x0000000000213420 string=0x0000000000213424 "\t@"
 *   insn=0x000000000021342C string=0x0000000000213430 "`"
 *   insn=0x0000000000213430 string=0x0000000000213434 "h"
 *   insn=0x0000000000213434 string=0x0000000000213438 "("
 *   insn=0x000000000021343C string=0x0000000000213440 ""
 *   insn=0x0000000000213448 string=0x000000000021344C ")"
 *   insn=0x0000000000213450 string=0x0000000000213454 " "
 *   insn=0x000000000021345C string=0x0000000000213460 ""
 *   insn=0x0000000000213478 string=0x00000000001F9010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AnimNode::UpdateWithModelInstance(Caver::AnimNode *this, float a2, Caver::ModelInstance *a3)
{
  char v5; // w0
  _QWORD *v6; // x8

  v5 = (*(__int64 (__fastcall **)(Caver::AnimNode *, float))(*(_QWORD *)this + 16LL))(this, a2);
  if ( a3 && (v5 & 1) != 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)a3 + 3);
    if ( v6 )
    {
      (*(void (__fastcall **)(Caver::AnimNode *, __int64, __int64))(*(_QWORD *)this + 32LL))(this, 2, *v6 + 16LL);
      (*(void (__fastcall **)(Caver::AnimNode *))(*(_QWORD *)this + 40LL))(this);
      Caver::ModelInstance::ExtractSkeletonDataFromBuffer();
    }
  }
}

