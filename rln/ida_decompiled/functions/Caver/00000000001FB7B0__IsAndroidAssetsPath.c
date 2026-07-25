/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB7B0
 * Mangled: ._ZN5Caver19IsAndroidAssetsPathERKSs
 * Demangled: Caver::IsAndroidAssetsPath(std::string const&)
 *
 * Callers: 1
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *
 * Callees: 1
 *   0x00000000004B4224  Caver::IsAndroidAssetsPath(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB7B8 string=0x00000000001FB7BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::IsAndroidAssetsPath()
{
  return _ZN5Caver19IsAndroidAssetsPathERKSs();
}

