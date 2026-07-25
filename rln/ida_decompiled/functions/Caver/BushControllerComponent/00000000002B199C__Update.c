/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B199C
 * Mangled: _ZN5Caver23BushControllerComponent6UpdateEf
 * Demangled: Caver::BushControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001F80C0  Caver::BushControllerComponent::Update(float)
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCA10  Caver::AnimNode::UpdateWithModelInstance(float,Caver::ModelInstance *)
 *
 * Referenced strings: 11
 *   insn=0x00000000002B19B4 string=0x00000000002B19B8 ""
 *   insn=0x00000000002B19C4 string=0x00000000002B19C8 "F"
 *   insn=0x00000000002B19C8 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B19CC string=0x00000000002B19D0 "`"
 *   insn=0x00000000002B19D8 string=0x00000000002B19F0 ""
 *   insn=0x00000000002B19F0 string=0x00000000002B19F4 ""
 *   insn=0x00000000002B1A30 string=0x00000000001FCA10 "0'"
 *   insn=0x00000000002B1A38 string=0x00000000002B1A3C ")"
 *   insn=0x00000000002B1A44 string=0x00000000002B1A48 "T"
 *   insn=0x00000000002B1A50 string=0x00000000002B1A54 "#"
 *   insn=0x00000000002B1A68 string=0x00000000002B1A6C "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BushControllerComponent::Update(Caver::BushControllerComponent *this, float a2)
{
  __int64 result; // x0
  __int64 v5; // x0
  _QWORD *v6; // x21
  Caver::AnimNode *v7; // x19
  _QWORD *v8; // x20
  Caver::ModelInstance *v9; // x1

  result = *((_QWORD *)this + 16);
  if ( result
    || (Caver::ComponentOutletBase::Connect((Caver::BushControllerComponent *)((char *)this + 112), this),
        (result = *((_QWORD *)this + 16)) != 0) )
  {
    if ( !*((_BYTE *)this + 184) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 264LL))(result);
      v6 = (_QWORD *)*((_QWORD *)this + 16);
      v7 = (Caver::AnimNode *)v5;
      if ( v6 )
      {
        v8 = (_QWORD *)v6[16];
        if ( v8 )
          goto LABEL_7;
      }
      else
      {
        Caver::ComponentOutletBase::Connect((Caver::BushControllerComponent *)((char *)this + 112), this);
        v6 = (_QWORD *)*((_QWORD *)this + 16);
        v8 = (_QWORD *)v6[16];
        if ( v8 )
        {
LABEL_7:
          v9 = (Caver::ModelInstance *)v8[17];
          if ( v9 )
            return Caver::AnimNode::UpdateWithModelInstance(v7, a2, v9);
LABEL_11:
          (*(void (__fastcall **)(_QWORD *))(*v8 + 64LL))(v8);
          v9 = (Caver::ModelInstance *)v8[17];
          return Caver::AnimNode::UpdateWithModelInstance(v7, a2, v9);
        }
      }
      Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v6 + 14), (const Caver::Component *)v6);
      v8 = (_QWORD *)v6[16];
      v9 = (Caver::ModelInstance *)v8[17];
      if ( v9 )
        return Caver::AnimNode::UpdateWithModelInstance(v7, a2, v9);
      goto LABEL_11;
    }
  }
  return result;
}

