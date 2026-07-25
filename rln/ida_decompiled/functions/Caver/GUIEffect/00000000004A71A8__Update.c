/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A71A8
 * Mangled: _ZN5Caver9GUIEffect6UpdateEf
 * Demangled: Caver::GUIEffect::Update(float)
 *
 * Callers: 1
 *   0x00000000001F8550  Caver::GUIEffect::Update(float)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE7F0  Caver::GUIEffect::CreateVertices(void)
 *   0x0000000000200970  Caver::GUITargetAction::Send(void *,Caver::GUIEvent const&)
 *
 * Referenced strings: 26
 *   insn=0x00000000004A71B4 string=0x00000000004A71B8 "T"
 *   insn=0x00000000004A71C4 string=0x00000000004A71C8 "h:@"
 *   insn=0x00000000004A71C8 string=0x00000000004A71CC "h"
 *   insn=0x00000000004A71CC string=0x00000000004A71D0 "h"
 *   insn=0x00000000004A71D0 string=0x00000000004A71D4 "("
 *   insn=0x00000000004A71D8 string=0x00000000004A71DC "aF@"
 *   insn=0x00000000004A71D8 string=0x0000000000583734 "o"
 *   insn=0x00000000004A71E0 string=0x00000000004A71E4 "  #"
 *   insn=0x00000000004A71E8 string=0x00000000004A7200 "h"
 *   insn=0x00000000004A71F4 string=0x00000000004A71F8 "h"
 *   insn=0x00000000004A71F8 string=0x00000000004A71FC "'"
 *   insn=0x00000000004A7200 string=0x00000000004A7204 "bN@"
 *   insn=0x00000000004A7204 string=0x00000000004A7208 "H"
 *   insn=0x00000000004A7208 string=0x00000000004A720C "H  "
 *   insn=0x00000000004A7214 string=0x00000000004A7218 "@8 "
 *   insn=0x00000000004A721C string=0x00000000004A7220 "`N"
 *   insn=0x00000000004A7220 string=0x00000000004A7224 "e"
 *   insn=0x00000000004A7230 string=0x00000000004A7234 "@ #"
 *   insn=0x00000000004A723C string=0x0000000000583730 "w"
 *   insn=0x00000000004A7248 string=0x00000000004A724C "`N"
 *   insn=0x00000000004A7258 string=0x00000000004A725C "hN"
 *   insn=0x00000000004A7268 string=0x00000000004A726C "h"
 *   insn=0x00000000004A7270 string=0x00000000004A7274 "_]"
 *   insn=0x00000000004A7274 string=0x00000000004A7278 "h"
 *   insn=0x00000000004A727C string=0x00000000004A7280 "`""
 *   insn=0x00000000004A72B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIEffect::Update(Caver::GUIEffect *this, float a2)
{
  float v3; // s1
  float v4; // s2
  float v5; // s0
  float v6; // s0

  _ReadStatusReg(TPIDR_EL0);
  if ( *((_DWORD *)this + 14) && !*(_BYTE *)this )
  {
    v3 = *((float *)this + 17);
    if ( v3 < 0.001 )
    {
      Caver::GUIEffect::CreateVertices(this);
      *(_BYTE *)this = 1;
      return;
    }
    v4 = *((float *)this + 19);
    if ( *((_BYTE *)this + 64) )
    {
      if ( v4 > 0.0 )
      {
        v5 = v4 - (float)(a2 / v3);
        *((float *)this + 19) = v5;
        if ( v5 < 0.001 )
          *((_DWORD *)this + 19) = 0;
        goto LABEL_14;
      }
      *((_DWORD *)this + 14) = 0;
    }
    else if ( v4 < 1.0 )
    {
      v6 = (float)(a2 / v3) + v4;
      *((float *)this + 19) = v6;
      if ( v6 > 0.999 )
        *((_DWORD *)this + 19) = 1065353216;
      goto LABEL_14;
    }
    *(_BYTE *)this = 1;
LABEL_14:
    Caver::GUIEffect::CreateVertices(this);
    if ( *(_BYTE *)this )
      Caver::GUITargetAction::Send();
  }
}

