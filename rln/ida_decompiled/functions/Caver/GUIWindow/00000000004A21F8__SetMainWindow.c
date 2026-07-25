/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A21F8
 * Mangled: _ZN5Caver9GUIWindow13SetMainWindowERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::GUIWindow::SetMainWindow(boost::shared_ptr<Caver::GUIWindow> const&)
 *
 * Callers: 1
 *   0x00000000001F9F80  Caver::GUIWindow::SetMainWindow(boost::shared_ptr<Caver::GUIWindow> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000004A2200 string=0x00000000004A2204 "\t @"
 *   insn=0x00000000004A2208 string=0x00000000004A220C "\n"
 *   insn=0x00000000004A2208 string=0x00000000004A2218 "*"
 *   insn=0x00000000004A220C string=0x00000000004A2210 "J"
 *   insn=0x00000000004A2210 string=0x00000000004A2214 "\n"
 *   insn=0x00000000004A2218 string=0x00000000004A2220 "S"
 *   insn=0x00000000004A2220 string=0x00000000004A2224 "I!"
 *   insn=0x00000000004A2228 string=0x00000000004A222C "h"
 *   insn=0x00000000004A222C string=0x00000000004A2230 ""
 *   insn=0x00000000004A2230 string=0x00000000004A2234 "h"
 *   insn=0x00000000004A2234 string=0x00000000004A2238 "!"
 *   insn=0x00000000004A2238 string=0x00000000004A223C "h"
 *   insn=0x00000000004A2240 string=0x00000000004A2244 "\t@"
 *   insn=0x00000000004A2248 string=0x00000000004A224C "h\n@"
 *   insn=0x00000000004A224C string=0x00000000004A2250 ""
 *   insn=0x00000000004A2250 string=0x00000000004A2254 "h\n"
 *   insn=0x00000000004A2258 string=0x00000000004A2268 "h"
 *   insn=0x00000000004A2278 string=0x00000000004A227C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::GUIWindow::SetMainWindow(__int64 *result)
{
  __int64 v1; // x8
  __int64 v2; // x9
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = *result;
  v1 = result[1];
  if ( v1 )
    ++*(_QWORD *)(v1 + 8);
  v3 = (_QWORD *)qword_6E9E68;
  qword_6E9E60 = v2;
  qword_6E9E68 = v1;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        return (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  return result;
}

