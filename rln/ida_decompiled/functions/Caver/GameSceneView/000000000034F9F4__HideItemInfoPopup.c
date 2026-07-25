/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034F9F4
 * Mangled: _ZN5Caver13GameSceneView17HideItemInfoPopupEv
 * Demangled: Caver::GameSceneView::HideItemInfoPopup(void)
 *
 * Callers: 2
 *   0x00000000001F62F0  Caver::GameSceneView::HideItemInfoPopup(void)
 *   0x000000000034F57C  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x000000000034FA04 string=0x000000000034FA08 "`"
 *   insn=0x000000000034FA08 string=0x000000000034FA0C ""
 *   insn=0x000000000034FA0C string=0x000000000034FA10 "=@"
 *   insn=0x000000000034FA20 string=0x000000000034FA24 "h"
 *   insn=0x000000000034FA24 string=0x000000000034FA28 ""
 *   insn=0x000000000034FA28 string=0x000000000034FA2C "h"
 *   insn=0x000000000034FA2C string=0x000000000034FA30 "!"
 *   insn=0x000000000034FA30 string=0x000000000034FA34 "h"
 *   insn=0x000000000034FA38 string=0x000000000034FA3C "\t@"
 *   insn=0x000000000034FA40 string=0x000000000034FA44 "h\n@"
 *   insn=0x000000000034FA44 string=0x000000000034FA48 ""
 *   insn=0x000000000034FA48 string=0x000000000034FA4C "h\n"
 *   insn=0x000000000034FA50 string=0x000000000034FA60 "h"
 *   insn=0x000000000034FA70 string=0x000000000034FA74 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::HideItemInfoPopup(Caver::GameSceneView *this)
{
  __int64 result; // x0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8

  result = *((_QWORD *)this + 38);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 120LL))(result);
    v3 = (_QWORD *)*((_QWORD *)this + 39);
    *((_QWORD *)this + 38) = 0;
    *((_QWORD *)this + 39) = 0;
    if ( v3 )
    {
      v4 = v3[1] - 1LL;
      v3[1] = v4;
      if ( !v4 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
  }
  return result;
}

