/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000370120
 * Mangled: _ZN5Caver19PauseViewController8LoadViewEv
 * Demangled: Caver::PauseViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCE50  Caver::PauseView::PauseView(void)
 *   0x0000000000203C50  boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000370354  Caver::PauseViewController::SuspendView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 51
 *   insn=0x0000000000370130 string=0x0000000000370134 "V"
 *   insn=0x0000000000370144 string=0x0000000000370148 "&"
 *   insn=0x0000000000370148 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000037014C string=0x0000000000370150 "@3"
 *   insn=0x0000000000370150 string=0x00000000001FCE50 "0'"
 *   insn=0x000000000037015C string=0x0000000000370160 "hRE"
 *   insn=0x000000000037016C string=0x0000000000370170 "i""
 *   insn=0x0000000000370174 string=0x0000000000370178 "4"
 *   insn=0x0000000000370178 string=0x00000000003701BC "h*@"
 *   insn=0x000000000037017C string=0x0000000000370180 ""
 *   insn=0x0000000000370190 string=0x0000000000370194 "\t@"
 *   insn=0x000000000037019C string=0x00000000003701A0 ""
 *   insn=0x00000000003701B0 string=0x00000000003701B4 "@"
 *   insn=0x00000000003701BC string=0x00000000003701C0 "\tq@"
 *   insn=0x00000000003701C0 string=0x00000000003701C4 "?I"
 *   insn=0x00000000003701C8 string=0x0000000000370200 "i""
 *   insn=0x00000000003701CC string=0x00000000003701D0 "I"
 *   insn=0x00000000003701D0 string=0x00000000003701D4 "\tq"
 *   insn=0x00000000003701D4 string=0x00000000003701D8 "@"
 *   insn=0x00000000003701DC string=0x0000000000583734 "o"
 *   insn=0x00000000003701E0 string=0x00000000003701E4 "!5G"
 *   insn=0x00000000003701EC string=0x00000000003701F0 ""
 *   insn=0x00000000003701F0 string=0x00000000003701F4 "-@"
 *   insn=0x00000000003701F8 string=0x00000000003701FC "h*@"
 *   insn=0x0000000000370200 string=0x0000000000370204 "\ty"
 *   insn=0x0000000000370204 string=0x0000000000370208 "t.@"
 *   insn=0x000000000037020C string=0x000000000037021C "u"
 *   insn=0x0000000000370210 string=0x0000000000370214 ")\t"
 *   insn=0x000000000037021C string=0x0000000000370220 "h"
 *   insn=0x0000000000370220 string=0x0000000000370224 "5"
 *   insn=0x0000000000370224 string=0x0000000000370268 "`"@"
 *   insn=0x0000000000370228 string=0x000000000037022C ""
 *   insn=0x0000000000370238 string=0x000000000037023C "\t@"
 *   insn=0x0000000000370248 string=0x000000000037024C ""
 *   insn=0x0000000000370258 string=0x000000000037025C "@"
 *   insn=0x000000000037026C string=0x0000000000370270 ""
 *   insn=0x000000000037026C string=0x0000000000370280 "4"
 *   insn=0x0000000000370270 string=0x0000000000370274 ""
 *   insn=0x0000000000370284 string=0x0000000000370288 ""
 *   insn=0x0000000000370298 string=0x000000000037029C "\t@"
 *   insn=0x00000000003702A4 string=0x00000000003702A8 ""
 *   insn=0x00000000003702B8 string=0x00000000003702BC "@"
 *   insn=0x00000000003702E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003702EC string=0x00000000003702F0 "4"
 *   insn=0x00000000003702F4 string=0x00000000003702F8 ""
 *   insn=0x0000000000370304 string=0x0000000000370308 "\t@"
 *   insn=0x0000000000370314 string=0x0000000000370318 ""
 *   insn=0x0000000000370324 string=0x0000000000370328 "@"
 *   insn=0x0000000000370334 string=0x0000000000370338 "cE"
 *   insn=0x0000000000370348 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037034C string=0x0000000000370350 "]E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::PauseViewController::LoadView(
        Caver::PauseViewController *this))(_QWORD, Caver::PauseViewController *)
{
  Caver::PauseView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  float *v7; // x0
  _QWORD *v8; // x20
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::PauseViewController *); // x0
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // [xsp+8h] [xbp-38h]
  __int64 v16; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::PauseView *)operator new(0x108u);
  Caver::PauseView::PauseView(v2);
  boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>();
  v3 = (_QWORD *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = v15;
  *((_QWORD *)this + 11) = v16;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v6 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v6 + 112) != 18 )
  {
    v7 = *(float **)(v6 + 88);
    *(_DWORD *)(v6 + 112) = 18;
    if ( v7 )
    {
      if ( v7[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v7 + 88LL))(v7);
        v6 = *((_QWORD *)this + 10);
      }
    }
  }
  *(_QWORD *)(v6 + 240) = (char *)this + 72;
  v8 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v8 )
    v8[1] += 2LL;
  v9 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v6;
  *((_QWORD *)this + 4) = v8;
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  result = (__int64 (__fastcall ***)(_QWORD, Caver::PauseViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::PauseViewController *))(**result)(result, this);
  if ( v8 )
  {
    v13 = v8[1] - 1LL;
    v8[1] = v13;
    if ( !v13 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::PauseViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v14 = v8[2] - 1LL;
      v8[2] = v14;
      if ( !v14 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::PauseViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  return result;
}

