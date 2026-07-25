/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8E50
 * Mangled: _ZN5boost6detail18sp_counted_impl_pdIPtNS_21checked_array_deleterItEEE11get_deleterERKSt9type_info
 * Demangled: boost::detail::sp_counted_impl_pd<ushort *,boost::checked_array_deleter<ushort>>::get_deleter(std::type_info const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 12
 *   insn=0x00000000002B8E58 string=0x00000000002B8E5C "i!"
 *   insn=0x00000000002B8E5C string=0x00000000002B8E60 "("
 *   insn=0x00000000002B8E60 string=0x00000000002B8E64 ")"
 *   insn=0x00000000002B8E64 string=0x0000000000589D70 "N5boost21checked_array_deleterItEE"
 *   insn=0x00000000002B8E6C string=0x00000000002B8E70 "`"
 *   insn=0x00000000002B8E70 string=0x00000000002B8E74 "\t"
 *   insn=0x00000000002B8E70 string=0x00000000002B8E9C "`"
 *   insn=0x00000000002B8E74 string=0x00000000002B8E78 "?"
 *   insn=0x00000000002B8E7C string=0x00000000002B8E80 "a!"
 *   insn=0x00000000002B8E80 string=0x00000000002B8E84 "!"
 *   insn=0x00000000002B8E8C string=0x00000000002B8E90 "`"
 *   insn=0x00000000002B8E8C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::sp_counted_impl_pd<unsigned short *,boost::checked_array_deleter<unsigned short>>::get_deleter(
        __int64 a1,
        __int64 a2)
{
  char *v2; // x8

  v2 = *(char **)(a2 + 8);
  if ( v2 == "N5boost21checked_array_deleterItEE" || *v2 != 42 && !strcmp(v2, "N5boost21checked_array_deleterItEE") )
    return a1 + 32;
  else
    return 0;
}

