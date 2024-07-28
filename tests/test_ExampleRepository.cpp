//
// Created by Tunahan Catak on 28/07/2024.
//

#include <gtest/gtest.h>
#include "ExampleRepository.h"

TEST(RepositoryTest, SaveLoad) {
    ExampleRepository repo;
    ASSERT_NO_THROW(repo.save());
    ASSERT_NO_THROW(repo.load());
}