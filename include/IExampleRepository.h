//
// Created by Tunahan Catak on 28/07/2024.
//

#ifndef MYSOCCERMANAGERGAME_IEXAMPLEREPOSITORY_H
#define MYSOCCERMANAGERGAME_IEXAMPLEREPOSITORY_H

class IExampleRepository {
public:
    virtual ~IExampleRepository() = default;
    virtual void save() = 0;
    virtual void load() = 0;
};


#endif //MYSOCCERMANAGERGAME_IEXAMPLEREPOSITORY_H
