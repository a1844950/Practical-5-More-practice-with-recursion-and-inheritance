#include "MapGeneric.h"

void MapGeneric::recursiveMap(
  const std::vector<int>&list,
  std::vector<int>&res){
    return;
  }
  res.push_back(f(list.at(res.size())));
  recursiveMap(list,res)l
  }

  std::vector<int> MapGeneric::map(std::vector<int>list){
    std::vector<int>res:
    recursiveMap(list,res);
    return res;
  }
)
