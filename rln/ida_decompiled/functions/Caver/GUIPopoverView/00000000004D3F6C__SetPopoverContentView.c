/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D3F6C
 * Mangled: _ZN5Caver14GUIPopoverView21SetPopoverContentViewERKN5boost10shared_ptrINS_7GUIViewEEE
 * Demangled: Caver::GUIPopoverView::SetPopoverContentView(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 1
 *   0x0000000000202EC0  Caver::GUIPopoverView::SetPopoverContentView(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callees: 1
 *   0x0000000000203970  Caver::GUIPopoverView::UpdateLayout(void)
 *
 * Referenced strings: 19
 *   insn=0x00000000004D3F7C string=0x00000000004D3F80 "`"
 *   insn=0x00000000004D3F88 string=0x00000000004D3F8C ",@"
 *   insn=0x00000000004D3F94 string=0x00000000004D3F98 ""
 *   insn=0x00000000004D3F98 string=0x00000000004D3F9C "=@"
 *   insn=0x00000000004D3FA4 string=0x00000000004D3FA8 "t"
 *   insn=0x00000000004D3FAC string=0x00000000004D3FB0 "\n"
 *   insn=0x00000000004D3FAC string=0x00000000004D3FBC "u"
 *   insn=0x00000000004D3FB0 string=0x00000000004D3FB4 "J"
 *   insn=0x00000000004D3FB4 string=0x00000000004D3FB8 "\n"
 *   insn=0x00000000004D3FBC string=0x00000000004D3FC0 "i""
 *   insn=0x00000000004D3FC0 string=0x00000000004D3FC4 "5"
 *   insn=0x00000000004D3FC4 string=0x00000000004D4008 "h"
 *   insn=0x00000000004D3FC8 string=0x00000000004D3FCC ""
 *   insn=0x00000000004D3FDC string=0x00000000004D3FE0 "\t@"
 *   insn=0x00000000004D3FE8 string=0x00000000004D3FEC ""
 *   insn=0x00000000004D3FFC string=0x00000000004D4000 "@"
 *   insn=0x00000000004D4010 string=0x00000000004D4014 "1@"
 *   insn=0x00000000004D4018 string=0x00000000004D401C "h"
 *   insn=0x00000000004D4030 string=0x00000000004D4034 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIPopoverView::SetPopoverContentView(Caver::GUIPopoverView *a1, __int64 *a2)
{
  _QWORD *v3; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 result; // x0

  v3 = (_QWORD *)*((_QWORD *)a1 + 32);
  if ( v3 && (Caver::GUIPopoverView *)v3[11] == a1 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 120LL))(v3);
  v6 = *a2;
  v5 = a2[1];
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)a1 + 33);
  *((_QWORD *)a1 + 32) = v6;
  *((_QWORD *)a1 + 33) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  result = (*(__int64 (__fastcall **)(Caver::GUIPopoverView *, _QWORD *))(*(_QWORD *)a1 + 96LL))(a1, (_QWORD *)a1 + 32);
  if ( *((_BYTE *)a1 + 233) )
    return Caver::GUIPopoverView::UpdateLayout(a1);
  return result;
}

