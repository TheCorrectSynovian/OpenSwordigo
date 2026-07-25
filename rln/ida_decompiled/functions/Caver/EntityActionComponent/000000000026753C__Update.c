/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026753C
 * Mangled: _ZN5Caver21EntityActionComponent6UpdateEf
 * Demangled: Caver::EntityActionComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5160  Caver::SceneObject::updateSpeedMultiplier(void)
 *
 * Referenced strings: 17
 *   insn=0x0000000000267558 string=0x000000000026755C "`V"
 *   insn=0x0000000000267558 string=0x00000000001F5160 "P'"
 *   insn=0x0000000000267560 string=0x0000000000267564 "MA9("
 *   insn=0x0000000000267564 string=0x0000000000267568 "("
 *   insn=0x0000000000267574 string=0x0000000000267578 "h"
 *   insn=0x0000000000267578 string=0x000000000026757C ""
 *   insn=0x000000000026757C string=0x0000000000267580 "h"
 *   insn=0x0000000000267580 string=0x0000000000267584 "A"
 *   insn=0x0000000000267584 string=0x0000000000267588 "h"
 *   insn=0x000000000026758C string=0x0000000000267590 "\t@"
 *   insn=0x0000000000267594 string=0x0000000000267598 "h\n@"
 *   insn=0x0000000000267598 string=0x000000000026759C ""
 *   insn=0x000000000026759C string=0x00000000002675A0 "h\n"
 *   insn=0x00000000002675A0 string=0x00000000002675A4 "A"
 *   insn=0x00000000002675A4 string=0x00000000002675A8 "h"
 *   insn=0x00000000002675B8 string=0x00000000002675BC " "
 *   insn=0x00000000002675C0 string=0x00000000002675C4 " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::EntityActionComponent::Update(Caver::EntityActionComponent *this, float a2)
{
  __int64 v3; // x19
  float result; // s0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8

  v3 = *((_QWORD *)this + 19);
  if ( v3 )
  {
    Caver::SceneObject::updateSpeedMultiplier(*((Caver::SceneObject **)this + 5));
    *(float *)(v3 + 84) = result;
    if ( *(_BYTE *)(*((_QWORD *)this + 19) + 83LL) )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 20);
      *((_QWORD *)this + 19) = 0;
      *((_QWORD *)this + 20) = 0;
      if ( v5 )
      {
        v6 = v5[1] - 1LL;
        v5[1] = v6;
        if ( !v6 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
          v7 = v5[2] - 1LL;
          v5[2] = v7;
          if ( !v7 )
            (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
        }
      }
    }
  }
  else
  {
    result = *((float *)this + 42) + a2;
    *((float *)this + 42) = result;
  }
  return result;
}

