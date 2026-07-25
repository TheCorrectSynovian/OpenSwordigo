/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000453974
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver21WhooshParticleEmitterEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::WhooshParticleEmitter>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000453978 string=0x000000000045397C ""
 *   insn=0x0000000000453980 string=0x0000000000453984 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_p<Caver::WhooshParticleEmitter>::dispose(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

