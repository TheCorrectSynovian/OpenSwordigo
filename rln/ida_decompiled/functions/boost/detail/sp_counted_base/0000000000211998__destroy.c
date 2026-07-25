/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211998
 * Mangled: _ZN5boost6detail15sp_counted_base7destroyEv
 * Demangled: boost::detail::sp_counted_base::destroy(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000211998 string=0x000000000021199C ""
 *   insn=0x00000000002119A0 string=0x00000000002119A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_base::destroy(__int64 this)
{
  if ( this )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
  return this;
}

