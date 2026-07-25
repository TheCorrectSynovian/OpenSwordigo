/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267610
 * Mangled: _ZThn24_N5Caver21EntityActionComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::EntityActionComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5160  Caver::SceneObject::updateSpeedMultiplier(void)
 *
 * Referenced strings: 17
 *   insn=0x000000000026762C string=0x0000000000267630 "`V"
 *   insn=0x000000000026762C string=0x00000000001F5160 "P'"
 *   insn=0x0000000000267634 string=0x0000000000267638 "MA9("
 *   insn=0x0000000000267638 string=0x000000000026763C "("
 *   insn=0x0000000000267648 string=0x000000000026764C "h"
 *   insn=0x000000000026764C string=0x0000000000267650 ""
 *   insn=0x0000000000267650 string=0x0000000000267654 "h"
 *   insn=0x0000000000267654 string=0x0000000000267658 "A"
 *   insn=0x0000000000267658 string=0x000000000026765C "h"
 *   insn=0x0000000000267660 string=0x0000000000267664 "\t@"
 *   insn=0x0000000000267668 string=0x000000000026766C "h\n@"
 *   insn=0x000000000026766C string=0x0000000000267670 ""
 *   insn=0x0000000000267670 string=0x0000000000267674 "h\n"
 *   insn=0x0000000000267674 string=0x0000000000267678 "A"
 *   insn=0x0000000000267678 string=0x000000000026767C "h"
 *   insn=0x000000000026768C string=0x0000000000267690 " "
 *   insn=0x0000000000267694 string=0x0000000000267698 " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall `non-virtual thunk to'Caver::EntityActionComponent::Update(
        Caver::EntityActionComponent *this,
        float a2)
{
  __int64 v3; // x19
  float result; // s0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8

  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    Caver::SceneObject::updateSpeedMultiplier(*((Caver::SceneObject **)this + 2));
    *(float *)(v3 + 84) = result;
    if ( *(_BYTE *)(*((_QWORD *)this + 16) + 83LL) )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
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
    result = *((float *)this + 36) + a2;
    *((float *)this + 36) = result;
  }
  return result;
}

