/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F95B0
 * Mangled: ._ZN5Caver10FastVectorISsE6ResizeEi
 * Demangled: Caver::FastVector<std::string>::Resize(int)
 *
 * Callers: 1
 *   0x0000000000443134  Caver::TabView::AddTab(std::string const&)
 *
 * Callees: 1
 *   0x0000000000443BA0  Caver::FastVector<std::string>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F95B8 string=0x00000000001F95BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<std::string>::Resize()
{
  return _ZN5Caver10FastVectorISsE6ResizeEi();
}

