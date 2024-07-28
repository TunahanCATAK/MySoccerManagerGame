//
// Created by Tunahan Catak on 28/07/2024.
//

#ifndef MYSOCCERMANAGERGAME_EXAMPLEREPOSITORY_H
#define MYSOCCERMANAGERGAME_EXAMPLEREPOSITORY_H

#include "IExampleRepository.h"

class ExampleRepository : public IExampleRepository {
public:
    void save() override;
    void load() override;
};
#endif //MYSOCCERMANAGERGAME_EXAMPLEREPOSITORY_H
