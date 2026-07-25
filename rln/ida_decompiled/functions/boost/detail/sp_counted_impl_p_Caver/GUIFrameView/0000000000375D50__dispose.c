/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000375D50
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver12GUIFrameViewEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIFrameView>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000375D54 string=0x0000000000375D58 ""
 *   insn=0x0000000000375D5C string=0x0000000000375D60 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::GUIFrameView>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  return result;
}

