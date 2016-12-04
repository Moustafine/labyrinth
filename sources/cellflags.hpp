#ifndef CELLFLAGS_HPP
#define CELLFLAGS_HPP

namespace Ct {

enum class CellFlags {
  Empty = 0,
  NorthEdge = 1 << 0,
  SouthEdge = 1 << 1,
  WestEdge = 1 << 2,
  EastEdge = 1 << 3,
  AllEdges = NorthEdge | SouthEdge | WestEdge | EastEdge,
  Begin = 1 << 4,
  End  = 1 << 5
};

inline CellFlags operator |(CellFlags firstCellFlag, CellFlags secondCellFlag)
{
  return static_cast<CellFlags>
      (static_cast<int>(firstCellFlag) | static_cast<int>(secondCellFlag));
}

inline CellFlags operator |=(CellFlags & firstCellFlag,
                             CellFlags secondCellFlag)
{
  return firstCellFlag = firstCellFlag | secondCellFlag;
}

inline CellFlags operator &(CellFlags firstCellFlag,
                            CellFlags secondCellFlag)
{
  return static_cast<CellFlags>
      (static_cast<int>(firstCellFlag) & static_cast<int>(secondCellFlag));
}

inline CellFlags operator &=(CellFlags & firstCellFlag,
                             CellFlags secondCellFlag)
{
  return firstCellFlag = firstCellFlag & secondCellFlag;
}

} // namespace Ct

#endif // CELLFLAGS_HPP
