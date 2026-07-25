/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A517C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver14GUIPopoverViewEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIPopoverView>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A5180 string=0x00000000004A5184 ""
 *   insn=0x00000000004A5188 string=0x00000000004A518C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::GUIPopoverView>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

