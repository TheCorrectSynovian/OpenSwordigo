/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004800FC
 * Mangled: _ZN5boost6detail8function26void_function_obj_invoker0INS_3_bi6bind_tIvNS_4_mfi3mf0IvN5Caver11AudioSystemEEENS3_5list1INS3_5valueIPS8_EEEEEEvE6invokeERNS1_15function_bufferE
 * Demangled: boost::detail::function::void_function_obj_invoker0<boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>,void>::invoke(boost::detail::function::function_buffer &)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000480104 string=0x0000000000480108 "i"
 *   insn=0x0000000000480108 string=0x000000000048010C ""
 *   insn=0x0000000000480108 string=0x0000000000480114 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::void_function_obj_invoker0<boost::_bi::bind_t<void,boost::_mfi::mf0<void,Caver::AudioSystem>,boost::_bi::list1<boost::_bi::value<Caver::AudioSystem*>>>,void>::invoke(
        __int64 a1)
{
  __int64 v1; // x9
  __int64 (__fastcall *v2)(_QWORD); // x1
  _QWORD *v3; // x0

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(__int64 (__fastcall **)(_QWORD))a1;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) + (v1 >> 1));
  if ( (v1 & 1) != 0 )
    v2 = *(__int64 (__fastcall **)(_QWORD))((char *)v2 + *v3);
  return v2(v3);
}

