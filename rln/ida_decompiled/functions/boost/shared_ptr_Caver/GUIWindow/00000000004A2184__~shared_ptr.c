/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A2184
 * Mangled: _ZN5boost10shared_ptrIN5Caver9GUIWindowEED2Ev
 * Demangled: boost::shared_ptr<Caver::GUIWindow>::~shared_ptr()
 *
 * Callers: 2
 *   0x000000000020C9E0  sub_20C9E0
 *   0x00000000004A1CD0  Caver::GUIWindow::~GUIWindow()
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000004A2194 string=0x00000000004A2198 "h"
 *   insn=0x00000000004A2198 string=0x00000000004A219C ""
 *   insn=0x00000000004A219C string=0x00000000004A21A0 "h"
 *   insn=0x00000000004A21A0 string=0x00000000004A21A4 "!"
 *   insn=0x00000000004A21A4 string=0x00000000004A21A8 "h"
 *   insn=0x00000000004A21AC string=0x00000000004A21B0 "\t@"
 *   insn=0x00000000004A21B4 string=0x00000000004A21B8 "h\n@"
 *   insn=0x00000000004A21B8 string=0x00000000004A21BC ""
 *   insn=0x00000000004A21BC string=0x00000000004A21C0 "h\n"
 *   insn=0x00000000004A21C4 string=0x00000000004A21D4 "h"
 *   insn=0x00000000004A21E4 string=0x00000000004A21E8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GUIWindow>::~shared_ptr(__int64 result)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = *(_QWORD **)(result + 8);
  if ( v1 )
  {
    v2 = v1[1] - 1LL;
    v1[1] = v2;
    if ( !v2 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
      v3 = v1[2] - 1LL;
      v1[2] = v3;
      if ( !v3 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 24LL))(v1);
    }
  }
  return result;
}

