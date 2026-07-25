/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AB28
 * Mangled: sub_54AB28
 * Demangled: sub_54AB28
 *
 * Callers: 7
 *   0x000000000024592C  boost::bad_function_call::bad_function_call(void)
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *   0x000000000054AADC  sub_54AADC
 *   0x0000000000565808  sub_565808
 *   0x0000000000565AD8  sub_565AD8
 *   0x0000000000566174  sub_566174
 *
 * Callees: 4
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054AB68  sub_54AB68
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000054AB28 string=0x000000000054AB2C "b"
 *   insn=0x000000000054AB34 string=0x000000000054AB38 "B@"
 *   insn=0x000000000054AB40 string=0x000000000054AB44 "y~"
 *   insn=0x000000000054AB58 string=0x000000000054AB5C "E"
 *   insn=0x000000000054AB60 string=0x000000000054AB64 "X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54AB28(_QWORD *a1, __int64 a2)
{
  *a1 = off_6B7650;
  return sub_56A528(a1 + 1, a2);
}

