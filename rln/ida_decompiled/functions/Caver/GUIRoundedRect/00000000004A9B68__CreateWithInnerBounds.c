/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9B68
 * Mangled: _ZN5Caver14GUIRoundedRect21CreateWithInnerBoundsERKNS_9RectangleEf
 * Demangled: Caver::GUIRoundedRect::CreateWithInnerBounds(Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000001FC470  Caver::GUIRoundedRect::CreateWithInnerBounds(Caver::Rectangle const&,float)
 *
 * Callees: 2
 *   0x0000000000201030  Caver::Rectangle::Inset(float)
 *   0x0000000000203CD0  Caver::GUIRoundedRect::CreateSprite(void)
 *
 * Referenced strings: 16
 *   insn=0x00000000004A9B74 string=0x00000000004A9B78 "h"
 *   insn=0x00000000004A9B7C string=0x00000000004A9B80 "!"
 *   insn=0x00000000004A9B80 string=0x00000000004A9B84 "`r"
 *   insn=0x00000000004A9B84 string=0x00000000004A9B88 "a"
 *   insn=0x00000000004A9B88 string=0x00000000004A9B8C ")]"
 *   insn=0x00000000004A9B8C string=0x00000000004A9B90 "`"
 *   insn=0x00000000004A9B90 string=0x00000000004A9B94 "b"
 *   insn=0x00000000004A9B94 string=0x00000000004A9B98 "c"
 *   insn=0x00000000004A9B98 string=0x00000000004A9B9C "a"
 *   insn=0x00000000004A9BA4 string=0x00000000004A9BA8 "D($"
 *   insn=0x00000000004A9BA8 string=0x00000000004A9BAC "@"
 *   insn=0x00000000004A9BAC string=0x00000000004A9BB0 "b(%"
 *   insn=0x00000000004A9BB4 string=0x00000000004A9BB8 " "
 *   insn=0x00000000004A9BB8 string=0x00000000004A9BBC "`"
 *   insn=0x00000000004A9BBC string=0x00000000004A9BC0 "b"
 *   insn=0x00000000004A9BC8 string=0x00000000004A9BCC "Ah"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUIRoundedRect::CreateWithInnerBounds(_QWORD *this, const Caver::Rectangle *a2, float a3)
{
  __int64 v3; // x19
  float32x2_t v4; // d0
  float v5; // s6
  float v6; // s4
  float v7; // s2

  v3 = (__int64)this;
  if ( *this )
  {
    *(_OWORD *)((char *)this + 28) = *(_OWORD *)a2;
    Caver::Rectangle::Inset((Caver::Rectangle *)((char *)this + 28), a3);
    v4.n64_u32[0] = *(_DWORD *)(v3 + 60);
    v5 = *(float *)(v3 + 72);
    v6 = *(float *)(v3 + 68) + *(float *)(v3 + 40);
    v4.n64_u32[1] = *(_DWORD *)(v3 + 68);
    v7 = (float)(v4.n64_f32[0] + *(float *)(v3 + 36)) + *(float *)(v3 + 64);
    *(float32x2_t *)(v3 + 12) = vsub_f32(*(float32x2_t *)(v3 + 28), v4);
    *(float *)(v3 + 20) = v7;
    *(float *)(v3 + 24) = v6 + v5;
    return (_QWORD *)Caver::GUIRoundedRect::CreateSprite((Caver::GUIRoundedRect *)v3);
  }
  return this;
}

